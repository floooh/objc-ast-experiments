#include <stdint.h>
#include <objc/objc-runtime.h>

typedef unsigned long long dispatch_time_t;
typedef void* dispatch_semaphore_t;
typedef struct NSString { } NSString;
typedef struct NSNotification { } NSNotification;
typedef struct NSResponder { } NSResponder;
typedef struct NSView { } NSView;
typedef struct NSApplication { } NSApplication;
typedef struct NSApplicationDelegate { } NSApplicationDelegate;
typedef struct NSWindow { } NSWindow;
typedef struct NSWindowDelegate { } NSWindowDelegate;
typedef struct MTLCommandEncoder { } MTLCommandEncoder;
typedef struct MTLDevice { } MTLDevice;
typedef struct MTLRenderPassAttachmentDescriptor { } MTLRenderPassAttachmentDescriptor;
typedef struct MTLRenderPassColorAttachmentDescriptor { } MTLRenderPassColorAttachmentDescriptor;
typedef struct MTLRenderPassDepthAttachmentDescriptor { } MTLRenderPassDepthAttachmentDescriptor;
typedef struct MTLRenderPassColorAttachmentDescriptorArray { } MTLRenderPassColorAttachmentDescriptorArray;
typedef struct MTLRenderPassDescriptor { } MTLRenderPassDescriptor;
typedef struct MTLCommandBuffer { } MTLCommandBuffer;
typedef struct MTLCommandQueue { } MTLCommandQueue;
typedef struct MTLDrawable { } MTLDrawable;
typedef struct MTLRenderCommandEncoder { } MTLRenderCommandEncoder;
typedef struct CAMetalDrawable { } CAMetalDrawable;
typedef struct MTKView { } MTKView;

typedef enum NSBackingStoreType: uint64_t {
    NSBackingStoreRetained = 0,
    NSBackingStoreNonretained = 1,
    NSBackingStoreBuffered = 2,
} NSBackingStoreType;

typedef enum NSApplicationActivationPolicy: int64_t {
    NSApplicationActivationPolicyRegular,
    NSApplicationActivationPolicyAccessory,
    NSApplicationActivationPolicyProhibited,
} NSApplicationActivationPolicy;

typedef enum NSWindowStyleMask: uint64_t {
    NSWindowStyleMaskBorderless = 0,
    NSWindowStyleMaskTitled = 1<<0,
    NSWindowStyleMaskClosable = 1<<1,
    NSWindowStyleMaskMiniaturizable = 1<<2,
    NSWindowStyleMaskResizable = 1<<3,
    NSWindowStyleMaskTexturedBackground = 1<<8,
    NSWindowStyleMaskUnifiedTitleAndToolbar = 1<<12,
    NSWindowStyleMaskFullScreen = 1<<14,
    NSWindowStyleMaskFullSizeContentView = 1<<15,
    NSWindowStyleMaskUtilityWindow = 1<<4,
    NSWindowStyleMaskDocModalWindow = 1<<6,
    NSWindowStyleMaskNonactivatingPanel = 1<<7,
    NSWindowStyleMaskHUDWindow = 1<<13,
} NSWindowStyleMask;

