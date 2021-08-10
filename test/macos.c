// code generated, don't edit!
#include "macos.h"
oc_t oc;
void oc_initialize(void) {
    oc.NSObject.cls = objc_getClass("NSObject");
    oc.NSObject.release = sel_getUid("release");
    oc.NSObject.init = sel_getUid("init");
    oc.NSObject.alloc = sel_getUid("alloc");
    oc.NSString.cls = objc_getClass("NSString");
    oc.NSString.stringWithUTF8String = sel_getUid("stringWithUTF8String:");
    oc.NSNotification.cls = objc_getClass("NSNotification");
    oc.NSError.cls = objc_getClass("NSError");
    oc.NSResponder.cls = objc_getClass("NSResponder");
    oc.NSView.cls = objc_getClass("NSView");
    oc.NSApplication.cls = objc_getClass("NSApplication");
    oc.NSApplication.sharedApplication = sel_getUid("sharedApplication");
    oc.NSApplication.activateIgnoringOtherApps = sel_getUid("activateIgnoringOtherApps:");
    oc.NSApplication.run = sel_getUid("run");
    oc.NSApplication.setActivationPolicy = sel_getUid("setActivationPolicy:");
    oc.NSApplication.setDelegate = sel_getUid("setDelegate:");
    oc.NSApplicationDelegate.cls = objc_getClass("NSApplicationDelegate");
    oc.NSWindow.cls = objc_getClass("NSWindow");
    oc.NSWindow.initWithContentRect_styleMask_backing_defer = sel_getUid("initWithContentRect:styleMask:backing:defer:");
    oc.NSWindow.setContentView = sel_getUid("setContentView:");
    oc.NSWindow.contentView = sel_getUid("contentView");
    oc.NSWindow.makeFirstResponder = sel_getUid("makeFirstResponder:");
    oc.NSWindow.center = sel_getUid("center");
    oc.NSWindow.makeKeyAndOrderFront = sel_getUid("makeKeyAndOrderFront:");
    oc.NSWindow.setTitle = sel_getUid("setTitle:");
    oc.NSWindow.setDelegate = sel_getUid("setDelegate:");
    oc.NSWindow.setAcceptsMouseMovedEvents = sel_getUid("setAcceptsMouseMovedEvents:");
    oc.NSWindow.acceptsMouseMovedEvents = sel_getUid("acceptsMouseMovedEvents");
    oc.NSWindow.setRestorable = sel_getUid("setRestorable:");
    oc.NSWindow.isRestorable = sel_getUid("isRestorable");
    oc.NSWindowDelegate.cls = objc_getClass("NSWindowDelegate");
    oc.MTLCommandEncoder.cls = objc_getClass("MTLCommandEncoder");
    oc.MTLCommandEncoder.endEncoding = sel_getUid("endEncoding");
    oc.MTLBuffer.cls = objc_getClass("MTLBuffer");
    oc.MTLFunction.cls = objc_getClass("MTLFunction");
    oc.MTLCompileOptions.cls = objc_getClass("MTLCompileOptions");
    oc.MTLLibrary.cls = objc_getClass("MTLLibrary");
    oc.MTLLibrary.newFunctionWithName = sel_getUid("newFunctionWithName:");
    oc.MTLDevice.cls = objc_getClass("MTLDevice");
    oc.MTLDevice.newCommandQueue = sel_getUid("newCommandQueue");
    oc.MTLDevice.newBufferWithBytes_length_options = sel_getUid("newBufferWithBytes:length:options:");
    oc.MTLDevice.newDepthStencilStateWithDescriptor = sel_getUid("newDepthStencilStateWithDescriptor:");
    oc.MTLDevice.newLibraryWithSource_options_error = sel_getUid("newLibraryWithSource:options:error:");
    oc.MTLDevice.newRenderPipelineStateWithDescriptor_error = sel_getUid("newRenderPipelineStateWithDescriptor:error:");
    oc.MTLRenderPassAttachmentDescriptor.cls = objc_getClass("MTLRenderPassAttachmentDescriptor");
    oc.MTLRenderPassAttachmentDescriptor.setLoadAction = sel_getUid("setLoadAction:");
    oc.MTLRenderPassAttachmentDescriptor.loadAction = sel_getUid("loadAction");
    oc.MTLRenderPassColorAttachmentDescriptor.cls = objc_getClass("MTLRenderPassColorAttachmentDescriptor");
    oc.MTLRenderPassColorAttachmentDescriptor.setClearColor = sel_getUid("setClearColor:");
    oc.MTLRenderPassColorAttachmentDescriptor.clearColor = sel_getUid("clearColor");
    oc.MTLRenderPassDepthAttachmentDescriptor.cls = objc_getClass("MTLRenderPassDepthAttachmentDescriptor");
    oc.MTLRenderPassDepthAttachmentDescriptor.setClearDepth = sel_getUid("setClearDepth:");
    oc.MTLRenderPassDepthAttachmentDescriptor.clearDepth = sel_getUid("clearDepth");
    oc.MTLRenderPassColorAttachmentDescriptorArray.cls = objc_getClass("MTLRenderPassColorAttachmentDescriptorArray");
    oc.MTLRenderPassColorAttachmentDescriptorArray.objectAtIndexedSubscript = sel_getUid("objectAtIndexedSubscript:");
    oc.MTLRenderPassColorAttachmentDescriptorArray.setObject_atIndexedSubscript = sel_getUid("setObject:atIndexedSubscript:");
    oc.MTLRenderPassDescriptor.cls = objc_getClass("MTLRenderPassDescriptor");
    oc.MTLRenderPassDescriptor.colorAttachments = sel_getUid("colorAttachments");
    oc.MTLRenderPassDescriptor.setDepthAttachment = sel_getUid("setDepthAttachment:");
    oc.MTLRenderPassDescriptor.depthAttachment = sel_getUid("depthAttachment");
    oc.MTLCommandBuffer.cls = objc_getClass("MTLCommandBuffer");
    oc.MTLCommandBuffer.commit = sel_getUid("commit");
    oc.MTLCommandBuffer.presentDrawable = sel_getUid("presentDrawable:");
    oc.MTLCommandBuffer.addCompletedHandler = sel_getUid("addCompletedHandler:");
    oc.MTLCommandBuffer.renderCommandEncoderWithDescriptor = sel_getUid("renderCommandEncoderWithDescriptor:");
    oc.MTLCommandQueue.cls = objc_getClass("MTLCommandQueue");
    oc.MTLCommandQueue.commandBuffer = sel_getUid("commandBuffer");
    oc.MTLDepthStencilDescriptor.cls = objc_getClass("MTLDepthStencilDescriptor");
    oc.MTLDepthStencilDescriptor.setDepthCompareFunction = sel_getUid("setDepthCompareFunction:");
    oc.MTLDepthStencilDescriptor.depthCompareFunction = sel_getUid("depthCompareFunction");
    oc.MTLDepthStencilDescriptor.setDepthWriteEnabled = sel_getUid("setDepthWriteEnabled:");
    oc.MTLDepthStencilDescriptor.isDepthWriteEnabled = sel_getUid("isDepthWriteEnabled");
    oc.MTLDepthStencilState.cls = objc_getClass("MTLDepthStencilState");
    oc.MTLDrawable.cls = objc_getClass("MTLDrawable");
    oc.MTLRenderCommandEncoder.cls = objc_getClass("MTLRenderCommandEncoder");
    oc.MTLRenderCommandEncoder.setRenderPipelineState = sel_getUid("setRenderPipelineState:");
    oc.MTLRenderCommandEncoder.setVertexBuffer_offset_atIndex = sel_getUid("setVertexBuffer:offset:atIndex:");
    oc.MTLRenderCommandEncoder.setCullMode = sel_getUid("setCullMode:");
    oc.MTLRenderCommandEncoder.setDepthStencilState = sel_getUid("setDepthStencilState:");
    oc.MTLRenderCommandEncoder.drawPrimitives_vertexStart_vertexCount = sel_getUid("drawPrimitives:vertexStart:vertexCount:");
    oc.MTLRenderPipelineColorAttachmentDescriptor.cls = objc_getClass("MTLRenderPipelineColorAttachmentDescriptor");
    oc.MTLRenderPipelineColorAttachmentDescriptor.setPixelFormat = sel_getUid("setPixelFormat:");
    oc.MTLRenderPipelineColorAttachmentDescriptor.pixelFormat = sel_getUid("pixelFormat");
    oc.MTLRenderPipelineColorAttachmentDescriptor.setBlendingEnabled = sel_getUid("setBlendingEnabled:");
    oc.MTLRenderPipelineColorAttachmentDescriptor.isBlendingEnabled = sel_getUid("isBlendingEnabled");
    oc.MTLRenderPipelineColorAttachmentDescriptor.setWriteMask = sel_getUid("setWriteMask:");
    oc.MTLRenderPipelineColorAttachmentDescriptor.writeMask = sel_getUid("writeMask");
    oc.MTLRenderPipelineDescriptor.cls = objc_getClass("MTLRenderPipelineDescriptor");
    oc.MTLRenderPipelineDescriptor.setVertexFunction = sel_getUid("setVertexFunction:");
    oc.MTLRenderPipelineDescriptor.vertexFunction = sel_getUid("vertexFunction");
    oc.MTLRenderPipelineDescriptor.setFragmentFunction = sel_getUid("setFragmentFunction:");
    oc.MTLRenderPipelineDescriptor.fragmentFunction = sel_getUid("fragmentFunction");
    oc.MTLRenderPipelineDescriptor.setVertexDescriptor = sel_getUid("setVertexDescriptor:");
    oc.MTLRenderPipelineDescriptor.vertexDescriptor = sel_getUid("vertexDescriptor");
    oc.MTLRenderPipelineDescriptor.setSampleCount = sel_getUid("setSampleCount:");
    oc.MTLRenderPipelineDescriptor.sampleCount = sel_getUid("sampleCount");
    oc.MTLRenderPipelineDescriptor.setAlphaToCoverageEnabled = sel_getUid("setAlphaToCoverageEnabled:");
    oc.MTLRenderPipelineDescriptor.isAlphaToCoverageEnabled = sel_getUid("isAlphaToCoverageEnabled");
    oc.MTLRenderPipelineDescriptor.setAlphaToOneEnabled = sel_getUid("setAlphaToOneEnabled:");
    oc.MTLRenderPipelineDescriptor.isAlphaToOneEnabled = sel_getUid("isAlphaToOneEnabled");
    oc.MTLRenderPipelineDescriptor.setRasterizationEnabled = sel_getUid("setRasterizationEnabled:");
    oc.MTLRenderPipelineDescriptor.isRasterizationEnabled = sel_getUid("isRasterizationEnabled");
    oc.MTLRenderPipelineDescriptor.colorAttachments = sel_getUid("colorAttachments");
    oc.MTLRenderPipelineDescriptor.setDepthAttachmentPixelFormat = sel_getUid("setDepthAttachmentPixelFormat:");
    oc.MTLRenderPipelineDescriptor.depthAttachmentPixelFormat = sel_getUid("depthAttachmentPixelFormat");
    oc.MTLRenderPipelineState.cls = objc_getClass("MTLRenderPipelineState");
    oc.MTLRenderPipelineColorAttachmentDescriptorArray.cls = objc_getClass("MTLRenderPipelineColorAttachmentDescriptorArray");
    oc.MTLRenderPipelineColorAttachmentDescriptorArray.objectAtIndexedSubscript = sel_getUid("objectAtIndexedSubscript:");
    oc.MTLRenderPipelineColorAttachmentDescriptorArray.setObject_atIndexedSubscript = sel_getUid("setObject:atIndexedSubscript:");
    oc.MTLVertexBufferLayoutDescriptor.cls = objc_getClass("MTLVertexBufferLayoutDescriptor");
    oc.MTLVertexBufferLayoutDescriptor.setStride = sel_getUid("setStride:");
    oc.MTLVertexBufferLayoutDescriptor.stride = sel_getUid("stride");
    oc.MTLVertexBufferLayoutDescriptor.setStepFunction = sel_getUid("setStepFunction:");
    oc.MTLVertexBufferLayoutDescriptor.stepFunction = sel_getUid("stepFunction");
    oc.MTLVertexBufferLayoutDescriptor.setStepRate = sel_getUid("setStepRate:");
    oc.MTLVertexBufferLayoutDescriptor.stepRate = sel_getUid("stepRate");
    oc.MTLVertexBufferLayoutDescriptorArray.cls = objc_getClass("MTLVertexBufferLayoutDescriptorArray");
    oc.MTLVertexBufferLayoutDescriptorArray.objectAtIndexedSubscript = sel_getUid("objectAtIndexedSubscript:");
    oc.MTLVertexBufferLayoutDescriptorArray.setObject_atIndexedSubscript = sel_getUid("setObject:atIndexedSubscript:");
    oc.MTLVertexAttributeDescriptor.cls = objc_getClass("MTLVertexAttributeDescriptor");
    oc.MTLVertexAttributeDescriptor.setFormat = sel_getUid("setFormat:");
    oc.MTLVertexAttributeDescriptor.format = sel_getUid("format");
    oc.MTLVertexAttributeDescriptor.setOffset = sel_getUid("setOffset:");
    oc.MTLVertexAttributeDescriptor.offset = sel_getUid("offset");
    oc.MTLVertexAttributeDescriptor.setBufferIndex = sel_getUid("setBufferIndex:");
    oc.MTLVertexAttributeDescriptor.bufferIndex = sel_getUid("bufferIndex");
    oc.MTLVertexAttributeDescriptorArray.cls = objc_getClass("MTLVertexAttributeDescriptorArray");
    oc.MTLVertexAttributeDescriptorArray.objectAtIndexedSubscript = sel_getUid("objectAtIndexedSubscript:");
    oc.MTLVertexAttributeDescriptorArray.setObject_atIndexedSubscript = sel_getUid("setObject:atIndexedSubscript:");
    oc.MTLVertexDescriptor.cls = objc_getClass("MTLVertexDescriptor");
    oc.MTLVertexDescriptor.vertexDescriptor = sel_getUid("vertexDescriptor");
    oc.MTLVertexDescriptor.layouts = sel_getUid("layouts");
    oc.MTLVertexDescriptor.attributes = sel_getUid("attributes");
    oc.CAMetalDrawable.cls = objc_getClass("CAMetalDrawable");
    oc.MTKView.cls = objc_getClass("MTKView");
    oc.MTKView.setDevice = sel_getUid("setDevice:");
    oc.MTKView.device = sel_getUid("device");
    oc.MTKView.currentDrawable = sel_getUid("currentDrawable");
    oc.MTKView.setColorPixelFormat = sel_getUid("setColorPixelFormat:");
    oc.MTKView.colorPixelFormat = sel_getUid("colorPixelFormat");
    oc.MTKView.setDepthStencilPixelFormat = sel_getUid("setDepthStencilPixelFormat:");
    oc.MTKView.depthStencilPixelFormat = sel_getUid("depthStencilPixelFormat");
    oc.MTKView.setSampleCount = sel_getUid("setSampleCount:");
    oc.MTKView.sampleCount = sel_getUid("sampleCount");
    oc.MTKView.currentRenderPassDescriptor = sel_getUid("currentRenderPassDescriptor");
    oc.MTKView.setPreferredFramesPerSecond = sel_getUid("setPreferredFramesPerSecond:");
    oc.MTKView.preferredFramesPerSecond = sel_getUid("preferredFramesPerSecond");
    oc.MTKView.setAutoResizeDrawable = sel_getUid("setAutoResizeDrawable:");
    oc.MTKView.autoResizeDrawable = sel_getUid("autoResizeDrawable");
}

