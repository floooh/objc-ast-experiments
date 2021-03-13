#include <assert.h>
#include <stdio.h>

// FIXME
#define DISPATCH_TIME_FOREVER (~0ull)
#include "hello_macos.h"

static void completed_handler(void* block_literal, void* cmd_buf);

// clang blocks 'emulation' (see: https://clang.llvm.org/docs/Block-ABI-Apple.html)
extern void _NSConcreteGlobalBlock;
struct Block_literal_1 {
    void* isa;
    int flags;
    int reserved;
    void (*invoke)(void*, void*);
    struct Block_descriptor_1 {
        unsigned long int reserved;
        unsigned long int size;
        const char* signature;
    } *descriptor;
};

static struct Block_descriptor_1 block_desc = {
    .reserved = 0,
    .size = sizeof(struct Block_literal_1),
    // taken from godbolt disassembly, this looks different than what's described
    // here: https://developer.apple.com/library/archive/documentation/Cocoa/Conceptual/ObjCRuntimeGuide/Articles/ocrtTypeEncodings.html
    .signature = "v16@?0^v8"
};

static struct Block_literal_1 block = {
    .isa = &_NSConcreteGlobalBlock,
    .flags = (1<<28) | (1<<30),     // BLOCK_IS_GLOBAL|BLOCK_HAS_SIGNATURE
    .reserved = 0,
    .invoke = completed_handler,
    .descriptor = &block_desc,
};

id app_delegate;
id win_delegate;
MTKView* mtk_view;
MTLCommandQueue* mtl_queue;
dispatch_semaphore_t sem;
MTLBuffer* mtl_buf;
MTLRenderPipelineState* mtl_rps;
MTLDepthStencilState* mtl_dss;

id oc_alloc(Class cls) {
    return ((id(*)(id,SEL))objc_msgSend)((id)cls, sel_getUid("alloc"));
}

id oc_alloc_init(Class cls) {
    return ((id(*)(id,SEL))objc_msgSend)(oc_alloc(cls), sel_getUid("init"));
}

void oc_release(id obj) {
    ((void(*)(id,SEL))objc_msgSend)(obj, sel_getUid("release"));
}

