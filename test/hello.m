// same as hello.c, but in ObjC to compare behaviour
//
#import <Cocoa/Cocoa.h>
#import <Metal/Metal.h>
#import <MetalKit/MetalKit.h>
#include <stdio.h> // printf

@interface HelloAppDelegate : NSObject<NSApplicationDelegate>
@end
@interface HelloWindowDelegate : NSObject<NSWindowDelegate>
@end
@interface HelloMTKView : MTKView
@end

static id<MTLDevice> mtl_device;
static id<MTLCommandQueue> mtl_queue;
static MTKView* mtk_view;
static id<MTLBuffer> mtl_buf;
static id<MTLRenderPipelineState> mtl_rps;
static id<MTLDepthStencilState> mtl_dss;
dispatch_semaphore_t sem;

@implementation HelloAppDelegate
- (void)applicationDidFinishLaunching:(NSNotification*)aNotification {
    const NSUInteger style =
        NSWindowStyleMaskTitled |
        NSWindowStyleMaskClosable |
        NSWindowStyleMaskMiniaturizable |
        NSWindowStyleMaskResizable;
    NSWindow* win = [[NSWindow alloc]
        initWithContentRect:NSMakeRect(0, 0, 300, 300)
        styleMask:style
        backing:NSBackingStoreBuffered
        defer:NO];
    [win setTitle:[NSString stringWithUTF8String:"Hello from ObjC"]];
    [win setAcceptsMouseMovedEvents:YES];
    [win setRestorable:YES];
    [win center];
    [win setDelegate:[[HelloWindowDelegate alloc] init]];

    mtl_device= MTLCreateSystemDefaultDevice();
    printf("mtl_device: %p\n", mtl_device);
    mtk_view = [[HelloMTKView alloc] init];
    printf("mtk_view: %p\n", mtk_view);
    mtk_view.preferredFramesPerSecond = 60;
    mtk_view.device = mtl_device;
    mtk_view.colorPixelFormat = MTLPixelFormatBGRA8Unorm;
    mtk_view.depthStencilPixelFormat = MTLPixelFormatDepth32Float_Stencil8;
    mtk_view.sampleCount = 1;
    mtk_view.autoResizeDrawable = true;
    
    win.contentView = mtk_view;
    [win makeFirstResponder:mtk_view];
    [win makeKeyAndOrderFront:nil];

    mtl_queue = [mtl_device newCommandQueue];
    printf("mtl_queue: %p\n", mtl_queue);
    sem = dispatch_semaphore_create(2);
    printf("sem: %p\n", sem);

    // create resource objects
    float vertices[] = {
         0.0f, 0.5f, 0.5f,  1.0f, 0.0f, 0.0f, 1.0f,
         0.5f, -0.5f, 0.5f, 0.0f, 1.0f, 0.0f, 1.0f,
        -0.5f, -0.5f, 0.5f, 0.0f, 0.0f, 1.0f, 1.0f
    };
    mtl_buf = [mtl_device newBufferWithBytes:vertices length:sizeof(vertices) options:MTLResourceStorageModeShared];
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
    id<MTLLibrary> lib = [mtl_device
        newLibraryWithSource:[NSString stringWithUTF8String:src]
        options:nil
        error:&err];
    printf("lib: %p\n", lib);
    id<MTLFunction> vs_func = [lib newFunctionWithName:[NSString stringWithUTF8String:"vs_main"]];
    id<MTLFunction> fs_func = [lib newFunctionWithName:[NSString stringWithUTF8String:"fs_main"]];
    printf("vs_func: %p\n", vs_func);
    printf("fs_func: %p\n", fs_func);

    MTLVertexDescriptor* vtx_desc = [MTLVertexDescriptor vertexDescriptor];
    vtx_desc.attributes[0].format = MTLVertexFormatFloat3;
    vtx_desc.attributes[0].offset = 0;
    vtx_desc.attributes[0].bufferIndex = 0;
    vtx_desc.attributes[1].format = MTLVertexFormatFloat4;
    vtx_desc.attributes[1].offset = 3*sizeof(float);
    vtx_desc.attributes[1].bufferIndex = 0;
    vtx_desc.layouts[0].stride = 7*sizeof(float);
    vtx_desc.layouts[0].stepFunction = MTLVertexStepFunctionPerVertex;
    vtx_desc.layouts[0].stepRate = 1;

    MTLRenderPipelineDescriptor* rp_desc = [[MTLRenderPipelineDescriptor alloc] init];
    rp_desc.vertexDescriptor = vtx_desc;
    rp_desc.vertexFunction = vs_func;
    rp_desc.fragmentFunction = fs_func;
    rp_desc.sampleCount = 1;
    rp_desc.alphaToCoverageEnabled = NO;
    rp_desc.alphaToOneEnabled = NO;
    rp_desc.rasterizationEnabled = YES;
    rp_desc.depthAttachmentPixelFormat = MTLPixelFormatDepth32Float_Stencil8;
    rp_desc.colorAttachments[0].pixelFormat = MTLPixelFormatBGRA8Unorm;
    rp_desc.colorAttachments[0].writeMask = MTLColorWriteMaskAll;
    rp_desc.colorAttachments[0].blendingEnabled = NO;
    mtl_rps = [mtl_device newRenderPipelineStateWithDescriptor:rp_desc error:&err];
    [rp_desc release];
    [vs_func release];
    [fs_func release];
    [lib release];
    printf("mtl_rps: %p\n", mtl_rps);

    MTLDepthStencilDescriptor* ds_desc = [[MTLDepthStencilDescriptor alloc] init];
    ds_desc.depthCompareFunction = MTLCompareFunctionAlways;
    ds_desc.depthWriteEnabled = NO;
    mtl_dss = [mtl_device newDepthStencilStateWithDescriptor:ds_desc];
    [ds_desc release];
    printf("mtl_dss: %p\n", mtl_dss);
}

- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(NSApplication*)sender {
    (void)sender;
    return YES;
}
@end

@implementation HelloWindowDelegate
- (BOOL)windowShouldClose:(id)sender {
    return YES;
}
@end

@implementation HelloMTKView
- (BOOL)isOpaque {
    printf("isOpaque called!\n");
    return YES;
}
- (BOOL)canBecomeKeyView {
    printf("canBecomeKeyView called!\n");
    return YES;
}
- (BOOL)acceptsFirstResponder {
    printf("acceptsFirstResponder called!\n");
    return YES;
}
- (void)drawRect:(NSRect)dirtyRect {
    static double green = 0.0f;
    green += 0.01;
    if (green > 1.0f) {
        green = 0.0f;
    }

    // begin pass
    dispatch_semaphore_wait(sem, DISPATCH_TIME_FOREVER);
    MTLRenderPassDescriptor* pass_desc = [mtk_view currentRenderPassDescriptor];
    pass_desc.colorAttachments[0].loadAction = MTLLoadActionClear;
    pass_desc.colorAttachments[0].clearColor = MTLClearColorMake(1.0, green, 0.0, 1.0);
    pass_desc.depthAttachment.loadAction = MTLLoadActionClear;
    pass_desc.depthAttachment.clearDepth = 1.0;
    id<MTLCommandBuffer> cmd_buf = [mtl_queue commandBuffer];
    id<MTLRenderCommandEncoder> cmd_enc = [cmd_buf renderCommandEncoderWithDescriptor:pass_desc];

    // apply pipeline
    [cmd_enc setCullMode:MTLCullModeNone];
    [cmd_enc setRenderPipelineState:mtl_rps];
    [cmd_enc setDepthStencilState:mtl_dss];

    // apply bindings
    [cmd_enc setVertexBuffer:mtl_buf offset:0 atIndex:0];

    // draw
    [cmd_enc drawPrimitives:MTLPrimitiveTypeTriangle vertexStart:0 vertexCount: 3];

    // end pass
    [cmd_enc endEncoding];

    // commit
    [cmd_buf presentDrawable:[mtk_view currentDrawable]];
    [cmd_buf addCompletedHandler:^(id<MTLCommandBuffer> cmd_buf) {
        dispatch_semaphore_signal(sem);
    }];
    [cmd_buf commit];
}
@end

int main() {
    NSApplication* app = [NSApplication sharedApplication];
    [app setActivationPolicy:NSApplicationActivationPolicyRegular];
    [app setDelegate:[[HelloAppDelegate alloc] init]];
    [app activateIgnoringOtherApps:YES];
    [app run];
    return 0;
}