typedef enum MTLPixelFormat: uint64_t {
    MTLPixelFormatInvalid = 0,
    MTLPixelFormatA8Unorm = 1,
    MTLPixelFormatR8Unorm = 10,
    MTLPixelFormatR8Unorm_sRGB = 11,
    MTLPixelFormatR8Snorm = 12,
    MTLPixelFormatR8Uint = 13,
    MTLPixelFormatR8Sint = 14,
    MTLPixelFormatR16Unorm = 20,
    MTLPixelFormatR16Snorm = 22,
    MTLPixelFormatR16Uint = 23,
    MTLPixelFormatR16Sint = 24,
    MTLPixelFormatR16Float = 25,
    MTLPixelFormatRG8Unorm = 30,
    MTLPixelFormatRG8Unorm_sRGB = 31,
    MTLPixelFormatRG8Snorm = 32,
    MTLPixelFormatRG8Uint = 33,
    MTLPixelFormatRG8Sint = 34,
    MTLPixelFormatB5G6R5Unorm = 40,
    MTLPixelFormatA1BGR5Unorm = 41,
    MTLPixelFormatABGR4Unorm = 42,
    MTLPixelFormatBGR5A1Unorm = 43,
    MTLPixelFormatR32Uint = 53,
    MTLPixelFormatR32Sint = 54,
    MTLPixelFormatR32Float = 55,
    MTLPixelFormatRG16Unorm = 60,
    MTLPixelFormatRG16Snorm = 62,
    MTLPixelFormatRG16Uint = 63,
    MTLPixelFormatRG16Sint = 64,
    MTLPixelFormatRG16Float = 65,
    MTLPixelFormatRGBA8Unorm = 70,
    MTLPixelFormatRGBA8Unorm_sRGB = 71,
    MTLPixelFormatRGBA8Snorm = 72,
    MTLPixelFormatRGBA8Uint = 73,
    MTLPixelFormatRGBA8Sint = 74,
    MTLPixelFormatBGRA8Unorm = 80,
    MTLPixelFormatBGRA8Unorm_sRGB = 81,
    MTLPixelFormatRGB10A2Unorm = 90,
    MTLPixelFormatRGB10A2Uint = 91,
    MTLPixelFormatRG11B10Float = 92,
    MTLPixelFormatRGB9E5Float = 93,
    MTLPixelFormatBGR10A2Unorm = 94,
    MTLPixelFormatBGR10_XR = 554,
    MTLPixelFormatBGR10_XR_sRGB = 555,
    MTLPixelFormatRG32Uint = 103,
    MTLPixelFormatRG32Sint = 104,
    MTLPixelFormatRG32Float = 105,
    MTLPixelFormatRGBA16Unorm = 110,
    MTLPixelFormatRGBA16Snorm = 112,
    MTLPixelFormatRGBA16Uint = 113,
    MTLPixelFormatRGBA16Sint = 114,
    MTLPixelFormatRGBA16Float = 115,
    MTLPixelFormatBGRA10_XR = 552,
    MTLPixelFormatBGRA10_XR_sRGB = 553,
    MTLPixelFormatRGBA32Uint = 123,
    MTLPixelFormatRGBA32Sint = 124,
    MTLPixelFormatRGBA32Float = 125,
    MTLPixelFormatBC1_RGBA = 130,
    MTLPixelFormatBC1_RGBA_sRGB = 131,
    MTLPixelFormatBC2_RGBA = 132,
    MTLPixelFormatBC2_RGBA_sRGB = 133,
    MTLPixelFormatBC3_RGBA = 134,
    MTLPixelFormatBC3_RGBA_sRGB = 135,
    MTLPixelFormatBC4_RUnorm = 140,
    MTLPixelFormatBC4_RSnorm = 141,
    MTLPixelFormatBC5_RGUnorm = 142,
    MTLPixelFormatBC5_RGSnorm = 143,
    MTLPixelFormatBC6H_RGBFloat = 150,
    MTLPixelFormatBC6H_RGBUfloat = 151,
    MTLPixelFormatBC7_RGBAUnorm = 152,
    MTLPixelFormatBC7_RGBAUnorm_sRGB = 153,
    MTLPixelFormatPVRTC_RGB_2BPP = 160,
    MTLPixelFormatPVRTC_RGB_2BPP_sRGB = 161,
    MTLPixelFormatPVRTC_RGB_4BPP = 162,
    MTLPixelFormatPVRTC_RGB_4BPP_sRGB = 163,
    MTLPixelFormatPVRTC_RGBA_2BPP = 164,
    MTLPixelFormatPVRTC_RGBA_2BPP_sRGB = 165,
    MTLPixelFormatPVRTC_RGBA_4BPP = 166,
    MTLPixelFormatPVRTC_RGBA_4BPP_sRGB = 167,
    MTLPixelFormatEAC_R11Unorm = 170,
    MTLPixelFormatEAC_R11Snorm = 172,
    MTLPixelFormatEAC_RG11Unorm = 174,
    MTLPixelFormatEAC_RG11Snorm = 176,
    MTLPixelFormatEAC_RGBA8 = 178,
    MTLPixelFormatEAC_RGBA8_sRGB = 179,
    MTLPixelFormatETC2_RGB8 = 180,
    MTLPixelFormatETC2_RGB8_sRGB = 181,
    MTLPixelFormatETC2_RGB8A1 = 182,
    MTLPixelFormatETC2_RGB8A1_sRGB = 183,
    MTLPixelFormatASTC_4x4_sRGB = 186,
    MTLPixelFormatASTC_5x4_sRGB = 187,
    MTLPixelFormatASTC_5x5_sRGB = 188,
    MTLPixelFormatASTC_6x5_sRGB = 189,
    MTLPixelFormatASTC_6x6_sRGB = 190,
    MTLPixelFormatASTC_8x5_sRGB = 192,
    MTLPixelFormatASTC_8x6_sRGB = 193,
    MTLPixelFormatASTC_8x8_sRGB = 194,
    MTLPixelFormatASTC_10x5_sRGB = 195,
    MTLPixelFormatASTC_10x6_sRGB = 196,
    MTLPixelFormatASTC_10x8_sRGB = 197,
    MTLPixelFormatASTC_10x10_sRGB = 198,
    MTLPixelFormatASTC_12x10_sRGB = 199,
    MTLPixelFormatASTC_12x12_sRGB = 200,
    MTLPixelFormatASTC_4x4_LDR = 204,
    MTLPixelFormatASTC_5x4_LDR = 205,
    MTLPixelFormatASTC_5x5_LDR = 206,
    MTLPixelFormatASTC_6x5_LDR = 207,
    MTLPixelFormatASTC_6x6_LDR = 208,
    MTLPixelFormatASTC_8x5_LDR = 210,
    MTLPixelFormatASTC_8x6_LDR = 211,
    MTLPixelFormatASTC_8x8_LDR = 212,
    MTLPixelFormatASTC_10x5_LDR = 213,
    MTLPixelFormatASTC_10x6_LDR = 214,
    MTLPixelFormatASTC_10x8_LDR = 215,
    MTLPixelFormatASTC_10x10_LDR = 216,
    MTLPixelFormatASTC_12x10_LDR = 217,
    MTLPixelFormatASTC_12x12_LDR = 218,
    MTLPixelFormatASTC_4x4_HDR = 222,
    MTLPixelFormatASTC_5x4_HDR = 223,
    MTLPixelFormatASTC_5x5_HDR = 224,
    MTLPixelFormatASTC_6x5_HDR = 225,
    MTLPixelFormatASTC_6x6_HDR = 226,
    MTLPixelFormatASTC_8x5_HDR = 228,
    MTLPixelFormatASTC_8x6_HDR = 229,
    MTLPixelFormatASTC_8x8_HDR = 230,
    MTLPixelFormatASTC_10x5_HDR = 231,
    MTLPixelFormatASTC_10x6_HDR = 232,
    MTLPixelFormatASTC_10x8_HDR = 233,
    MTLPixelFormatASTC_10x10_HDR = 234,
    MTLPixelFormatASTC_12x10_HDR = 235,
    MTLPixelFormatASTC_12x12_HDR = 236,
    MTLPixelFormatGBGR422 = 240,
    MTLPixelFormatBGRG422 = 241,
    MTLPixelFormatDepth16Unorm = 250,
    MTLPixelFormatDepth32Float = 252,
    MTLPixelFormatStencil8 = 253,
    MTLPixelFormatDepth24Unorm_Stencil8 = 255,
    MTLPixelFormatDepth32Float_Stencil8 = 260,
    MTLPixelFormatX32_Stencil8 = 261,
    MTLPixelFormatX24_Stencil8 = 262,
} MTLPixelFormat;