void app_didFinishLaunching(id obj, SEL sel, NSNotification* notification) {
    uint64_t style_mask = 
        NSWindowStyleMaskTitled |
        NSWindowStyleMaskClosable |
        NSWindowStyleMaskMiniaturizable |
        NSWindowStyleMaskResizable;
    NSWindow* win = (NSWindow*) oc_alloc(objc_lookUpClass("NSWindow"));
    NSWindow_initWithContentRect_styleMask_backing_defer(
        win,
        (NSRect){ .origin = { 0, 0 }, .size = { 300, 300 } },
        style_mask,
        NSBackingStoreBuffered,
        false);
    NSWindow_setTitle(win, NSString_stringWithUTF8String("Hello Metal from C"));
    NSWindow_setAcceptsMouseMovedEvents(win, true);
    NSWindow_center(win);
    NSWindow_setRestorable(win, true);
    NSWindow_setDelegate(win, (NSWindowDelegate*)win_delegate);

    MTLDevice* mtl_device = MTLCreateSystemDefaultDevice();
    printf("MTLDevice: %p\n", mtl_device);
    MTKView_setPreferredFramesPerSecond(mtk_view, 60);
    MTKView_setDevice(mtk_view, mtl_device);
    MTKView_setColorPixelFormat(mtk_view, MTLPixelFormatBGRA8Unorm);
    MTKView_setDepthStencilPixelFormat(mtk_view, MTLPixelFormatDepth32Float_Stencil8);
    MTKView_setSampleCount(mtk_view, 1);
    MTKView_setAutoResizeDrawable(mtk_view, true);

    NSWindow_setContentView(win, (NSView*)mtk_view);
    NSWindow_makeFirstResponder(win, (NSResponder*)mtk_view);
    NSWindow_makeKeyAndOrderFront(win, 0);

    mtl_queue = MTLDevice_newCommandQueue(mtl_device);
    printf("mtl_queue: %p\n", mtl_queue);

    sem = dispatch_semaphore_create(2);
    printf("sem: %p\n", sem);

    // create Metal resource objects
    float vertices[] = {
         0.0f, 0.5f, 0.5f,  1.0f, 0.0f, 0.0f, 1.0f,
         0.5f, -0.5f, 0.5f, 0.0f, 1.0f, 0.0f, 1.0f,
        -0.5f, -0.5f, 0.5f, 0.0f, 0.0f, 1.0f, 1.0f
    };
    mtl_buf = MTLDevice_newBufferWithBytes_length_options(mtl_device, vertices, sizeof(vertices), MTLResourceStorageModeShared);
    printf("mtl_buf: %p\n", mtl_buf);

    const char* src = 
        "#include <metal_stdlib>\n"
        "using namespace metal;\n"
        "struct vs_in {\n"
        "  float4 position [[attribute(0)]];\n"
        "  float4 color [[attribute(1)]];\n"
        "};\n"
        "struct vs_out {\n"
        "  float4 position [[position]];\n"
        "  float4 color;\n"
        "};\n"
        "vertex vs_out vs_main(vs_in inp [[stage_in]]) {\n"
        "  vs_out outp;\n"
        "  outp.position = inp.position;\n"
        "  outp.color = inp.color;\n"
        "  return outp;\n"
        "}\n"
        "fragment float4 fs_main(float4 color [[stage_in]]) {\n"
        "  return color;\n"
        "};\n";
    NSError* err = 0;
    MTLLibrary* lib = MTLDevice_newLibraryWithSource_options_error(mtl_device, NSString_stringWithUTF8String(src), 0, &err);
    printf("lib: %p\n", lib);
    MTLFunction* vs_func = MTLLibrary_newFunctionWithName(lib, NSString_stringWithUTF8String("vs_main"));
    MTLFunction* fs_func = MTLLibrary_newFunctionWithName(lib, NSString_stringWithUTF8String("fs_main"));
    printf("vs_func: %p\n", vs_func);
    printf("fs_func: %p\n", fs_func);

    MTLVertexDescriptor* vtx_desc = MTLVertexDescriptor_vertexDescriptor();
    MTLVertexAttributeDescriptorArray* attr_arr = MTLVertexDescriptor_attributes(vtx_desc);
    MTLVertexAttributeDescriptor* attr0 = MTLVertexAttributeDescriptorArray_objectAtIndexedSubscript(attr_arr, 0);
    MTLVertexAttributeDescriptor* attr1 = MTLVertexAttributeDescriptorArray_objectAtIndexedSubscript(attr_arr, 1);
    MTLVertexAttributeDescriptor_setFormat(attr0, MTLVertexFormatFloat3);
    MTLVertexAttributeDescriptor_setOffset(attr0, 0);
    MTLVertexAttributeDescriptor_setBufferIndex(attr0, 0);
    MTLVertexAttributeDescriptor_setFormat(attr1, MTLVertexFormatFloat4);
    MTLVertexAttributeDescriptor_setOffset(attr1, 3 * sizeof(float));
    MTLVertexAttributeDescriptor_setBufferIndex(attr1, 0);
    MTLVertexBufferLayoutDescriptorArray* layout_arr = MTLVertexDescriptor_layouts(vtx_desc);
    MTLVertexBufferLayoutDescriptor* layout0 = MTLVertexBufferLayoutDescriptorArray_objectAtIndexedSubscript(layout_arr, 0);
    MTLVertexBufferLayoutDescriptor_setStride(layout0, 7*sizeof(float));
    MTLVertexBufferLayoutDescriptor_setStepFunction(layout0, MTLVertexStepFunctionPerVertex);
    MTLVertexBufferLayoutDescriptor_setStepRate(layout0, 1);

    MTLRenderPipelineDescriptor* rp_desc = (MTLRenderPipelineDescriptor*) oc_alloc_init(objc_lookUpClass("MTLRenderPipelineDescriptor"));
    MTLRenderPipelineDescriptor_setVertexDescriptor(rp_desc, vtx_desc);
    MTLRenderPipelineDescriptor_setVertexFunction(rp_desc, vs_func);
    MTLRenderPipelineDescriptor_setFragmentFunction(rp_desc, fs_func);
    MTLRenderPipelineDescriptor_setSampleCount(rp_desc, 1);
    MTLRenderPipelineDescriptor_setAlphaToCoverageEnabled(rp_desc, false);
    MTLRenderPipelineDescriptor_setAlphaToOneEnabled(rp_desc, false);
    MTLRenderPipelineDescriptor_setRasterizationEnabled(rp_desc, true);
    MTLRenderPipelineDescriptor_setDepthAttachmentPixelFormat(rp_desc, MTLPixelFormatDepth32Float_Stencil8);
    MTLRenderPipelineColorAttachmentDescriptorArray* catt_arr = MTLRenderPipelineDescriptor_colorAttachments(rp_desc);
    MTLRenderPipelineColorAttachmentDescriptor* catt0 = MTLRenderPipelineColorAttachmentDescriptorArray_objectAtIndexedSubscript(catt_arr, 0);
    MTLRenderPipelineColorAttachmentDescriptor_setPixelFormat(catt0, MTLPixelFormatBGRA8Unorm);
    MTLRenderPipelineColorAttachmentDescriptor_setWriteMask(catt0, MTLColorWriteMaskAll);
    MTLRenderPipelineColorAttachmentDescriptor_setBlendingEnabled(catt0, false);
    mtl_rps = MTLDevice_newRenderPipelineStateWithDescriptor_error(mtl_device, rp_desc, &err);
    oc_release((id)rp_desc);
    oc_release((id)vs_func);
    oc_release((id)fs_func);
    oc_release((id)lib);
    printf("mtl_rps: %p\n", mtl_rps);

    MTLDepthStencilDescriptor* ds_desc = (MTLDepthStencilDescriptor*) oc_alloc_init(objc_lookUpClass("MTLDepthStencilDescriptor"));
    MTLDepthStencilDescriptor_setDepthCompareFunction(ds_desc, MTLCompareFunctionAlways);
    MTLDepthStencilDescriptor_setDepthWriteEnabled(ds_desc, false);
    mtl_dss = MTLDevice_newDepthStencilStateWithDescriptor(mtl_device, ds_desc);
    oc_release((id)ds_desc);
    printf("mtl_dss: %p\n", mtl_dss);
}

