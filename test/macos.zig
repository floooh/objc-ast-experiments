// machine generated, don't edit
const c = @cImport(@cInclude("macos.h"));
pub const NSBackingStoreType = u64;
pub const NSBackingStoreRetained: u64 = 0;
pub const NSBackingStoreNonretained: u64 = 1;
pub const NSBackingStoreBuffered: u64 = 2;
pub const NSApplicationActivationPolicy = i64;
pub const NSApplicationActivationPolicyRegular: i64 = 0;
pub const NSApplicationActivationPolicyAccessory: i64 = 1;
pub const NSApplicationActivationPolicyProhibited: i64 = 2;
pub const NSWindowStyleMask = u64;
pub const NSWindowStyleMaskBorderless: u64 = 0;
pub const NSWindowStyleMaskTitled: u64 = 1<<0;
pub const NSWindowStyleMaskClosable: u64 = 1<<1;
pub const NSWindowStyleMaskMiniaturizable: u64 = 1<<2;
pub const NSWindowStyleMaskResizable: u64 = 1<<3;
pub const NSWindowStyleMaskTexturedBackground: u64 = 1<<8;
pub const NSWindowStyleMaskUnifiedTitleAndToolbar: u64 = 1<<12;
pub const NSWindowStyleMaskFullScreen: u64 = 1<<14;
pub const NSWindowStyleMaskFullSizeContentView: u64 = 1<<15;
pub const NSWindowStyleMaskUtilityWindow: u64 = 1<<4;
pub const NSWindowStyleMaskDocModalWindow: u64 = 1<<6;
pub const NSWindowStyleMaskNonactivatingPanel: u64 = 1<<7;
pub const NSWindowStyleMaskHUDWindow: u64 = 1<<13;
pub const MTLPixelFormat = u64;
pub const MTLPixelFormatInvalid: u64 = 0;
pub const MTLPixelFormatA8Unorm: u64 = 1;
pub const MTLPixelFormatR8Unorm: u64 = 10;
pub const MTLPixelFormatR8Unorm_sRGB: u64 = 11;
pub const MTLPixelFormatR8Snorm: u64 = 12;
pub const MTLPixelFormatR8Uint: u64 = 13;
pub const MTLPixelFormatR8Sint: u64 = 14;
pub const MTLPixelFormatR16Unorm: u64 = 20;
pub const MTLPixelFormatR16Snorm: u64 = 22;
pub const MTLPixelFormatR16Uint: u64 = 23;
pub const MTLPixelFormatR16Sint: u64 = 24;
pub const MTLPixelFormatR16Float: u64 = 25;
pub const MTLPixelFormatRG8Unorm: u64 = 30;
pub const MTLPixelFormatRG8Unorm_sRGB: u64 = 31;
pub const MTLPixelFormatRG8Snorm: u64 = 32;
pub const MTLPixelFormatRG8Uint: u64 = 33;
pub const MTLPixelFormatRG8Sint: u64 = 34;
pub const MTLPixelFormatB5G6R5Unorm: u64 = 40;
pub const MTLPixelFormatA1BGR5Unorm: u64 = 41;
pub const MTLPixelFormatABGR4Unorm: u64 = 42;
pub const MTLPixelFormatBGR5A1Unorm: u64 = 43;
pub const MTLPixelFormatR32Uint: u64 = 53;
pub const MTLPixelFormatR32Sint: u64 = 54;
pub const MTLPixelFormatR32Float: u64 = 55;
pub const MTLPixelFormatRG16Unorm: u64 = 60;
pub const MTLPixelFormatRG16Snorm: u64 = 62;
pub const MTLPixelFormatRG16Uint: u64 = 63;
pub const MTLPixelFormatRG16Sint: u64 = 64;
pub const MTLPixelFormatRG16Float: u64 = 65;
pub const MTLPixelFormatRGBA8Unorm: u64 = 70;
pub const MTLPixelFormatRGBA8Unorm_sRGB: u64 = 71;
pub const MTLPixelFormatRGBA8Snorm: u64 = 72;
pub const MTLPixelFormatRGBA8Uint: u64 = 73;
pub const MTLPixelFormatRGBA8Sint: u64 = 74;
pub const MTLPixelFormatBGRA8Unorm: u64 = 80;
pub const MTLPixelFormatBGRA8Unorm_sRGB: u64 = 81;
pub const MTLPixelFormatRGB10A2Unorm: u64 = 90;
pub const MTLPixelFormatRGB10A2Uint: u64 = 91;
pub const MTLPixelFormatRG11B10Float: u64 = 92;
pub const MTLPixelFormatRGB9E5Float: u64 = 93;
pub const MTLPixelFormatBGR10A2Unorm: u64 = 94;
pub const MTLPixelFormatBGR10_XR: u64 = 554;
pub const MTLPixelFormatBGR10_XR_sRGB: u64 = 555;
pub const MTLPixelFormatRG32Uint: u64 = 103;
pub const MTLPixelFormatRG32Sint: u64 = 104;
pub const MTLPixelFormatRG32Float: u64 = 105;
pub const MTLPixelFormatRGBA16Unorm: u64 = 110;
pub const MTLPixelFormatRGBA16Snorm: u64 = 112;
pub const MTLPixelFormatRGBA16Uint: u64 = 113;
pub const MTLPixelFormatRGBA16Sint: u64 = 114;
pub const MTLPixelFormatRGBA16Float: u64 = 115;
pub const MTLPixelFormatBGRA10_XR: u64 = 552;
pub const MTLPixelFormatBGRA10_XR_sRGB: u64 = 553;
pub const MTLPixelFormatRGBA32Uint: u64 = 123;
pub const MTLPixelFormatRGBA32Sint: u64 = 124;
pub const MTLPixelFormatRGBA32Float: u64 = 125;
pub const MTLPixelFormatBC1_RGBA: u64 = 130;
pub const MTLPixelFormatBC1_RGBA_sRGB: u64 = 131;
pub const MTLPixelFormatBC2_RGBA: u64 = 132;
pub const MTLPixelFormatBC2_RGBA_sRGB: u64 = 133;
pub const MTLPixelFormatBC3_RGBA: u64 = 134;
pub const MTLPixelFormatBC3_RGBA_sRGB: u64 = 135;
pub const MTLPixelFormatBC4_RUnorm: u64 = 140;
pub const MTLPixelFormatBC4_RSnorm: u64 = 141;
pub const MTLPixelFormatBC5_RGUnorm: u64 = 142;
pub const MTLPixelFormatBC5_RGSnorm: u64 = 143;
pub const MTLPixelFormatBC6H_RGBFloat: u64 = 150;
pub const MTLPixelFormatBC6H_RGBUfloat: u64 = 151;
pub const MTLPixelFormatBC7_RGBAUnorm: u64 = 152;
pub const MTLPixelFormatBC7_RGBAUnorm_sRGB: u64 = 153;
pub const MTLPixelFormatPVRTC_RGB_2BPP: u64 = 160;
pub const MTLPixelFormatPVRTC_RGB_2BPP_sRGB: u64 = 161;
pub const MTLPixelFormatPVRTC_RGB_4BPP: u64 = 162;
pub const MTLPixelFormatPVRTC_RGB_4BPP_sRGB: u64 = 163;
pub const MTLPixelFormatPVRTC_RGBA_2BPP: u64 = 164;
pub const MTLPixelFormatPVRTC_RGBA_2BPP_sRGB: u64 = 165;
pub const MTLPixelFormatPVRTC_RGBA_4BPP: u64 = 166;
pub const MTLPixelFormatPVRTC_RGBA_4BPP_sRGB: u64 = 167;
pub const MTLPixelFormatEAC_R11Unorm: u64 = 170;
pub const MTLPixelFormatEAC_R11Snorm: u64 = 172;
pub const MTLPixelFormatEAC_RG11Unorm: u64 = 174;
pub const MTLPixelFormatEAC_RG11Snorm: u64 = 176;
pub const MTLPixelFormatEAC_RGBA8: u64 = 178;
pub const MTLPixelFormatEAC_RGBA8_sRGB: u64 = 179;
pub const MTLPixelFormatETC2_RGB8: u64 = 180;
pub const MTLPixelFormatETC2_RGB8_sRGB: u64 = 181;
pub const MTLPixelFormatETC2_RGB8A1: u64 = 182;
pub const MTLPixelFormatETC2_RGB8A1_sRGB: u64 = 183;
pub const MTLPixelFormatASTC_4x4_sRGB: u64 = 186;
pub const MTLPixelFormatASTC_5x4_sRGB: u64 = 187;
pub const MTLPixelFormatASTC_5x5_sRGB: u64 = 188;
pub const MTLPixelFormatASTC_6x5_sRGB: u64 = 189;
pub const MTLPixelFormatASTC_6x6_sRGB: u64 = 190;
pub const MTLPixelFormatASTC_8x5_sRGB: u64 = 192;
pub const MTLPixelFormatASTC_8x6_sRGB: u64 = 193;
pub const MTLPixelFormatASTC_8x8_sRGB: u64 = 194;
pub const MTLPixelFormatASTC_10x5_sRGB: u64 = 195;
pub const MTLPixelFormatASTC_10x6_sRGB: u64 = 196;
pub const MTLPixelFormatASTC_10x8_sRGB: u64 = 197;
pub const MTLPixelFormatASTC_10x10_sRGB: u64 = 198;
pub const MTLPixelFormatASTC_12x10_sRGB: u64 = 199;
pub const MTLPixelFormatASTC_12x12_sRGB: u64 = 200;
pub const MTLPixelFormatASTC_4x4_LDR: u64 = 204;
pub const MTLPixelFormatASTC_5x4_LDR: u64 = 205;
pub const MTLPixelFormatASTC_5x5_LDR: u64 = 206;
pub const MTLPixelFormatASTC_6x5_LDR: u64 = 207;
pub const MTLPixelFormatASTC_6x6_LDR: u64 = 208;
pub const MTLPixelFormatASTC_8x5_LDR: u64 = 210;
pub const MTLPixelFormatASTC_8x6_LDR: u64 = 211;
pub const MTLPixelFormatASTC_8x8_LDR: u64 = 212;
pub const MTLPixelFormatASTC_10x5_LDR: u64 = 213;
pub const MTLPixelFormatASTC_10x6_LDR: u64 = 214;
pub const MTLPixelFormatASTC_10x8_LDR: u64 = 215;
pub const MTLPixelFormatASTC_10x10_LDR: u64 = 216;
pub const MTLPixelFormatASTC_12x10_LDR: u64 = 217;
pub const MTLPixelFormatASTC_12x12_LDR: u64 = 218;
pub const MTLPixelFormatASTC_4x4_HDR: u64 = 222;
pub const MTLPixelFormatASTC_5x4_HDR: u64 = 223;
pub const MTLPixelFormatASTC_5x5_HDR: u64 = 224;
pub const MTLPixelFormatASTC_6x5_HDR: u64 = 225;
pub const MTLPixelFormatASTC_6x6_HDR: u64 = 226;
pub const MTLPixelFormatASTC_8x5_HDR: u64 = 228;
pub const MTLPixelFormatASTC_8x6_HDR: u64 = 229;
pub const MTLPixelFormatASTC_8x8_HDR: u64 = 230;
pub const MTLPixelFormatASTC_10x5_HDR: u64 = 231;
pub const MTLPixelFormatASTC_10x6_HDR: u64 = 232;
pub const MTLPixelFormatASTC_10x8_HDR: u64 = 233;
pub const MTLPixelFormatASTC_10x10_HDR: u64 = 234;
pub const MTLPixelFormatASTC_12x10_HDR: u64 = 235;
pub const MTLPixelFormatASTC_12x12_HDR: u64 = 236;
pub const MTLPixelFormatGBGR422: u64 = 240;
pub const MTLPixelFormatBGRG422: u64 = 241;
pub const MTLPixelFormatDepth16Unorm: u64 = 250;
pub const MTLPixelFormatDepth32Float: u64 = 252;
pub const MTLPixelFormatStencil8: u64 = 253;
pub const MTLPixelFormatDepth24Unorm_Stencil8: u64 = 255;
pub const MTLPixelFormatDepth32Float_Stencil8: u64 = 260;
pub const MTLPixelFormatX32_Stencil8: u64 = 261;
pub const MTLPixelFormatX24_Stencil8: u64 = 262;
pub const MTLCPUCacheMode = u64;
pub const MTLCPUCacheModeDefaultCache: u64 = 0;
pub const MTLCPUCacheModeWriteCombined: u64 = 1;
pub const MTLStorageMode = u64;
pub const MTLStorageModeShared: u64 = 0;
pub const MTLStorageModeManaged: u64 = 1;
pub const MTLStorageModePrivate: u64 = 2;
pub const MTLStorageModeMemoryless: u64 = 3;
pub const MTLHazardTrackingMode = u64;
pub const MTLHazardTrackingModeDefault: u64 = 0;
pub const MTLHazardTrackingModeUntracked: u64 = 1;
pub const MTLHazardTrackingModeTracked: u64 = 2;
pub const MTLResourceOptions = u64;
pub const MTLResourceCPUCacheModeDefaultCache: u64 = MTLCPUCacheModeDefaultCache<<0;
pub const MTLResourceCPUCacheModeWriteCombined: u64 = MTLCPUCacheModeWriteCombined<<0;
pub const MTLResourceStorageModeShared: u64 = MTLStorageModeShared<<4;
pub const MTLResourceStorageModeManaged: u64 = MTLStorageModeManaged<<4;
pub const MTLResourceStorageModePrivate: u64 = MTLStorageModePrivate<<4;
pub const MTLResourceStorageModeMemoryless: u64 = MTLStorageModeMemoryless<<4;
pub const MTLResourceHazardTrackingModeDefault: u64 = MTLHazardTrackingModeDefault<<8;
pub const MTLResourceHazardTrackingModeUntracked: u64 = MTLHazardTrackingModeUntracked<<8;
pub const MTLResourceHazardTrackingModeTracked: u64 = MTLHazardTrackingModeTracked<<8;
pub const MTLResourceOptionCPUCacheModeDefault: u64 = MTLResourceCPUCacheModeDefaultCache;
pub const MTLResourceOptionCPUCacheModeWriteCombined: u64 = MTLResourceCPUCacheModeWriteCombined;
pub const MTLLoadAction = u64;
pub const MTLLoadActionDontCare: u64 = 0;
pub const MTLLoadActionLoad: u64 = 1;
pub const MTLLoadActionClear: u64 = 2;
pub const MTLCompareFunction = u64;
pub const MTLCompareFunctionNever: u64 = 0;
pub const MTLCompareFunctionLess: u64 = 1;
pub const MTLCompareFunctionEqual: u64 = 2;
pub const MTLCompareFunctionLessEqual: u64 = 3;
pub const MTLCompareFunctionGreater: u64 = 4;
pub const MTLCompareFunctionNotEqual: u64 = 5;
pub const MTLCompareFunctionGreaterEqual: u64 = 6;
pub const MTLCompareFunctionAlways: u64 = 7;
pub const MTLPrimitiveType = u64;
pub const MTLPrimitiveTypePoint: u64 = 0;
pub const MTLPrimitiveTypeLine: u64 = 1;
pub const MTLPrimitiveTypeLineStrip: u64 = 2;
pub const MTLPrimitiveTypeTriangle: u64 = 3;
pub const MTLPrimitiveTypeTriangleStrip: u64 = 4;
pub const MTLCullMode = u64;
pub const MTLCullModeNone: u64 = 0;
pub const MTLCullModeFront: u64 = 1;
pub const MTLCullModeBack: u64 = 2;
pub const MTLColorWriteMask = u64;
pub const MTLColorWriteMaskNone: u64 = 0;
pub const MTLColorWriteMaskRed: u64 = 1<<3;
pub const MTLColorWriteMaskGreen: u64 = 1<<2;
pub const MTLColorWriteMaskBlue: u64 = 1<<1;
pub const MTLColorWriteMaskAlpha: u64 = 1<<0;
pub const MTLColorWriteMaskAll: u64 = 15;
pub const MTLVertexFormat = u64;
pub const MTLVertexFormatInvalid: u64 = 0;
pub const MTLVertexFormatUChar2: u64 = 1;
pub const MTLVertexFormatUChar3: u64 = 2;
pub const MTLVertexFormatUChar4: u64 = 3;
pub const MTLVertexFormatChar2: u64 = 4;
pub const MTLVertexFormatChar3: u64 = 5;
pub const MTLVertexFormatChar4: u64 = 6;
pub const MTLVertexFormatUChar2Normalized: u64 = 7;
pub const MTLVertexFormatUChar3Normalized: u64 = 8;
pub const MTLVertexFormatUChar4Normalized: u64 = 9;
pub const MTLVertexFormatChar2Normalized: u64 = 10;
pub const MTLVertexFormatChar3Normalized: u64 = 11;
pub const MTLVertexFormatChar4Normalized: u64 = 12;
pub const MTLVertexFormatUShort2: u64 = 13;
pub const MTLVertexFormatUShort3: u64 = 14;
pub const MTLVertexFormatUShort4: u64 = 15;
pub const MTLVertexFormatShort2: u64 = 16;
pub const MTLVertexFormatShort3: u64 = 17;
pub const MTLVertexFormatShort4: u64 = 18;
pub const MTLVertexFormatUShort2Normalized: u64 = 19;
pub const MTLVertexFormatUShort3Normalized: u64 = 20;
pub const MTLVertexFormatUShort4Normalized: u64 = 21;
pub const MTLVertexFormatShort2Normalized: u64 = 22;
pub const MTLVertexFormatShort3Normalized: u64 = 23;
pub const MTLVertexFormatShort4Normalized: u64 = 24;
pub const MTLVertexFormatHalf2: u64 = 25;
pub const MTLVertexFormatHalf3: u64 = 26;
pub const MTLVertexFormatHalf4: u64 = 27;
pub const MTLVertexFormatFloat: u64 = 28;
pub const MTLVertexFormatFloat2: u64 = 29;
pub const MTLVertexFormatFloat3: u64 = 30;
pub const MTLVertexFormatFloat4: u64 = 31;
pub const MTLVertexFormatInt: u64 = 32;
pub const MTLVertexFormatInt2: u64 = 33;
pub const MTLVertexFormatInt3: u64 = 34;
pub const MTLVertexFormatInt4: u64 = 35;
pub const MTLVertexFormatUInt: u64 = 36;
pub const MTLVertexFormatUInt2: u64 = 37;
pub const MTLVertexFormatUInt3: u64 = 38;
pub const MTLVertexFormatUInt4: u64 = 39;
pub const MTLVertexFormatInt1010102Normalized: u64 = 40;
pub const MTLVertexFormatUInt1010102Normalized: u64 = 41;
pub const MTLVertexFormatUChar4Normalized_BGRA: u64 = 42;
pub const MTLVertexFormatUChar: u64 = 45;
pub const MTLVertexFormatChar: u64 = 46;
pub const MTLVertexFormatUCharNormalized: u64 = 47;
pub const MTLVertexFormatCharNormalized: u64 = 48;
pub const MTLVertexFormatUShort: u64 = 49;
pub const MTLVertexFormatShort: u64 = 50;
pub const MTLVertexFormatUShortNormalized: u64 = 51;
pub const MTLVertexFormatShortNormalized: u64 = 52;
pub const MTLVertexFormatHalf: u64 = 53;
pub const MTLVertexStepFunction = u64;
pub const MTLVertexStepFunctionConstant: u64 = 0;
pub const MTLVertexStepFunctionPerVertex: u64 = 1;
pub const MTLVertexStepFunctionPerInstance: u64 = 2;
pub const MTLVertexStepFunctionPerPatch: u64 = 3;
pub const MTLVertexStepFunctionPerPatchControlPoint: u64 = 4;
pub const CGPoint = c.CGPoint;
pub const CGSize = c.CGSize;
pub const NSRect = c.NSRect;
pub const MTLClearColor = c.MTLClearColor;
pub const sel_getUid = c.sel_getUid;
pub const dispatch_semaphore_create = c.dispatch_semaphore_create;
pub const dispatch_semaphore_wait = c.dispatch_semaphore_wait;
pub const dispatch_semaphore_signal = c.dispatch_semaphore_signal;
pub const MTLCreateSystemDefaultDevice = c.MTLCreateSystemDefaultDevice;
pub const objc_getClass = c.objc_getClass;
pub const class_addMethod = c.class_addMethod;
pub const objc_allocateClassPair = c.objc_allocateClassPair;
pub const objc_registerClassPair = c.objc_registerClassPair;
pub const objc_msgSend = c.objc_msgSend;
pub const objc_msgSend_stret = c.objc_msgSend_stret;
pub const objc_msgSend_fpret = c.objc_msgSend_fpret;
pub const NSObject = c.NSObject;
pub fn NSObject_release(self:*NSObject) void {
    c.NSObject_release(self);
}
pub fn NSObject_init(self:*NSObject) *NSObject {
    return c.NSObject_init(self);
}
pub fn NSObject_alloc() *NSObject {
    return c.NSObject_alloc();
}
pub const NSString = c.NSString;
pub fn NSString_stringWithUTF8String(nullTerminatedCString:[*c]const u8) *NSString {
    return c.NSString_stringWithUTF8String(nullTerminatedCString);
}
pub const NSNotification = c.NSNotification;
pub const NSError = c.NSError;
pub const NSResponder = c.NSResponder;
pub const NSView = c.NSView;
pub const NSApplication = c.NSApplication;
pub fn NSApplication_sharedApplication() *NSApplication {
    return c.NSApplication_sharedApplication();
}
pub fn NSApplication_activateIgnoringOtherApps(self:*NSApplication, flag:bool) void {
    c.NSApplication_activateIgnoringOtherApps(self, flag);
}
pub fn NSApplication_run(self:*NSApplication) void {
    c.NSApplication_run(self);
}
pub fn NSApplication_setActivationPolicy(self:*NSApplication, activationPolicy:NSApplicationActivationPolicy) bool {
    return c.NSApplication_setActivationPolicy(self, activationPolicy);
}
pub fn NSApplication_setDelegate(self:*NSApplication, delegate:*NSApplicationDelegate) void {
    c.NSApplication_setDelegate(self, delegate);
}
pub const NSApplicationDelegate = c.NSApplicationDelegate;
pub const NSWindow = c.NSWindow;
pub fn NSWindow_initWithContentRect_styleMask_backing_defer(self:*NSWindow, contentRect:NSRect, style:NSWindowStyleMask, backingStoreType:NSBackingStoreType, flag:bool) *NSWindow {
    return c.NSWindow_initWithContentRect_styleMask_backing_defer(self, contentRect, style, backingStoreType, flag);
}
pub fn NSWindow_setContentView(self:*NSWindow, val:*NSView) void {
    c.NSWindow_setContentView(self, val);
}
pub fn NSWindow_contentView(self:*NSWindow) *NSView {
    return c.NSWindow_contentView(self);
}
pub fn NSWindow_makeFirstResponder(self:*NSWindow, responder:*NSResponder) bool {
    return c.NSWindow_makeFirstResponder(self, responder);
}
pub fn NSWindow_center(self:*NSWindow) void {
    c.NSWindow_center(self);
}
pub fn NSWindow_makeKeyAndOrderFront(self:*NSWindow, sender:*c_void) void {
    c.NSWindow_makeKeyAndOrderFront(self, sender);
}
pub fn NSWindow_setTitle(self:*NSWindow, title:*NSString) void {
    c.NSWindow_setTitle(self, title);
}
pub fn NSWindow_setDelegate(self:*NSWindow, delegate:*NSWindowDelegate) void {
    c.NSWindow_setDelegate(self, delegate);
}
pub fn NSWindow_setAcceptsMouseMovedEvents(self:*NSWindow, val:bool) void {
    c.NSWindow_setAcceptsMouseMovedEvents(self, val);
}
pub fn NSWindow_acceptsMouseMovedEvents(self:*NSWindow) bool {
    return c.NSWindow_acceptsMouseMovedEvents(self);
}
pub fn NSWindow_setRestorable(self:*NSWindow, val:bool) void {
    c.NSWindow_setRestorable(self, val);
}
pub fn NSWindow_isRestorable(self:*NSWindow) bool {
    return c.NSWindow_isRestorable(self);
}
pub const NSWindowDelegate = c.NSWindowDelegate;
pub const MTLCommandEncoder = c.MTLCommandEncoder;
pub fn MTLCommandEncoder_endEncoding(self:*MTLCommandEncoder) void {
    c.MTLCommandEncoder_endEncoding(self);
}
pub const MTLBuffer = c.MTLBuffer;
pub const MTLFunction = c.MTLFunction;
pub const MTLCompileOptions = c.MTLCompileOptions;
pub const MTLLibrary = c.MTLLibrary;
pub fn MTLLibrary_newFunctionWithName(self:*MTLLibrary, functionName:*NSString) *MTLFunction {
    return c.MTLLibrary_newFunctionWithName(self, functionName);
}
pub const MTLDevice = c.MTLDevice;
pub fn MTLDevice_newCommandQueue(self:*MTLDevice) *MTLCommandQueue {
    return c.MTLDevice_newCommandQueue(self);
}
pub fn MTLDevice_newBufferWithBytes_length_options(self:*MTLDevice, pointer:*const c_void, length:u64, options:MTLResourceOptions) *MTLBuffer {
    return c.MTLDevice_newBufferWithBytes_length_options(self, pointer, length, options);
}
pub fn MTLDevice_newDepthStencilStateWithDescriptor(self:*MTLDevice, descriptor:*MTLDepthStencilDescriptor) *MTLDepthStencilState {
    return c.MTLDevice_newDepthStencilStateWithDescriptor(self, descriptor);
}
pub fn MTLDevice_newLibraryWithSource_options_error(self:*MTLDevice, source:*NSString, options:*MTLCompileOptions, err:*NSError) *MTLLibrary {
    return c.MTLDevice_newLibraryWithSource_options_error(self, source, options, err);
}
pub fn MTLDevice_newRenderPipelineStateWithDescriptor_error(self:*MTLDevice, descriptor:*MTLRenderPipelineDescriptor, err:*NSError) *MTLRenderPipelineState {
    return c.MTLDevice_newRenderPipelineStateWithDescriptor_error(self, descriptor, err);
}
pub const MTLRenderPassAttachmentDescriptor = c.MTLRenderPassAttachmentDescriptor;
pub fn MTLRenderPassAttachmentDescriptor_setLoadAction(self:*MTLRenderPassAttachmentDescriptor, val:MTLLoadAction) void {
    c.MTLRenderPassAttachmentDescriptor_setLoadAction(self, val);
}
pub fn MTLRenderPassAttachmentDescriptor_loadAction(self:*MTLRenderPassAttachmentDescriptor) MTLLoadAction {
    return c.MTLRenderPassAttachmentDescriptor_loadAction(self);
}
pub const MTLRenderPassColorAttachmentDescriptor = c.MTLRenderPassColorAttachmentDescriptor;
pub fn MTLRenderPassColorAttachmentDescriptor_setClearColor(self:*MTLRenderPassColorAttachmentDescriptor, val:MTLClearColor) void {
    c.MTLRenderPassColorAttachmentDescriptor_setClearColor(self, val);
}
pub fn MTLRenderPassColorAttachmentDescriptor_clearColor(self:*MTLRenderPassColorAttachmentDescriptor) MTLClearColor {
    return c.MTLRenderPassColorAttachmentDescriptor_clearColor(self);
}
pub const MTLRenderPassDepthAttachmentDescriptor = c.MTLRenderPassDepthAttachmentDescriptor;
pub fn MTLRenderPassDepthAttachmentDescriptor_setClearDepth(self:*MTLRenderPassDepthAttachmentDescriptor, val:f64) void {
    c.MTLRenderPassDepthAttachmentDescriptor_setClearDepth(self, val);
}
pub fn MTLRenderPassDepthAttachmentDescriptor_clearDepth(self:*MTLRenderPassDepthAttachmentDescriptor) f64 {
    return c.MTLRenderPassDepthAttachmentDescriptor_clearDepth(self);
}
pub const MTLRenderPassColorAttachmentDescriptorArray = c.MTLRenderPassColorAttachmentDescriptorArray;
pub fn MTLRenderPassColorAttachmentDescriptorArray_objectAtIndexedSubscript(self:*MTLRenderPassColorAttachmentDescriptorArray, attachmentIndex:u64) *MTLRenderPassColorAttachmentDescriptor {
    return c.MTLRenderPassColorAttachmentDescriptorArray_objectAtIndexedSubscript(self, attachmentIndex);
}
pub fn MTLRenderPassColorAttachmentDescriptorArray_setObject_atIndexedSubscript(self:*MTLRenderPassColorAttachmentDescriptorArray, attachment:*MTLRenderPassColorAttachmentDescriptor, attachmentIndex:u64) void {
    c.MTLRenderPassColorAttachmentDescriptorArray_setObject_atIndexedSubscript(self, attachment, attachmentIndex);
}
pub const MTLRenderPassDescriptor = c.MTLRenderPassDescriptor;
pub fn MTLRenderPassDescriptor_colorAttachments(self:*MTLRenderPassDescriptor) *MTLRenderPassColorAttachmentDescriptorArray {
    return c.MTLRenderPassDescriptor_colorAttachments(self);
}
pub fn MTLRenderPassDescriptor_setDepthAttachment(self:*MTLRenderPassDescriptor, val:*MTLRenderPassDepthAttachmentDescriptor) void {
    c.MTLRenderPassDescriptor_setDepthAttachment(self, val);
}
pub fn MTLRenderPassDescriptor_depthAttachment(self:*MTLRenderPassDescriptor) *MTLRenderPassDepthAttachmentDescriptor {
    return c.MTLRenderPassDescriptor_depthAttachment(self);
}
pub const MTLCommandBuffer = c.MTLCommandBuffer;
pub fn MTLCommandBuffer_commit(self:*MTLCommandBuffer) void {
    c.MTLCommandBuffer_commit(self);
}
pub fn MTLCommandBuffer_presentDrawable(self:*MTLCommandBuffer, drawable:*MTLDrawable) void {
    c.MTLCommandBuffer_presentDrawable(self, drawable);
}
pub fn MTLCommandBuffer_addCompletedHandler(self:*MTLCommandBuffer, block:*c_void) void {
    c.MTLCommandBuffer_addCompletedHandler(self, block);
}
pub fn MTLCommandBuffer_renderCommandEncoderWithDescriptor(self:*MTLCommandBuffer, renderPassDescriptor:*MTLRenderPassDescriptor) *MTLRenderCommandEncoder {
    return c.MTLCommandBuffer_renderCommandEncoderWithDescriptor(self, renderPassDescriptor);
}
pub const MTLCommandQueue = c.MTLCommandQueue;
pub fn MTLCommandQueue_commandBuffer(self:*MTLCommandQueue) *MTLCommandBuffer {
    return c.MTLCommandQueue_commandBuffer(self);
}
pub const MTLDepthStencilDescriptor = c.MTLDepthStencilDescriptor;
pub fn MTLDepthStencilDescriptor_setDepthCompareFunction(self:*MTLDepthStencilDescriptor, val:MTLCompareFunction) void {
    c.MTLDepthStencilDescriptor_setDepthCompareFunction(self, val);
}
pub fn MTLDepthStencilDescriptor_depthCompareFunction(self:*MTLDepthStencilDescriptor) MTLCompareFunction {
    return c.MTLDepthStencilDescriptor_depthCompareFunction(self);
}
pub fn MTLDepthStencilDescriptor_setDepthWriteEnabled(self:*MTLDepthStencilDescriptor, val:bool) void {
    c.MTLDepthStencilDescriptor_setDepthWriteEnabled(self, val);
}
pub fn MTLDepthStencilDescriptor_isDepthWriteEnabled(self:*MTLDepthStencilDescriptor) bool {
    return c.MTLDepthStencilDescriptor_isDepthWriteEnabled(self);
}
pub const MTLDepthStencilState = c.MTLDepthStencilState;
pub const MTLDrawable = c.MTLDrawable;
pub const MTLRenderCommandEncoder = c.MTLRenderCommandEncoder;
pub fn MTLRenderCommandEncoder_setRenderPipelineState(self:*MTLRenderCommandEncoder, pipelineState:*MTLRenderPipelineState) void {
    c.MTLRenderCommandEncoder_setRenderPipelineState(self, pipelineState);
}
pub fn MTLRenderCommandEncoder_setVertexBuffer_offset_atIndex(self:*MTLRenderCommandEncoder, buffer:*MTLBuffer, offset:u64, index:u64) void {
    c.MTLRenderCommandEncoder_setVertexBuffer_offset_atIndex(self, buffer, offset, index);
}
pub fn MTLRenderCommandEncoder_setCullMode(self:*MTLRenderCommandEncoder, cullMode:MTLCullMode) void {
    c.MTLRenderCommandEncoder_setCullMode(self, cullMode);
}
pub fn MTLRenderCommandEncoder_setDepthStencilState(self:*MTLRenderCommandEncoder, depthStencilState:*MTLDepthStencilState) void {
    c.MTLRenderCommandEncoder_setDepthStencilState(self, depthStencilState);
}
pub fn MTLRenderCommandEncoder_drawPrimitives_vertexStart_vertexCount(self:*MTLRenderCommandEncoder, primitiveType:MTLPrimitiveType, vertexStart:u64, vertexCount:u64) void {
    c.MTLRenderCommandEncoder_drawPrimitives_vertexStart_vertexCount(self, primitiveType, vertexStart, vertexCount);
}
pub const MTLRenderPipelineColorAttachmentDescriptor = c.MTLRenderPipelineColorAttachmentDescriptor;
pub fn MTLRenderPipelineColorAttachmentDescriptor_setPixelFormat(self:*MTLRenderPipelineColorAttachmentDescriptor, val:MTLPixelFormat) void {
    c.MTLRenderPipelineColorAttachmentDescriptor_setPixelFormat(self, val);
}
pub fn MTLRenderPipelineColorAttachmentDescriptor_pixelFormat(self:*MTLRenderPipelineColorAttachmentDescriptor) MTLPixelFormat {
    return c.MTLRenderPipelineColorAttachmentDescriptor_pixelFormat(self);
}
pub fn MTLRenderPipelineColorAttachmentDescriptor_setBlendingEnabled(self:*MTLRenderPipelineColorAttachmentDescriptor, val:bool) void {
    c.MTLRenderPipelineColorAttachmentDescriptor_setBlendingEnabled(self, val);
}
pub fn MTLRenderPipelineColorAttachmentDescriptor_isBlendingEnabled(self:*MTLRenderPipelineColorAttachmentDescriptor) bool {
    return c.MTLRenderPipelineColorAttachmentDescriptor_isBlendingEnabled(self);
}
pub fn MTLRenderPipelineColorAttachmentDescriptor_setWriteMask(self:*MTLRenderPipelineColorAttachmentDescriptor, val:MTLColorWriteMask) void {
    c.MTLRenderPipelineColorAttachmentDescriptor_setWriteMask(self, val);
}
pub fn MTLRenderPipelineColorAttachmentDescriptor_writeMask(self:*MTLRenderPipelineColorAttachmentDescriptor) MTLColorWriteMask {
    return c.MTLRenderPipelineColorAttachmentDescriptor_writeMask(self);
}
pub const MTLRenderPipelineDescriptor = c.MTLRenderPipelineDescriptor;
pub fn MTLRenderPipelineDescriptor_setVertexFunction(self:*MTLRenderPipelineDescriptor, val:*MTLFunction) void {
    c.MTLRenderPipelineDescriptor_setVertexFunction(self, val);
}
pub fn MTLRenderPipelineDescriptor_vertexFunction(self:*MTLRenderPipelineDescriptor) *MTLFunction {
    return c.MTLRenderPipelineDescriptor_vertexFunction(self);
}
pub fn MTLRenderPipelineDescriptor_setFragmentFunction(self:*MTLRenderPipelineDescriptor, val:*MTLFunction) void {
    c.MTLRenderPipelineDescriptor_setFragmentFunction(self, val);
}
pub fn MTLRenderPipelineDescriptor_fragmentFunction(self:*MTLRenderPipelineDescriptor) *MTLFunction {
    return c.MTLRenderPipelineDescriptor_fragmentFunction(self);
}
pub fn MTLRenderPipelineDescriptor_setVertexDescriptor(self:*MTLRenderPipelineDescriptor, val:*MTLVertexDescriptor) void {
    c.MTLRenderPipelineDescriptor_setVertexDescriptor(self, val);
}
pub fn MTLRenderPipelineDescriptor_vertexDescriptor(self:*MTLRenderPipelineDescriptor) *MTLVertexDescriptor {
    return c.MTLRenderPipelineDescriptor_vertexDescriptor(self);
}
pub fn MTLRenderPipelineDescriptor_setSampleCount(self:*MTLRenderPipelineDescriptor, val:u64) void {
    c.MTLRenderPipelineDescriptor_setSampleCount(self, val);
}
pub fn MTLRenderPipelineDescriptor_sampleCount(self:*MTLRenderPipelineDescriptor) u64 {
    return c.MTLRenderPipelineDescriptor_sampleCount(self);
}
pub fn MTLRenderPipelineDescriptor_setAlphaToCoverageEnabled(self:*MTLRenderPipelineDescriptor, val:bool) void {
    c.MTLRenderPipelineDescriptor_setAlphaToCoverageEnabled(self, val);
}
pub fn MTLRenderPipelineDescriptor_isAlphaToCoverageEnabled(self:*MTLRenderPipelineDescriptor) bool {
    return c.MTLRenderPipelineDescriptor_isAlphaToCoverageEnabled(self);
}
pub fn MTLRenderPipelineDescriptor_setAlphaToOneEnabled(self:*MTLRenderPipelineDescriptor, val:bool) void {
    c.MTLRenderPipelineDescriptor_setAlphaToOneEnabled(self, val);
}
pub fn MTLRenderPipelineDescriptor_isAlphaToOneEnabled(self:*MTLRenderPipelineDescriptor) bool {
    return c.MTLRenderPipelineDescriptor_isAlphaToOneEnabled(self);
}
pub fn MTLRenderPipelineDescriptor_setRasterizationEnabled(self:*MTLRenderPipelineDescriptor, val:bool) void {
    c.MTLRenderPipelineDescriptor_setRasterizationEnabled(self, val);
}
pub fn MTLRenderPipelineDescriptor_isRasterizationEnabled(self:*MTLRenderPipelineDescriptor) bool {
    return c.MTLRenderPipelineDescriptor_isRasterizationEnabled(self);
}
pub fn MTLRenderPipelineDescriptor_colorAttachments(self:*MTLRenderPipelineDescriptor) *MTLRenderPipelineColorAttachmentDescriptorArray {
    return c.MTLRenderPipelineDescriptor_colorAttachments(self);
}
pub fn MTLRenderPipelineDescriptor_setDepthAttachmentPixelFormat(self:*MTLRenderPipelineDescriptor, val:MTLPixelFormat) void {
    c.MTLRenderPipelineDescriptor_setDepthAttachmentPixelFormat(self, val);
}
pub fn MTLRenderPipelineDescriptor_depthAttachmentPixelFormat(self:*MTLRenderPipelineDescriptor) MTLPixelFormat {
    return c.MTLRenderPipelineDescriptor_depthAttachmentPixelFormat(self);
}
pub const MTLRenderPipelineState = c.MTLRenderPipelineState;
pub const MTLRenderPipelineColorAttachmentDescriptorArray = c.MTLRenderPipelineColorAttachmentDescriptorArray;
pub fn MTLRenderPipelineColorAttachmentDescriptorArray_objectAtIndexedSubscript(self:*MTLRenderPipelineColorAttachmentDescriptorArray, attachmentIndex:u64) *MTLRenderPipelineColorAttachmentDescriptor {
    return c.MTLRenderPipelineColorAttachmentDescriptorArray_objectAtIndexedSubscript(self, attachmentIndex);
}
pub fn MTLRenderPipelineColorAttachmentDescriptorArray_setObject_atIndexedSubscript(self:*MTLRenderPipelineColorAttachmentDescriptorArray, attachment:*MTLRenderPipelineColorAttachmentDescriptor, attachmentIndex:u64) void {
    c.MTLRenderPipelineColorAttachmentDescriptorArray_setObject_atIndexedSubscript(self, attachment, attachmentIndex);
}
pub const MTLVertexBufferLayoutDescriptor = c.MTLVertexBufferLayoutDescriptor;
pub fn MTLVertexBufferLayoutDescriptor_setStride(self:*MTLVertexBufferLayoutDescriptor, val:u64) void {
    c.MTLVertexBufferLayoutDescriptor_setStride(self, val);
}
pub fn MTLVertexBufferLayoutDescriptor_stride(self:*MTLVertexBufferLayoutDescriptor) u64 {
    return c.MTLVertexBufferLayoutDescriptor_stride(self);
}
pub fn MTLVertexBufferLayoutDescriptor_setStepFunction(self:*MTLVertexBufferLayoutDescriptor, val:MTLVertexStepFunction) void {
    c.MTLVertexBufferLayoutDescriptor_setStepFunction(self, val);
}
pub fn MTLVertexBufferLayoutDescriptor_stepFunction(self:*MTLVertexBufferLayoutDescriptor) MTLVertexStepFunction {
    return c.MTLVertexBufferLayoutDescriptor_stepFunction(self);
}
pub fn MTLVertexBufferLayoutDescriptor_setStepRate(self:*MTLVertexBufferLayoutDescriptor, val:u64) void {
    c.MTLVertexBufferLayoutDescriptor_setStepRate(self, val);
}
pub fn MTLVertexBufferLayoutDescriptor_stepRate(self:*MTLVertexBufferLayoutDescriptor) u64 {
    return c.MTLVertexBufferLayoutDescriptor_stepRate(self);
}
pub const MTLVertexBufferLayoutDescriptorArray = c.MTLVertexBufferLayoutDescriptorArray;
pub fn MTLVertexBufferLayoutDescriptorArray_objectAtIndexedSubscript(self:*MTLVertexBufferLayoutDescriptorArray, index:u64) *MTLVertexBufferLayoutDescriptor {
    return c.MTLVertexBufferLayoutDescriptorArray_objectAtIndexedSubscript(self, index);
}
pub fn MTLVertexBufferLayoutDescriptorArray_setObject_atIndexedSubscript(self:*MTLVertexBufferLayoutDescriptorArray, bufferDesc:*MTLVertexBufferLayoutDescriptor, index:u64) void {
    c.MTLVertexBufferLayoutDescriptorArray_setObject_atIndexedSubscript(self, bufferDesc, index);
}
pub const MTLVertexAttributeDescriptor = c.MTLVertexAttributeDescriptor;
pub fn MTLVertexAttributeDescriptor_setFormat(self:*MTLVertexAttributeDescriptor, val:MTLVertexFormat) void {
    c.MTLVertexAttributeDescriptor_setFormat(self, val);
}
pub fn MTLVertexAttributeDescriptor_format(self:*MTLVertexAttributeDescriptor) MTLVertexFormat {
    return c.MTLVertexAttributeDescriptor_format(self);
}
pub fn MTLVertexAttributeDescriptor_setOffset(self:*MTLVertexAttributeDescriptor, val:u64) void {
    c.MTLVertexAttributeDescriptor_setOffset(self, val);
}
pub fn MTLVertexAttributeDescriptor_offset(self:*MTLVertexAttributeDescriptor) u64 {
    return c.MTLVertexAttributeDescriptor_offset(self);
}
pub fn MTLVertexAttributeDescriptor_setBufferIndex(self:*MTLVertexAttributeDescriptor, val:u64) void {
    c.MTLVertexAttributeDescriptor_setBufferIndex(self, val);
}
pub fn MTLVertexAttributeDescriptor_bufferIndex(self:*MTLVertexAttributeDescriptor) u64 {
    return c.MTLVertexAttributeDescriptor_bufferIndex(self);
}
pub const MTLVertexAttributeDescriptorArray = c.MTLVertexAttributeDescriptorArray;
pub fn MTLVertexAttributeDescriptorArray_objectAtIndexedSubscript(self:*MTLVertexAttributeDescriptorArray, index:u64) *MTLVertexAttributeDescriptor {
    return c.MTLVertexAttributeDescriptorArray_objectAtIndexedSubscript(self, index);
}
pub fn MTLVertexAttributeDescriptorArray_setObject_atIndexedSubscript(self:*MTLVertexAttributeDescriptorArray, attributeDesc:*MTLVertexAttributeDescriptor, index:u64) void {
    c.MTLVertexAttributeDescriptorArray_setObject_atIndexedSubscript(self, attributeDesc, index);
}
pub const MTLVertexDescriptor = c.MTLVertexDescriptor;
pub fn MTLVertexDescriptor_vertexDescriptor() *MTLVertexDescriptor {
    return c.MTLVertexDescriptor_vertexDescriptor();
}
pub fn MTLVertexDescriptor_layouts(self:*MTLVertexDescriptor) *MTLVertexBufferLayoutDescriptorArray {
    return c.MTLVertexDescriptor_layouts(self);
}
pub fn MTLVertexDescriptor_attributes(self:*MTLVertexDescriptor) *MTLVertexAttributeDescriptorArray {
    return c.MTLVertexDescriptor_attributes(self);
}
pub const CAMetalDrawable = c.CAMetalDrawable;
pub const MTKView = c.MTKView;
pub fn MTKView_setDevice(self:*MTKView, val:*MTLDevice) void {
    c.MTKView_setDevice(self, val);
}
pub fn MTKView_device(self:*MTKView) *MTLDevice {
    return c.MTKView_device(self);
}
pub fn MTKView_currentDrawable(self:*MTKView) *CAMetalDrawable {
    return c.MTKView_currentDrawable(self);
}
pub fn MTKView_setColorPixelFormat(self:*MTKView, val:MTLPixelFormat) void {
    c.MTKView_setColorPixelFormat(self, val);
}
pub fn MTKView_colorPixelFormat(self:*MTKView) MTLPixelFormat {
    return c.MTKView_colorPixelFormat(self);
}
pub fn MTKView_setDepthStencilPixelFormat(self:*MTKView, val:MTLPixelFormat) void {
    c.MTKView_setDepthStencilPixelFormat(self, val);
}
pub fn MTKView_depthStencilPixelFormat(self:*MTKView) MTLPixelFormat {
    return c.MTKView_depthStencilPixelFormat(self);
}
pub fn MTKView_setSampleCount(self:*MTKView, val:u64) void {
    c.MTKView_setSampleCount(self, val);
}
pub fn MTKView_sampleCount(self:*MTKView) u64 {
    return c.MTKView_sampleCount(self);
}
pub fn MTKView_currentRenderPassDescriptor(self:*MTKView) *MTLRenderPassDescriptor {
    return c.MTKView_currentRenderPassDescriptor(self);
}
pub fn MTKView_setPreferredFramesPerSecond(self:*MTKView, val:i64) void {
    c.MTKView_setPreferredFramesPerSecond(self, val);
}
pub fn MTKView_preferredFramesPerSecond(self:*MTKView) i64 {
    return c.MTKView_preferredFramesPerSecond(self);
}
pub fn MTKView_setAutoResizeDrawable(self:*MTKView, val:bool) void {
    c.MTKView_setAutoResizeDrawable(self, val);
}
pub fn MTKView_autoResizeDrawable(self:*MTKView) bool {
    return c.MTKView_autoResizeDrawable(self);
}