typedef enum MTLLoadAction: uint64_t {
    MTLLoadActionDontCare = 0,
    MTLLoadActionLoad = 1,
    MTLLoadActionClear = 2,
} MTLLoadAction;

typedef struct CGPoint {
    double x;
    double y;
} CGPoint;

typedef struct CGSize {
    double width;
    double height;
} CGSize;

typedef struct NSRect {
    CGPoint origin;
    CGSize size;
} NSRect;

typedef struct MTLClearColor {
    double red;
    double green;
    double blue;
    double alpha;
} MTLClearColor;

extern dispatch_semaphore_t dispatch_semaphore_create(intptr_t value);
extern intptr_t dispatch_semaphore_wait(dispatch_semaphore_t dsema, dispatch_time_t timeout);
extern intptr_t dispatch_semaphore_signal(dispatch_semaphore_t dsema);
extern MTLDevice* MTLCreateSystemDefaultDevice(void);
static NSString* NSString_stringWithUTF8String(const char * nullTerminatedCString) {
    return ((NSString*(*)(void*,void*,const char *))objc_msgSend)((void*)objc_getClass("NSString"), (void*)sel_getUid("stringWithUTF8String:"), nullTerminatedCString);
}
static NSApplication * NSApplication_sharedApplication(void) {
    return ((NSApplication *(*)(void*,void*))objc_msgSend)((void*)objc_getClass("NSApplication"), (void*)sel_getUid("sharedApplication"));
}
static void NSApplication_activateIgnoringOtherApps(NSApplication * self, bool flag) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, (void*)sel_getUid("activateIgnoringOtherApps:"), flag);
}
static void NSApplication_run(NSApplication * self) {
    return ((void(*)(void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("run"));
}
static bool NSApplication_setActivationPolicy(NSApplication * self, NSApplicationActivationPolicy activationPolicy) {
    return ((bool(*)(void*,void*,NSApplicationActivationPolicy))objc_msgSend)((void*)self, (void*)sel_getUid("setActivationPolicy:"), activationPolicy);
}
static void NSApplication_setDelegate(NSApplication * self, NSApplicationDelegate* delegate) {
    return ((void(*)(void*,void*,NSApplicationDelegate*))objc_msgSend)((void*)self, (void*)sel_getUid("setDelegate:"), delegate);
}
static NSWindow* NSWindow_initWithContentRect_styleMask_backing_defer(NSWindow * self, NSRect contentRect, NSWindowStyleMask style, NSBackingStoreType backingStoreType, bool flag) {
    return ((NSWindow*(*)(void*,void*,NSRect,NSWindowStyleMask,NSBackingStoreType,bool))objc_msgSend)((void*)self, (void*)sel_getUid("initWithContentRect:styleMask:backing:defer:"), contentRect, style, backingStoreType, flag);
}
static void NSWindow_setContentView(NSWindow * self, NSView * val) {
    return ((void(*)(void*,void*,NSView *))objc_msgSend)((void*)self, (void*)sel_getUid("setContentView:"), val);
}
static NSView * NSWindow_contentView(NSWindow * self) {
    return ((NSView *(*)(void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("contentView"));
}
static bool NSWindow_makeFirstResponder(NSWindow * self, NSResponder * responder) {
    return ((bool(*)(void*,void*,NSResponder *))objc_msgSend)((void*)self, (void*)sel_getUid("makeFirstResponder:"), responder);
}
static void NSWindow_center(NSWindow * self) {
    return ((void(*)(void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("center"));
}
static void NSWindow_makeKeyAndOrderFront(NSWindow * self, id sender) {
    return ((void(*)(void*,void*,id))objc_msgSend)((void*)self, (void*)sel_getUid("makeKeyAndOrderFront:"), sender);
}
static void NSWindow_setTitle(NSWindow * self, NSString * title) {
    return ((void(*)(void*,void*,NSString *))objc_msgSend)((void*)self, (void*)sel_getUid("setTitle:"), title);
}
static void NSWindow_setDelegate(NSWindow * self, NSWindowDelegate* delegate) {
    return ((void(*)(void*,void*,NSWindowDelegate*))objc_msgSend)((void*)self, (void*)sel_getUid("setDelegate:"), delegate);
}
static void NSWindow_setAcceptsMouseMovedEvents(NSWindow * self, bool val) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, (void*)sel_getUid("setAcceptsMouseMovedEvents:"), val);
}
static bool NSWindow_acceptsMouseMovedEvents(NSWindow * self) {
    return ((bool(*)(void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("acceptsMouseMovedEvents"));
}
static void NSWindow_setRestorable(NSWindow * self, bool val) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, (void*)sel_getUid("setRestorable:"), val);
}
static bool NSWindow_isRestorable(NSWindow * self) {
    return ((bool(*)(void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("isRestorable"));
}
static void MTLCommandEncoder_endEncoding(MTLCommandEncoder * self) {
    return ((void(*)(void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("endEncoding"));
}
static MTLCommandQueue* MTLDevice_newCommandQueue(MTLDevice * self) {
    return ((MTLCommandQueue*(*)(void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("newCommandQueue"));
}
static void MTLRenderPassAttachmentDescriptor_setLoadAction(MTLRenderPassAttachmentDescriptor * self, MTLLoadAction val) {
    return ((void(*)(void*,void*,MTLLoadAction))objc_msgSend)((void*)self, (void*)sel_getUid("setLoadAction:"), val);
}
static MTLLoadAction MTLRenderPassAttachmentDescriptor_loadAction(MTLRenderPassAttachmentDescriptor * self) {
    return ((MTLLoadAction(*)(void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("loadAction"));
}
static void MTLRenderPassColorAttachmentDescriptor_setClearColor(MTLRenderPassColorAttachmentDescriptor * self, MTLClearColor val) {
    return ((void(*)(void*,void*,MTLClearColor))objc_msgSend)((void*)self, (void*)sel_getUid("setClearColor:"), val);
}
static MTLClearColor MTLRenderPassColorAttachmentDescriptor_clearColor(MTLRenderPassColorAttachmentDescriptor * self) {
    return ((MTLClearColor(*)(void*,void*))objc_msgSend_stret)((void*)self, (void*)sel_getUid("clearColor"));
}
static void MTLRenderPassDepthAttachmentDescriptor_setClearDepth(MTLRenderPassDepthAttachmentDescriptor * self, double val) {
    return ((void(*)(void*,void*,double))objc_msgSend)((void*)self, (void*)sel_getUid("setClearDepth:"), val);
}
static double MTLRenderPassDepthAttachmentDescriptor_clearDepth(MTLRenderPassDepthAttachmentDescriptor * self) {
    return ((double(*)(void*,void*))objc_msgSend_fpret)((void*)self, (void*)sel_getUid("clearDepth"));
}
static MTLRenderPassColorAttachmentDescriptor * MTLRenderPassColorAttachmentDescriptorArray_objectAtIndexedSubscript(MTLRenderPassColorAttachmentDescriptorArray * self, uint64_t attachmentIndex) {
    return ((MTLRenderPassColorAttachmentDescriptor *(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, (void*)sel_getUid("objectAtIndexedSubscript:"), attachmentIndex);
}
static void MTLRenderPassColorAttachmentDescriptorArray_setObject_atIndexedSubscript(MTLRenderPassColorAttachmentDescriptorArray * self, MTLRenderPassColorAttachmentDescriptor * attachment, uint64_t attachmentIndex) {
    return ((void(*)(void*,void*,MTLRenderPassColorAttachmentDescriptor *,uint64_t))objc_msgSend)((void*)self, (void*)sel_getUid("setObject:atIndexedSubscript:"), attachment, attachmentIndex);
}
static MTLRenderPassColorAttachmentDescriptorArray * MTLRenderPassDescriptor_colorAttachments(MTLRenderPassDescriptor * self) {
    return ((MTLRenderPassColorAttachmentDescriptorArray *(*)(void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("colorAttachments"));
}
static void MTLRenderPassDescriptor_setDepthAttachment(MTLRenderPassDescriptor * self, MTLRenderPassDepthAttachmentDescriptor * val) {
    return ((void(*)(void*,void*,MTLRenderPassDepthAttachmentDescriptor *))objc_msgSend)((void*)self, (void*)sel_getUid("setDepthAttachment:"), val);
}
static MTLRenderPassDepthAttachmentDescriptor * MTLRenderPassDescriptor_depthAttachment(MTLRenderPassDescriptor * self) {
    return ((MTLRenderPassDepthAttachmentDescriptor *(*)(void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("depthAttachment"));
}
static void MTLCommandBuffer_commit(MTLCommandBuffer * self) {
    return ((void(*)(void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("commit"));
}
static void MTLCommandBuffer_presentDrawable(MTLCommandBuffer * self, MTLDrawable* drawable) {
    return ((void(*)(void*,void*,MTLDrawable*))objc_msgSend)((void*)self, (void*)sel_getUid("presentDrawable:"), drawable);
}
static void MTLCommandBuffer_addCompletedHandler(MTLCommandBuffer * self, void* block) {
    return ((void(*)(void*,void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("addCompletedHandler:"), block);
}
static MTLRenderCommandEncoder* MTLCommandBuffer_renderCommandEncoderWithDescriptor(MTLCommandBuffer * self, MTLRenderPassDescriptor * renderPassDescriptor) {
    return ((MTLRenderCommandEncoder*(*)(void*,void*,MTLRenderPassDescriptor *))objc_msgSend)((void*)self, (void*)sel_getUid("renderCommandEncoderWithDescriptor:"), renderPassDescriptor);
}
static MTLCommandBuffer* MTLCommandQueue_commandBuffer(MTLCommandQueue * self) {
    return ((MTLCommandBuffer*(*)(void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("commandBuffer"));
}
static void MTKView_setDevice(MTKView * self, MTLDevice* val) {
    return ((void(*)(void*,void*,MTLDevice*))objc_msgSend)((void*)self, (void*)sel_getUid("setDevice:"), val);
}
static MTLDevice* MTKView_device(MTKView * self) {
    return ((MTLDevice*(*)(void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("device"));
}
static CAMetalDrawable* MTKView_currentDrawable(MTKView * self) {
    return ((CAMetalDrawable*(*)(void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("currentDrawable"));
}
static void MTKView_setColorPixelFormat(MTKView * self, MTLPixelFormat val) {
    return ((void(*)(void*,void*,MTLPixelFormat))objc_msgSend)((void*)self, (void*)sel_getUid("setColorPixelFormat:"), val);
}
static MTLPixelFormat MTKView_colorPixelFormat(MTKView * self) {
    return ((MTLPixelFormat(*)(void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("colorPixelFormat"));
}
static void MTKView_setDepthStencilPixelFormat(MTKView * self, MTLPixelFormat val) {
    return ((void(*)(void*,void*,MTLPixelFormat))objc_msgSend)((void*)self, (void*)sel_getUid("setDepthStencilPixelFormat:"), val);
}
static MTLPixelFormat MTKView_depthStencilPixelFormat(MTKView * self) {
    return ((MTLPixelFormat(*)(void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("depthStencilPixelFormat"));
}
static void MTKView_setSampleCount(MTKView * self, uint64_t val) {
    return ((void(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, (void*)sel_getUid("setSampleCount:"), val);
}
static uint64_t MTKView_sampleCount(MTKView * self) {
    return ((uint64_t(*)(void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("sampleCount"));
}
static MTLRenderPassDescriptor * MTKView_currentRenderPassDescriptor(MTKView * self) {
    return ((MTLRenderPassDescriptor *(*)(void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("currentRenderPassDescriptor"));
}
static void MTKView_setPreferredFramesPerSecond(MTKView * self, int64_t val) {
    return ((void(*)(void*,void*,int64_t))objc_msgSend)((void*)self, (void*)sel_getUid("setPreferredFramesPerSecond:"), val);
}
static int64_t MTKView_preferredFramesPerSecond(MTKView * self) {
    return ((int64_t(*)(void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("preferredFramesPerSecond"));
}
static void MTKView_setAutoResizeDrawable(MTKView * self, bool val) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, (void*)sel_getUid("setAutoResizeDrawable:"), val);
}
static bool MTKView_autoResizeDrawable(MTKView * self) {
    return ((bool(*)(void*,void*))objc_msgSend)((void*)self, (void*)sel_getUid("autoResizeDrawable"));
}