bool app_applicationShouldTerminateAfterLastWindowClosed(id obj, SEL sel, NSApplication* sender) {
    return true;
}

bool win_windowShouldClose(id obj, SEL sel, id sender) {
    printf("windowShouldClose() called\n");
    return true;
}

bool view_isOpaque(id obj, SEL sel) {
    printf("isOpaque() called\n");
    return true;
}

bool view_canBecomeKeyView(id obj, SEL sel) {
    printf("canBecomeKeyView() called\n");
    return true;
}

bool view_acceptsFirstResponder(id obj, SEL sel) {
    printf("acceptsFirstResponder() called\n");
    return true;
}

void completed_handler(void* block, void* cmd_buffer) {
    dispatch_semaphore_signal(sem);
}

void view_drawRect(id obj, SEL sel, NSRect dirtyRect) {
    static double green = 0.0f;
    green += 0.01;
    if (green > 1.0f) {
        green = 0.0f;
    }

    // begin pass
    dispatch_semaphore_wait(sem, DISPATCH_TIME_FOREVER);

    MTLRenderPassDescriptor* pass_desc = MTKView_currentRenderPassDescriptor(mtk_view);
    MTLRenderPassColorAttachmentDescriptorArray* rpcad_array = MTLRenderPassDescriptor_colorAttachments(pass_desc);
    MTLRenderPassColorAttachmentDescriptor* color_desc = MTLRenderPassColorAttachmentDescriptorArray_objectAtIndexedSubscript(rpcad_array, 0);
    MTLRenderPassDepthAttachmentDescriptor* depth_desc = MTLRenderPassDescriptor_depthAttachment(pass_desc);
    MTLRenderPassAttachmentDescriptor_setLoadAction((MTLRenderPassAttachmentDescriptor*)color_desc, MTLLoadActionClear);
    MTLRenderPassColorAttachmentDescriptor_setClearColor(color_desc, (MTLClearColor){ 1.0, green, 0.0, 1.0 });
    MTLRenderPassAttachmentDescriptor_setLoadAction((MTLRenderPassAttachmentDescriptor*)depth_desc, MTLLoadActionClear);
    MTLRenderPassDepthAttachmentDescriptor_setClearDepth(depth_desc, 1.0);

    MTLCommandBuffer* cmd_buf = MTLCommandQueue_commandBuffer(mtl_queue);
    MTLRenderCommandEncoder* cmd_enc = MTLCommandBuffer_renderCommandEncoderWithDescriptor(cmd_buf, pass_desc);

    // apply pipeline
    MTLRenderCommandEncoder_setCullMode(cmd_enc, MTLCullModeNone);
    MTLRenderCommandEncoder_setRenderPipelineState(cmd_enc, mtl_rps);
    MTLRenderCommandEncoder_setDepthStencilState(cmd_enc, mtl_dss);

    // apply bindings
    MTLRenderCommandEncoder_setVertexBuffer_offset_atIndex(cmd_enc, mtl_buf, 0, 0);

    // draw
    MTLRenderCommandEncoder_drawPrimitives_vertexStart_vertexCount(cmd_enc, MTLPrimitiveTypeTriangle, 0, 3);

    // end pass
    MTLCommandEncoder_endEncoding((MTLCommandEncoder*)cmd_enc);

    // commit
    MTLDrawable* drawable = (MTLDrawable*) MTKView_currentDrawable(mtk_view);
    MTLCommandBuffer_presentDrawable(cmd_buf, drawable);
    MTLCommandBuffer_addCompletedHandler(cmd_buf, &block);
    MTLCommandBuffer_commit(cmd_buf);
}