void NSObject_release(NSObject * self) {
    return ((void(*)(void*,void*))objc_msgSend)((void*)self, oc.NSObject.release);
}
NSObject* NSObject_init(NSObject * self) {
    return ((NSObject*(*)(void*,void*))objc_msgSend)((void*)self, oc.NSObject.init);
}
NSObject* NSObject_alloc(void) {
    return ((NSObject*(*)(void*,void*))objc_msgSend)(oc.NSObject.cls, oc.NSObject.alloc);
}
NSString* NSString_stringWithUTF8String(const char * nullTerminatedCString) {
    return ((NSString*(*)(void*,void*,const char *))objc_msgSend)(oc.NSString.cls, oc.NSString.stringWithUTF8String, nullTerminatedCString);
}
NSApplication * NSApplication_sharedApplication(void) {
    return ((NSApplication *(*)(void*,void*))objc_msgSend)(oc.NSApplication.cls, oc.NSApplication.sharedApplication);
}
void NSApplication_activateIgnoringOtherApps(NSApplication * self, bool flag) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, oc.NSApplication.activateIgnoringOtherApps, flag);
}
void NSApplication_run(NSApplication * self) {
    return ((void(*)(void*,void*))objc_msgSend)((void*)self, oc.NSApplication.run);
}
bool NSApplication_setActivationPolicy(NSApplication * self, NSApplicationActivationPolicy activationPolicy) {
    return ((bool(*)(void*,void*,NSApplicationActivationPolicy))objc_msgSend)((void*)self, oc.NSApplication.setActivationPolicy, activationPolicy);
}
void NSApplication_setDelegate(NSApplication * self, NSApplicationDelegate* delegate) {
    return ((void(*)(void*,void*,NSApplicationDelegate*))objc_msgSend)((void*)self, oc.NSApplication.setDelegate, delegate);
}
NSWindow* NSWindow_initWithContentRect_styleMask_backing_defer(NSWindow * self, NSRect contentRect, NSWindowStyleMask style, NSBackingStoreType backingStoreType, bool flag) {
    return ((NSWindow*(*)(void*,void*,NSRect,NSWindowStyleMask,NSBackingStoreType,bool))objc_msgSend)((void*)self, oc.NSWindow.initWithContentRect_styleMask_backing_defer, contentRect, style, backingStoreType, flag);
}
void NSWindow_setContentView(NSWindow * self, NSView * val) {
    return ((void(*)(void*,void*,NSView *))objc_msgSend)((void*)self, oc.NSWindow.setContentView, val);
}
NSView * NSWindow_contentView(NSWindow * self) {
    return ((NSView *(*)(void*,void*))objc_msgSend)((void*)self, oc.NSWindow.contentView);
}
bool NSWindow_makeFirstResponder(NSWindow * self, NSResponder * responder) {
    return ((bool(*)(void*,void*,NSResponder *))objc_msgSend)((void*)self, oc.NSWindow.makeFirstResponder, responder);
}
void NSWindow_center(NSWindow * self) {
    return ((void(*)(void*,void*))objc_msgSend)((void*)self, oc.NSWindow.center);
}
void NSWindow_makeKeyAndOrderFront(NSWindow * self, void* sender) {
    return ((void(*)(void*,void*,void*))objc_msgSend)((void*)self, oc.NSWindow.makeKeyAndOrderFront, sender);
}
void NSWindow_setTitle(NSWindow * self, NSString * title) {
    return ((void(*)(void*,void*,NSString *))objc_msgSend)((void*)self, oc.NSWindow.setTitle, title);
}
void NSWindow_setDelegate(NSWindow * self, NSWindowDelegate* delegate) {
    return ((void(*)(void*,void*,NSWindowDelegate*))objc_msgSend)((void*)self, oc.NSWindow.setDelegate, delegate);
}
void NSWindow_setAcceptsMouseMovedEvents(NSWindow * self, bool val) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, oc.NSWindow.setAcceptsMouseMovedEvents, val);
}
bool NSWindow_acceptsMouseMovedEvents(NSWindow * self) {
    return ((bool(*)(void*,void*))objc_msgSend)((void*)self, oc.NSWindow.acceptsMouseMovedEvents);
}
void NSWindow_setRestorable(NSWindow * self, bool val) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, oc.NSWindow.setRestorable, val);
}
bool NSWindow_isRestorable(NSWindow * self) {
    return ((bool(*)(void*,void*))objc_msgSend)((void*)self, oc.NSWindow.isRestorable);
}
void MTLCommandEncoder_endEncoding(MTLCommandEncoder * self) {
    return ((void(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLCommandEncoder.endEncoding);
}
MTLFunction* MTLLibrary_newFunctionWithName(MTLLibrary * self, NSString * functionName) {
    return ((MTLFunction*(*)(void*,void*,NSString *))objc_msgSend)((void*)self, oc.MTLLibrary.newFunctionWithName, functionName);
}
MTLCommandQueue* MTLDevice_newCommandQueue(MTLDevice * self) {
    return ((MTLCommandQueue*(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLDevice.newCommandQueue);
}
MTLBuffer* MTLDevice_newBufferWithBytes_length_options(MTLDevice * self, const void * pointer, uint64_t length, MTLResourceOptions options) {
    return ((MTLBuffer*(*)(void*,void*,const void *,uint64_t,MTLResourceOptions))objc_msgSend)((void*)self, oc.MTLDevice.newBufferWithBytes_length_options, pointer, length, options);
}
MTLDepthStencilState* MTLDevice_newDepthStencilStateWithDescriptor(MTLDevice * self, MTLDepthStencilDescriptor * descriptor) {
    return ((MTLDepthStencilState*(*)(void*,void*,MTLDepthStencilDescriptor *))objc_msgSend)((void*)self, oc.MTLDevice.newDepthStencilStateWithDescriptor, descriptor);
}
MTLLibrary* MTLDevice_newLibraryWithSource_options_error(MTLDevice * self, NSString * source, MTLCompileOptions * options, NSError *  * error) {
    return ((MTLLibrary*(*)(void*,void*,NSString *,MTLCompileOptions *,NSError *  *))objc_msgSend)((void*)self, oc.MTLDevice.newLibraryWithSource_options_error, source, options, error);
}
MTLRenderPipelineState* MTLDevice_newRenderPipelineStateWithDescriptor_error(MTLDevice * self, MTLRenderPipelineDescriptor * descriptor, NSError *  * error) {
    return ((MTLRenderPipelineState*(*)(void*,void*,MTLRenderPipelineDescriptor *,NSError *  *))objc_msgSend)((void*)self, oc.MTLDevice.newRenderPipelineStateWithDescriptor_error, descriptor, error);
}
void MTLRenderPassAttachmentDescriptor_setLoadAction(MTLRenderPassAttachmentDescriptor * self, MTLLoadAction val) {
    return ((void(*)(void*,void*,MTLLoadAction))objc_msgSend)((void*)self, oc.MTLRenderPassAttachmentDescriptor.setLoadAction, val);
}
MTLLoadAction MTLRenderPassAttachmentDescriptor_loadAction(MTLRenderPassAttachmentDescriptor * self) {
    return ((MTLLoadAction(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPassAttachmentDescriptor.loadAction);
}
void MTLRenderPassColorAttachmentDescriptor_setClearColor(MTLRenderPassColorAttachmentDescriptor * self, MTLClearColor val) {
    return ((void(*)(void*,void*,MTLClearColor))objc_msgSend)((void*)self, oc.MTLRenderPassColorAttachmentDescriptor.setClearColor, val);
}
MTLClearColor MTLRenderPassColorAttachmentDescriptor_clearColor(MTLRenderPassColorAttachmentDescriptor * self) {
    return ((MTLClearColor(*)(void*,void*))objc_msgSend_stret)((void*)self, oc.MTLRenderPassColorAttachmentDescriptor.clearColor);
}
void MTLRenderPassDepthAttachmentDescriptor_setClearDepth(MTLRenderPassDepthAttachmentDescriptor * self, double val) {
    return ((void(*)(void*,void*,double))objc_msgSend)((void*)self, oc.MTLRenderPassDepthAttachmentDescriptor.setClearDepth, val);
}
double MTLRenderPassDepthAttachmentDescriptor_clearDepth(MTLRenderPassDepthAttachmentDescriptor * self) {
    return ((double(*)(void*,void*))objc_msgSend_fpret)((void*)self, oc.MTLRenderPassDepthAttachmentDescriptor.clearDepth);
}
MTLRenderPassColorAttachmentDescriptor * MTLRenderPassColorAttachmentDescriptorArray_objectAtIndexedSubscript(MTLRenderPassColorAttachmentDescriptorArray * self, uint64_t attachmentIndex) {
    return ((MTLRenderPassColorAttachmentDescriptor *(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, oc.MTLRenderPassColorAttachmentDescriptorArray.objectAtIndexedSubscript, attachmentIndex);
}
void MTLRenderPassColorAttachmentDescriptorArray_setObject_atIndexedSubscript(MTLRenderPassColorAttachmentDescriptorArray * self, MTLRenderPassColorAttachmentDescriptor * attachment, uint64_t attachmentIndex) {
    return ((void(*)(void*,void*,MTLRenderPassColorAttachmentDescriptor *,uint64_t))objc_msgSend)((void*)self, oc.MTLRenderPassColorAttachmentDescriptorArray.setObject_atIndexedSubscript, attachment, attachmentIndex);
}
MTLRenderPassColorAttachmentDescriptorArray * MTLRenderPassDescriptor_colorAttachments(MTLRenderPassDescriptor * self) {
    return ((MTLRenderPassColorAttachmentDescriptorArray *(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPassDescriptor.colorAttachments);
}
void MTLRenderPassDescriptor_setDepthAttachment(MTLRenderPassDescriptor * self, MTLRenderPassDepthAttachmentDescriptor * val) {
    return ((void(*)(void*,void*,MTLRenderPassDepthAttachmentDescriptor *))objc_msgSend)((void*)self, oc.MTLRenderPassDescriptor.setDepthAttachment, val);
}
MTLRenderPassDepthAttachmentDescriptor * MTLRenderPassDescriptor_depthAttachment(MTLRenderPassDescriptor * self) {
    return ((MTLRenderPassDepthAttachmentDescriptor *(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPassDescriptor.depthAttachment);
}
void MTLCommandBuffer_commit(MTLCommandBuffer * self) {
    return ((void(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLCommandBuffer.commit);
}
void MTLCommandBuffer_presentDrawable(MTLCommandBuffer * self, MTLDrawable* drawable) {
    return ((void(*)(void*,void*,MTLDrawable*))objc_msgSend)((void*)self, oc.MTLCommandBuffer.presentDrawable, drawable);
}
void MTLCommandBuffer_addCompletedHandler(MTLCommandBuffer * self, void* block) {
    return ((void(*)(void*,void*,void*))objc_msgSend)((void*)self, oc.MTLCommandBuffer.addCompletedHandler, block);
}
MTLRenderCommandEncoder* MTLCommandBuffer_renderCommandEncoderWithDescriptor(MTLCommandBuffer * self, MTLRenderPassDescriptor * renderPassDescriptor) {
    return ((MTLRenderCommandEncoder*(*)(void*,void*,MTLRenderPassDescriptor *))objc_msgSend)((void*)self, oc.MTLCommandBuffer.renderCommandEncoderWithDescriptor, renderPassDescriptor);
}
MTLCommandBuffer* MTLCommandQueue_commandBuffer(MTLCommandQueue * self) {
    return ((MTLCommandBuffer*(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLCommandQueue.commandBuffer);
}
void MTLDepthStencilDescriptor_setDepthCompareFunction(MTLDepthStencilDescriptor * self, MTLCompareFunction val) {
    return ((void(*)(void*,void*,MTLCompareFunction))objc_msgSend)((void*)self, oc.MTLDepthStencilDescriptor.setDepthCompareFunction, val);
}
MTLCompareFunction MTLDepthStencilDescriptor_depthCompareFunction(MTLDepthStencilDescriptor * self) {
    return ((MTLCompareFunction(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLDepthStencilDescriptor.depthCompareFunction);
}
void MTLDepthStencilDescriptor_setDepthWriteEnabled(MTLDepthStencilDescriptor * self, bool val) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, oc.MTLDepthStencilDescriptor.setDepthWriteEnabled, val);
}
bool MTLDepthStencilDescriptor_isDepthWriteEnabled(MTLDepthStencilDescriptor * self) {
    return ((bool(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLDepthStencilDescriptor.isDepthWriteEnabled);
}
void MTLRenderCommandEncoder_setRenderPipelineState(MTLRenderCommandEncoder * self, MTLRenderPipelineState* pipelineState) {
    return ((void(*)(void*,void*,MTLRenderPipelineState*))objc_msgSend)((void*)self, oc.MTLRenderCommandEncoder.setRenderPipelineState, pipelineState);
}
void MTLRenderCommandEncoder_setVertexBuffer_offset_atIndex(MTLRenderCommandEncoder * self, MTLBuffer* buffer, uint64_t offset, uint64_t index) {
    return ((void(*)(void*,void*,MTLBuffer*,uint64_t,uint64_t))objc_msgSend)((void*)self, oc.MTLRenderCommandEncoder.setVertexBuffer_offset_atIndex, buffer, offset, index);
}
void MTLRenderCommandEncoder_setCullMode(MTLRenderCommandEncoder * self, MTLCullMode cullMode) {
    return ((void(*)(void*,void*,MTLCullMode))objc_msgSend)((void*)self, oc.MTLRenderCommandEncoder.setCullMode, cullMode);
}
void MTLRenderCommandEncoder_setDepthStencilState(MTLRenderCommandEncoder * self, MTLDepthStencilState* depthStencilState) {
    return ((void(*)(void*,void*,MTLDepthStencilState*))objc_msgSend)((void*)self, oc.MTLRenderCommandEncoder.setDepthStencilState, depthStencilState);
}
void MTLRenderCommandEncoder_drawPrimitives_vertexStart_vertexCount(MTLRenderCommandEncoder * self, MTLPrimitiveType primitiveType, uint64_t vertexStart, uint64_t vertexCount) {
    return ((void(*)(void*,void*,MTLPrimitiveType,uint64_t,uint64_t))objc_msgSend)((void*)self, oc.MTLRenderCommandEncoder.drawPrimitives_vertexStart_vertexCount, primitiveType, vertexStart, vertexCount);
}
void MTLRenderPipelineColorAttachmentDescriptor_setPixelFormat(MTLRenderPipelineColorAttachmentDescriptor * self, MTLPixelFormat val) {
    return ((void(*)(void*,void*,MTLPixelFormat))objc_msgSend)((void*)self, oc.MTLRenderPipelineColorAttachmentDescriptor.setPixelFormat, val);
}
MTLPixelFormat MTLRenderPipelineColorAttachmentDescriptor_pixelFormat(MTLRenderPipelineColorAttachmentDescriptor * self) {
    return ((MTLPixelFormat(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineColorAttachmentDescriptor.pixelFormat);
}
void MTLRenderPipelineColorAttachmentDescriptor_setBlendingEnabled(MTLRenderPipelineColorAttachmentDescriptor * self, bool val) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, oc.MTLRenderPipelineColorAttachmentDescriptor.setBlendingEnabled, val);
}
bool MTLRenderPipelineColorAttachmentDescriptor_isBlendingEnabled(MTLRenderPipelineColorAttachmentDescriptor * self) {
    return ((bool(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineColorAttachmentDescriptor.isBlendingEnabled);
}
void MTLRenderPipelineColorAttachmentDescriptor_setWriteMask(MTLRenderPipelineColorAttachmentDescriptor * self, MTLColorWriteMask val) {
    return ((void(*)(void*,void*,MTLColorWriteMask))objc_msgSend)((void*)self, oc.MTLRenderPipelineColorAttachmentDescriptor.setWriteMask, val);
}
MTLColorWriteMask MTLRenderPipelineColorAttachmentDescriptor_writeMask(MTLRenderPipelineColorAttachmentDescriptor * self) {
    return ((MTLColorWriteMask(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineColorAttachmentDescriptor.writeMask);
}
void MTLRenderPipelineDescriptor_setVertexFunction(MTLRenderPipelineDescriptor * self, MTLFunction* val) {
    return ((void(*)(void*,void*,MTLFunction*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.setVertexFunction, val);
}
MTLFunction* MTLRenderPipelineDescriptor_vertexFunction(MTLRenderPipelineDescriptor * self) {
    return ((MTLFunction*(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.vertexFunction);
}
void MTLRenderPipelineDescriptor_setFragmentFunction(MTLRenderPipelineDescriptor * self, MTLFunction* val) {
    return ((void(*)(void*,void*,MTLFunction*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.setFragmentFunction, val);
}
MTLFunction* MTLRenderPipelineDescriptor_fragmentFunction(MTLRenderPipelineDescriptor * self) {
    return ((MTLFunction*(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.fragmentFunction);
}
void MTLRenderPipelineDescriptor_setVertexDescriptor(MTLRenderPipelineDescriptor * self, MTLVertexDescriptor * val) {
    return ((void(*)(void*,void*,MTLVertexDescriptor *))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.setVertexDescriptor, val);
}
MTLVertexDescriptor * MTLRenderPipelineDescriptor_vertexDescriptor(MTLRenderPipelineDescriptor * self) {
    return ((MTLVertexDescriptor *(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.vertexDescriptor);
}
void MTLRenderPipelineDescriptor_setSampleCount(MTLRenderPipelineDescriptor * self, uint64_t val) {
    return ((void(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.setSampleCount, val);
}
uint64_t MTLRenderPipelineDescriptor_sampleCount(MTLRenderPipelineDescriptor * self) {
    return ((uint64_t(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.sampleCount);
}
void MTLRenderPipelineDescriptor_setAlphaToCoverageEnabled(MTLRenderPipelineDescriptor * self, bool val) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.setAlphaToCoverageEnabled, val);
}
bool MTLRenderPipelineDescriptor_isAlphaToCoverageEnabled(MTLRenderPipelineDescriptor * self) {
    return ((bool(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.isAlphaToCoverageEnabled);
}
void MTLRenderPipelineDescriptor_setAlphaToOneEnabled(MTLRenderPipelineDescriptor * self, bool val) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.setAlphaToOneEnabled, val);
}
bool MTLRenderPipelineDescriptor_isAlphaToOneEnabled(MTLRenderPipelineDescriptor * self) {
    return ((bool(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.isAlphaToOneEnabled);
}
void MTLRenderPipelineDescriptor_setRasterizationEnabled(MTLRenderPipelineDescriptor * self, bool val) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.setRasterizationEnabled, val);
}
bool MTLRenderPipelineDescriptor_isRasterizationEnabled(MTLRenderPipelineDescriptor * self) {
    return ((bool(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.isRasterizationEnabled);
}
MTLRenderPipelineColorAttachmentDescriptorArray * MTLRenderPipelineDescriptor_colorAttachments(MTLRenderPipelineDescriptor * self) {
    return ((MTLRenderPipelineColorAttachmentDescriptorArray *(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.colorAttachments);
}
void MTLRenderPipelineDescriptor_setDepthAttachmentPixelFormat(MTLRenderPipelineDescriptor * self, MTLPixelFormat val) {
    return ((void(*)(void*,void*,MTLPixelFormat))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.setDepthAttachmentPixelFormat, val);
}
MTLPixelFormat MTLRenderPipelineDescriptor_depthAttachmentPixelFormat(MTLRenderPipelineDescriptor * self) {
    return ((MTLPixelFormat(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.depthAttachmentPixelFormat);
}
MTLRenderPipelineColorAttachmentDescriptor * MTLRenderPipelineColorAttachmentDescriptorArray_objectAtIndexedSubscript(MTLRenderPipelineColorAttachmentDescriptorArray * self, uint64_t attachmentIndex) {
    return ((MTLRenderPipelineColorAttachmentDescriptor *(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, oc.MTLRenderPipelineColorAttachmentDescriptorArray.objectAtIndexedSubscript, attachmentIndex);
}
void MTLRenderPipelineColorAttachmentDescriptorArray_setObject_atIndexedSubscript(MTLRenderPipelineColorAttachmentDescriptorArray * self, MTLRenderPipelineColorAttachmentDescriptor * attachment, uint64_t attachmentIndex) {
    return ((void(*)(void*,void*,MTLRenderPipelineColorAttachmentDescriptor *,uint64_t))objc_msgSend)((void*)self, oc.MTLRenderPipelineColorAttachmentDescriptorArray.setObject_atIndexedSubscript, attachment, attachmentIndex);
}
void MTLVertexBufferLayoutDescriptor_setStride(MTLVertexBufferLayoutDescriptor * self, uint64_t val) {
    return ((void(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, oc.MTLVertexBufferLayoutDescriptor.setStride, val);
}
uint64_t MTLVertexBufferLayoutDescriptor_stride(MTLVertexBufferLayoutDescriptor * self) {
    return ((uint64_t(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLVertexBufferLayoutDescriptor.stride);
}
void MTLVertexBufferLayoutDescriptor_setStepFunction(MTLVertexBufferLayoutDescriptor * self, MTLVertexStepFunction val) {
    return ((void(*)(void*,void*,MTLVertexStepFunction))objc_msgSend)((void*)self, oc.MTLVertexBufferLayoutDescriptor.setStepFunction, val);
}
MTLVertexStepFunction MTLVertexBufferLayoutDescriptor_stepFunction(MTLVertexBufferLayoutDescriptor * self) {
    return ((MTLVertexStepFunction(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLVertexBufferLayoutDescriptor.stepFunction);
}
void MTLVertexBufferLayoutDescriptor_setStepRate(MTLVertexBufferLayoutDescriptor * self, uint64_t val) {
    return ((void(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, oc.MTLVertexBufferLayoutDescriptor.setStepRate, val);
}
uint64_t MTLVertexBufferLayoutDescriptor_stepRate(MTLVertexBufferLayoutDescriptor * self) {
    return ((uint64_t(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLVertexBufferLayoutDescriptor.stepRate);
}
MTLVertexBufferLayoutDescriptor * MTLVertexBufferLayoutDescriptorArray_objectAtIndexedSubscript(MTLVertexBufferLayoutDescriptorArray * self, uint64_t index) {
    return ((MTLVertexBufferLayoutDescriptor *(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, oc.MTLVertexBufferLayoutDescriptorArray.objectAtIndexedSubscript, index);
}
void MTLVertexBufferLayoutDescriptorArray_setObject_atIndexedSubscript(MTLVertexBufferLayoutDescriptorArray * self, MTLVertexBufferLayoutDescriptor * bufferDesc, uint64_t index) {
    return ((void(*)(void*,void*,MTLVertexBufferLayoutDescriptor *,uint64_t))objc_msgSend)((void*)self, oc.MTLVertexBufferLayoutDescriptorArray.setObject_atIndexedSubscript, bufferDesc, index);
}
void MTLVertexAttributeDescriptor_setFormat(MTLVertexAttributeDescriptor * self, MTLVertexFormat val) {
    return ((void(*)(void*,void*,MTLVertexFormat))objc_msgSend)((void*)self, oc.MTLVertexAttributeDescriptor.setFormat, val);
}
MTLVertexFormat MTLVertexAttributeDescriptor_format(MTLVertexAttributeDescriptor * self) {
    return ((MTLVertexFormat(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLVertexAttributeDescriptor.format);
}
void MTLVertexAttributeDescriptor_setOffset(MTLVertexAttributeDescriptor * self, uint64_t val) {
    return ((void(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, oc.MTLVertexAttributeDescriptor.setOffset, val);
}
uint64_t MTLVertexAttributeDescriptor_offset(MTLVertexAttributeDescriptor * self) {
    return ((uint64_t(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLVertexAttributeDescriptor.offset);
}
void MTLVertexAttributeDescriptor_setBufferIndex(MTLVertexAttributeDescriptor * self, uint64_t val) {
    return ((void(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, oc.MTLVertexAttributeDescriptor.setBufferIndex, val);
}
uint64_t MTLVertexAttributeDescriptor_bufferIndex(MTLVertexAttributeDescriptor * self) {
    return ((uint64_t(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLVertexAttributeDescriptor.bufferIndex);
}
MTLVertexAttributeDescriptor * MTLVertexAttributeDescriptorArray_objectAtIndexedSubscript(MTLVertexAttributeDescriptorArray * self, uint64_t index) {
    return ((MTLVertexAttributeDescriptor *(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, oc.MTLVertexAttributeDescriptorArray.objectAtIndexedSubscript, index);
}
void MTLVertexAttributeDescriptorArray_setObject_atIndexedSubscript(MTLVertexAttributeDescriptorArray * self, MTLVertexAttributeDescriptor * attributeDesc, uint64_t index) {
    return ((void(*)(void*,void*,MTLVertexAttributeDescriptor *,uint64_t))objc_msgSend)((void*)self, oc.MTLVertexAttributeDescriptorArray.setObject_atIndexedSubscript, attributeDesc, index);
}
MTLVertexDescriptor * MTLVertexDescriptor_vertexDescriptor(void) {
    return ((MTLVertexDescriptor *(*)(void*,void*))objc_msgSend)(oc.MTLVertexDescriptor.cls, oc.MTLVertexDescriptor.vertexDescriptor);
}
MTLVertexBufferLayoutDescriptorArray * MTLVertexDescriptor_layouts(MTLVertexDescriptor * self) {
    return ((MTLVertexBufferLayoutDescriptorArray *(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLVertexDescriptor.layouts);
}
MTLVertexAttributeDescriptorArray * MTLVertexDescriptor_attributes(MTLVertexDescriptor * self) {
    return ((MTLVertexAttributeDescriptorArray *(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLVertexDescriptor.attributes);
}
void MTKView_setDevice(MTKView * self, MTLDevice* val) {
    return ((void(*)(void*,void*,MTLDevice*))objc_msgSend)((void*)self, oc.MTKView.setDevice, val);
}
MTLDevice* MTKView_device(MTKView * self) {
    return ((MTLDevice*(*)(void*,void*))objc_msgSend)((void*)self, oc.MTKView.device);
}
CAMetalDrawable* MTKView_currentDrawable(MTKView * self) {
    return ((CAMetalDrawable*(*)(void*,void*))objc_msgSend)((void*)self, oc.MTKView.currentDrawable);
}
void MTKView_setColorPixelFormat(MTKView * self, MTLPixelFormat val) {
    return ((void(*)(void*,void*,MTLPixelFormat))objc_msgSend)((void*)self, oc.MTKView.setColorPixelFormat, val);
}
MTLPixelFormat MTKView_colorPixelFormat(MTKView * self) {
    return ((MTLPixelFormat(*)(void*,void*))objc_msgSend)((void*)self, oc.MTKView.colorPixelFormat);
}
void MTKView_setDepthStencilPixelFormat(MTKView * self, MTLPixelFormat val) {
    return ((void(*)(void*,void*,MTLPixelFormat))objc_msgSend)((void*)self, oc.MTKView.setDepthStencilPixelFormat, val);
}
MTLPixelFormat MTKView_depthStencilPixelFormat(MTKView * self) {
    return ((MTLPixelFormat(*)(void*,void*))objc_msgSend)((void*)self, oc.MTKView.depthStencilPixelFormat);
}
void MTKView_setSampleCount(MTKView * self, uint64_t val) {
    return ((void(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, oc.MTKView.setSampleCount, val);
}
uint64_t MTKView_sampleCount(MTKView * self) {
    return ((uint64_t(*)(void*,void*))objc_msgSend)((void*)self, oc.MTKView.sampleCount);
}
MTLRenderPassDescriptor * MTKView_currentRenderPassDescriptor(MTKView * self) {
    return ((MTLRenderPassDescriptor *(*)(void*,void*))objc_msgSend)((void*)self, oc.MTKView.currentRenderPassDescriptor);
}
void MTKView_setPreferredFramesPerSecond(MTKView * self, int64_t val) {
    return ((void(*)(void*,void*,int64_t))objc_msgSend)((void*)self, oc.MTKView.setPreferredFramesPerSecond, val);
}
int64_t MTKView_preferredFramesPerSecond(MTKView * self) {
    return ((int64_t(*)(void*,void*))objc_msgSend)((void*)self, oc.MTKView.preferredFramesPerSecond);
}
void MTKView_setAutoResizeDrawable(MTKView * self, bool val) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, oc.MTKView.setAutoResizeDrawable, val);
}
bool MTKView_autoResizeDrawable(MTKView * self) {
    return ((bool(*)(void*,void*))objc_msgSend)((void*)self, oc.MTKView.autoResizeDrawable);
}
void* oc_alloc(void* cls) {
    return ((void*(*)(void*,void*))objc_msgSend)(cls, oc.NSObject.alloc);
}
void* oc_alloc_init(void* cls) {
    return (void*)NSObject_init((NSObject*)oc_alloc(cls));
}
void oc_release(void* obj) {
    NSObject_release((NSObject*)obj);
}