void init_runtime(void) {
    // app-delegate
    Class app_delegate_class = objc_allocateClassPair(objc_lookUpClass("NSObject"), "HelloAppDelegate", 0);
    assert(app_delegate_class);
    class_addMethod(app_delegate_class, sel_getUid("applicationDidFinishLaunching:"), (IMP)app_didFinishLaunching, "v@:@");
    class_addMethod(app_delegate_class, sel_getUid("applicationShouldTerminateAfterLastWindowClosed:"), (IMP)app_applicationShouldTerminateAfterLastWindowClosed, "B@:@");
    objc_registerClassPair(app_delegate_class); 
    app_delegate = oc_alloc_init(app_delegate_class);
    assert(app_delegate);
    printf("app_delegate: %p\n", app_delegate);

    // window delegate
    Class win_delegate_class = objc_allocateClassPair(objc_lookUpClass("NSObject"), "HelloWinDelegate", 0);
    assert(win_delegate_class);
    class_addMethod(win_delegate_class, sel_getUid("windowShouldClose:"), (IMP)win_windowShouldClose, "B@:@");
    win_delegate = oc_alloc_init(win_delegate_class);
    assert(win_delegate);
    printf("win_delegate: %p\n", win_delegate);

    // MTKView subclass
    Class mtk_view_class = objc_allocateClassPair(objc_lookUpClass("MTKView"), "HelloMtkView", 0);
    assert(mtk_view_class);
    class_addMethod(mtk_view_class, sel_getUid("isOpaque"), (IMP)view_isOpaque, "B@:");
    class_addMethod(mtk_view_class, sel_getUid("canBecomeKeyView"), (IMP)view_canBecomeKeyView, "B@:");
    class_addMethod(mtk_view_class, sel_getUid("acceptsFirstResponder"), (IMP)view_acceptsFirstResponder, "B@:");
    class_addMethod(mtk_view_class, sel_getUid("drawRect:"), (IMP)view_drawRect, "v@:{NSRect={CGPoint=dd}{CGSize=dd}}");
    mtk_view = (MTKView*) oc_alloc_init(mtk_view_class);
    assert(mtk_view);
    printf("mtk_view: %p\n", mtk_view);
}

int main() {
    init_runtime();
    NSApplication* app = NSApplication_sharedApplication();
    NSApplication_setActivationPolicy(app, NSApplicationActivationPolicyRegular);
    NSApplication_setDelegate(app, (NSApplicationDelegate*)app_delegate);
    NSApplication_activateIgnoringOtherApps(app, true);
    NSApplication_run(app);
    return 0;
}