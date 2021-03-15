// code generated, don't edit!
#include <stdint.h>
#include <stdbool.h>

typedef struct NSObject { } NSObject;
typedef unsigned long long dispatch_time_t;
typedef void* dispatch_semaphore_t;
typedef struct NSString { } NSString;
typedef struct NSNotification { } NSNotification;
typedef struct NSError { } NSError;
typedef struct NSResponder { } NSResponder;
typedef struct NSView { } NSView;
typedef struct NSApplication { } NSApplication;
typedef struct NSApplicationDelegate { } NSApplicationDelegate;
typedef struct NSWindow { } NSWindow;
typedef struct NSWindowDelegate { } NSWindowDelegate;
typedef struct MTLCommandEncoder { } MTLCommandEncoder;
typedef struct MTLBuffer { } MTLBuffer;
typedef struct MTLFunction { } MTLFunction;
typedef struct MTLCompileOptions { } MTLCompileOptions;
typedef struct MTLLibrary { } MTLLibrary;
typedef struct MTLDevice { } MTLDevice;
typedef struct MTLRenderPassAttachmentDescriptor { } MTLRenderPassAttachmentDescriptor;
typedef struct MTLRenderPassColorAttachmentDescriptor { } MTLRenderPassColorAttachmentDescriptor;
typedef struct MTLRenderPassDepthAttachmentDescriptor { } MTLRenderPassDepthAttachmentDescriptor;
typedef struct MTLRenderPassColorAttachmentDescriptorArray { } MTLRenderPassColorAttachmentDescriptorArray;
typedef struct MTLRenderPassDescriptor { } MTLRenderPassDescriptor;
typedef struct MTLCommandBuffer { } MTLCommandBuffer;
typedef struct MTLCommandQueue { } MTLCommandQueue;
typedef struct MTLDepthStencilDescriptor { } MTLDepthStencilDescriptor;
typedef struct MTLDepthStencilState { } MTLDepthStencilState;
typedef struct MTLDrawable { } MTLDrawable;
typedef struct MTLRenderCommandEncoder { } MTLRenderCommandEncoder;
typedef struct MTLRenderPipelineColorAttachmentDescriptor { } MTLRenderPipelineColorAttachmentDescriptor;
typedef struct MTLRenderPipelineDescriptor { } MTLRenderPipelineDescriptor;
typedef struct MTLRenderPipelineState { } MTLRenderPipelineState;
typedef struct MTLRenderPipelineColorAttachmentDescriptorArray { } MTLRenderPipelineColorAttachmentDescriptorArray;
typedef struct MTLVertexBufferLayoutDescriptor { } MTLVertexBufferLayoutDescriptor;
typedef struct MTLVertexBufferLayoutDescriptorArray { } MTLVertexBufferLayoutDescriptorArray;
typedef struct MTLVertexAttributeDescriptor { } MTLVertexAttributeDescriptor;
typedef struct MTLVertexAttributeDescriptorArray { } MTLVertexAttributeDescriptorArray;
typedef struct MTLVertexDescriptor { } MTLVertexDescriptor;
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

typedef enum MTLCPUCacheMode: uint64_t {
    MTLCPUCacheModeDefaultCache = 0,
    MTLCPUCacheModeWriteCombined = 1,
} MTLCPUCacheMode;

typedef enum MTLStorageMode: uint64_t {
    MTLStorageModeShared = 0,
    MTLStorageModeManaged = 1,
    MTLStorageModePrivate = 2,
    MTLStorageModeMemoryless = 3,
} MTLStorageMode;

typedef enum MTLHazardTrackingMode: uint64_t {
    MTLHazardTrackingModeDefault = 0,
    MTLHazardTrackingModeUntracked = 1,
    MTLHazardTrackingModeTracked = 2,
} MTLHazardTrackingMode;

typedef enum MTLResourceOptions: uint64_t {
    MTLResourceCPUCacheModeDefaultCache = MTLCPUCacheModeDefaultCache<<0,
    MTLResourceCPUCacheModeWriteCombined = MTLCPUCacheModeWriteCombined<<0,
    MTLResourceStorageModeShared = MTLStorageModeShared<<4,
    MTLResourceStorageModeManaged = MTLStorageModeManaged<<4,
    MTLResourceStorageModePrivate = MTLStorageModePrivate<<4,
    MTLResourceStorageModeMemoryless = MTLStorageModeMemoryless<<4,
    MTLResourceHazardTrackingModeDefault = MTLHazardTrackingModeDefault<<8,
    MTLResourceHazardTrackingModeUntracked = MTLHazardTrackingModeUntracked<<8,
    MTLResourceHazardTrackingModeTracked = MTLHazardTrackingModeTracked<<8,
    MTLResourceOptionCPUCacheModeDefault = MTLResourceCPUCacheModeDefaultCache,
    MTLResourceOptionCPUCacheModeWriteCombined = MTLResourceCPUCacheModeWriteCombined,
} MTLResourceOptions;

typedef enum MTLLoadAction: uint64_t {
    MTLLoadActionDontCare = 0,
    MTLLoadActionLoad = 1,
    MTLLoadActionClear = 2,
} MTLLoadAction;

typedef enum MTLCompareFunction: uint64_t {
    MTLCompareFunctionNever = 0,
    MTLCompareFunctionLess = 1,
    MTLCompareFunctionEqual = 2,
    MTLCompareFunctionLessEqual = 3,
    MTLCompareFunctionGreater = 4,
    MTLCompareFunctionNotEqual = 5,
    MTLCompareFunctionGreaterEqual = 6,
    MTLCompareFunctionAlways = 7,
} MTLCompareFunction;

typedef enum MTLPrimitiveType: uint64_t {
    MTLPrimitiveTypePoint = 0,
    MTLPrimitiveTypeLine = 1,
    MTLPrimitiveTypeLineStrip = 2,
    MTLPrimitiveTypeTriangle = 3,
    MTLPrimitiveTypeTriangleStrip = 4,
} MTLPrimitiveType;

typedef enum MTLCullMode: uint64_t {
    MTLCullModeNone = 0,
    MTLCullModeFront = 1,
    MTLCullModeBack = 2,
} MTLCullMode;

typedef enum MTLColorWriteMask: uint64_t {
    MTLColorWriteMaskNone = 0,
    MTLColorWriteMaskRed = 1<<3,
    MTLColorWriteMaskGreen = 1<<2,
    MTLColorWriteMaskBlue = 1<<1,
    MTLColorWriteMaskAlpha = 1<<0,
    MTLColorWriteMaskAll = 15,
} MTLColorWriteMask;

typedef enum MTLVertexFormat: uint64_t {
    MTLVertexFormatInvalid = 0,
    MTLVertexFormatUChar2 = 1,
    MTLVertexFormatUChar3 = 2,
    MTLVertexFormatUChar4 = 3,
    MTLVertexFormatChar2 = 4,
    MTLVertexFormatChar3 = 5,
    MTLVertexFormatChar4 = 6,
    MTLVertexFormatUChar2Normalized = 7,
    MTLVertexFormatUChar3Normalized = 8,
    MTLVertexFormatUChar4Normalized = 9,
    MTLVertexFormatChar2Normalized = 10,
    MTLVertexFormatChar3Normalized = 11,
    MTLVertexFormatChar4Normalized = 12,
    MTLVertexFormatUShort2 = 13,
    MTLVertexFormatUShort3 = 14,
    MTLVertexFormatUShort4 = 15,
    MTLVertexFormatShort2 = 16,
    MTLVertexFormatShort3 = 17,
    MTLVertexFormatShort4 = 18,
    MTLVertexFormatUShort2Normalized = 19,
    MTLVertexFormatUShort3Normalized = 20,
    MTLVertexFormatUShort4Normalized = 21,
    MTLVertexFormatShort2Normalized = 22,
    MTLVertexFormatShort3Normalized = 23,
    MTLVertexFormatShort4Normalized = 24,
    MTLVertexFormatHalf2 = 25,
    MTLVertexFormatHalf3 = 26,
    MTLVertexFormatHalf4 = 27,
    MTLVertexFormatFloat = 28,
    MTLVertexFormatFloat2 = 29,
    MTLVertexFormatFloat3 = 30,
    MTLVertexFormatFloat4 = 31,
    MTLVertexFormatInt = 32,
    MTLVertexFormatInt2 = 33,
    MTLVertexFormatInt3 = 34,
    MTLVertexFormatInt4 = 35,
    MTLVertexFormatUInt = 36,
    MTLVertexFormatUInt2 = 37,
    MTLVertexFormatUInt3 = 38,
    MTLVertexFormatUInt4 = 39,
    MTLVertexFormatInt1010102Normalized = 40,
    MTLVertexFormatUInt1010102Normalized = 41,
    MTLVertexFormatUChar4Normalized_BGRA = 42,
    MTLVertexFormatUChar = 45,
    MTLVertexFormatChar = 46,
    MTLVertexFormatUCharNormalized = 47,
    MTLVertexFormatCharNormalized = 48,
    MTLVertexFormatUShort = 49,
    MTLVertexFormatShort = 50,
    MTLVertexFormatUShortNormalized = 51,
    MTLVertexFormatShortNormalized = 52,
    MTLVertexFormatHalf = 53,
} MTLVertexFormat;

typedef enum MTLVertexStepFunction: uint64_t {
    MTLVertexStepFunctionConstant = 0,
    MTLVertexStepFunctionPerVertex = 1,
    MTLVertexStepFunctionPerInstance = 2,
    MTLVertexStepFunctionPerPatch = 3,
    MTLVertexStepFunctionPerPatchControlPoint = 4,
} MTLVertexStepFunction;

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

extern void* sel_getUid(const char * str);
extern dispatch_semaphore_t dispatch_semaphore_create(intptr_t value);
extern intptr_t dispatch_semaphore_wait(dispatch_semaphore_t dsema, dispatch_time_t timeout);
extern intptr_t dispatch_semaphore_signal(dispatch_semaphore_t dsema);
extern MTLDevice* MTLCreateSystemDefaultDevice(void);
extern void* objc_getClass(const char * name);
extern bool class_addMethod(void* cls, void* name, void* imp, const char * types);
extern void* objc_allocateClassPair(void* superclass, const char * name, size_t extraBytes);
extern void objc_registerClassPair(void* cls);
extern void objc_msgSend(void);
extern void objc_msgSend_stret(void);
extern void objc_msgSend_fpret(void);
static struct {
    struct {
        void* cls;
        void* release;
        void* init;
        void* alloc;
    } NSObject;
    struct {
        void* cls;
        void* stringWithUTF8String;
    } NSString;
    struct {
        void* cls;
    } NSNotification;
    struct {
        void* cls;
    } NSError;
    struct {
        void* cls;
    } NSResponder;
    struct {
        void* cls;
    } NSView;
    struct {
        void* cls;
        void* sharedApplication;
        void* activateIgnoringOtherApps;
        void* run;
        void* setActivationPolicy;
        void* setDelegate;
    } NSApplication;
    struct {
        void* cls;
    } NSApplicationDelegate;
    struct {
        void* cls;
        void* initWithContentRect_styleMask_backing_defer;
        void* setContentView;
        void* contentView;
        void* makeFirstResponder;
        void* center;
        void* makeKeyAndOrderFront;
        void* setTitle;
        void* setDelegate;
        void* setAcceptsMouseMovedEvents;
        void* acceptsMouseMovedEvents;
        void* setRestorable;
        void* isRestorable;
    } NSWindow;
    struct {
        void* cls;
    } NSWindowDelegate;
    struct {
        void* cls;
        void* endEncoding;
    } MTLCommandEncoder;
    struct {
        void* cls;
    } MTLBuffer;
    struct {
        void* cls;
    } MTLFunction;
    struct {
        void* cls;
    } MTLCompileOptions;
    struct {
        void* cls;
        void* newFunctionWithName;
    } MTLLibrary;
    struct {
        void* cls;
        void* newCommandQueue;
        void* newBufferWithBytes_length_options;
        void* newDepthStencilStateWithDescriptor;
        void* newLibraryWithSource_options_error;
        void* newRenderPipelineStateWithDescriptor_error;
    } MTLDevice;
    struct {
        void* cls;
        void* setLoadAction;
        void* loadAction;
    } MTLRenderPassAttachmentDescriptor;
    struct {
        void* cls;
        void* setClearColor;
        void* clearColor;
    } MTLRenderPassColorAttachmentDescriptor;
    struct {
        void* cls;
        void* setClearDepth;
        void* clearDepth;
    } MTLRenderPassDepthAttachmentDescriptor;
    struct {
        void* cls;
        void* objectAtIndexedSubscript;
        void* setObject_atIndexedSubscript;
    } MTLRenderPassColorAttachmentDescriptorArray;
    struct {
        void* cls;
        void* colorAttachments;
        void* setDepthAttachment;
        void* depthAttachment;
    } MTLRenderPassDescriptor;
    struct {
        void* cls;
        void* commit;
        void* presentDrawable;
        void* addCompletedHandler;
        void* renderCommandEncoderWithDescriptor;
    } MTLCommandBuffer;
    struct {
        void* cls;
        void* commandBuffer;
    } MTLCommandQueue;
    struct {
        void* cls;
        void* setDepthCompareFunction;
        void* depthCompareFunction;
        void* setDepthWriteEnabled;
        void* isDepthWriteEnabled;
    } MTLDepthStencilDescriptor;
    struct {
        void* cls;
    } MTLDepthStencilState;
    struct {
        void* cls;
    } MTLDrawable;
    struct {
        void* cls;
        void* setRenderPipelineState;
        void* setVertexBuffer_offset_atIndex;
        void* setCullMode;
        void* setDepthStencilState;
        void* drawPrimitives_vertexStart_vertexCount;
    } MTLRenderCommandEncoder;
    struct {
        void* cls;
        void* setPixelFormat;
        void* pixelFormat;
        void* setBlendingEnabled;
        void* isBlendingEnabled;
        void* setWriteMask;
        void* writeMask;
    } MTLRenderPipelineColorAttachmentDescriptor;
    struct {
        void* cls;
        void* setVertexFunction;
        void* vertexFunction;
        void* setFragmentFunction;
        void* fragmentFunction;
        void* setVertexDescriptor;
        void* vertexDescriptor;
        void* setSampleCount;
        void* sampleCount;
        void* setAlphaToCoverageEnabled;
        void* isAlphaToCoverageEnabled;
        void* setAlphaToOneEnabled;
        void* isAlphaToOneEnabled;
        void* setRasterizationEnabled;
        void* isRasterizationEnabled;
        void* colorAttachments;
        void* setDepthAttachmentPixelFormat;
        void* depthAttachmentPixelFormat;
    } MTLRenderPipelineDescriptor;
    struct {
        void* cls;
    } MTLRenderPipelineState;
    struct {
        void* cls;
        void* objectAtIndexedSubscript;
        void* setObject_atIndexedSubscript;
    } MTLRenderPipelineColorAttachmentDescriptorArray;
    struct {
        void* cls;
        void* setStride;
        void* stride;
        void* setStepFunction;
        void* stepFunction;
        void* setStepRate;
        void* stepRate;
    } MTLVertexBufferLayoutDescriptor;
    struct {
        void* cls;
        void* objectAtIndexedSubscript;
        void* setObject_atIndexedSubscript;
    } MTLVertexBufferLayoutDescriptorArray;
    struct {
        void* cls;
        void* setFormat;
        void* format;
        void* setOffset;
        void* offset;
        void* setBufferIndex;
        void* bufferIndex;
    } MTLVertexAttributeDescriptor;
    struct {
        void* cls;
        void* objectAtIndexedSubscript;
        void* setObject_atIndexedSubscript;
    } MTLVertexAttributeDescriptorArray;
    struct {
        void* cls;
        void* vertexDescriptor;
        void* layouts;
        void* attributes;
    } MTLVertexDescriptor;
    struct {
        void* cls;
    } CAMetalDrawable;
    struct {
        void* cls;
        void* setDevice;
        void* device;
        void* currentDrawable;
        void* setColorPixelFormat;
        void* colorPixelFormat;
        void* setDepthStencilPixelFormat;
        void* depthStencilPixelFormat;
        void* setSampleCount;
        void* sampleCount;
        void* currentRenderPassDescriptor;
        void* setPreferredFramesPerSecond;
        void* preferredFramesPerSecond;
        void* setAutoResizeDrawable;
        void* autoResizeDrawable;
    } MTKView;
} oc;

static void oc_initialize(void) {
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

static void NSObject_release(NSObject * self) {
    return ((void(*)(void*,void*))objc_msgSend)((void*)self, oc.NSObject.release);
}
static NSObject* NSObject_init(NSObject * self) {
    return ((NSObject*(*)(void*,void*))objc_msgSend)((void*)self, oc.NSObject.init);
}
static NSObject* NSObject_alloc(void) {
    return ((NSObject*(*)(void*,void*))objc_msgSend)(oc.NSObject.cls, oc.NSObject.alloc);
}
static NSString* NSString_stringWithUTF8String(const char * nullTerminatedCString) {
    return ((NSString*(*)(void*,void*,const char *))objc_msgSend)(oc.NSString.cls, oc.NSString.stringWithUTF8String, nullTerminatedCString);
}
static NSApplication * NSApplication_sharedApplication(void) {
    return ((NSApplication *(*)(void*,void*))objc_msgSend)(oc.NSApplication.cls, oc.NSApplication.sharedApplication);
}
static void NSApplication_activateIgnoringOtherApps(NSApplication * self, bool flag) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, oc.NSApplication.activateIgnoringOtherApps, flag);
}
static void NSApplication_run(NSApplication * self) {
    return ((void(*)(void*,void*))objc_msgSend)((void*)self, oc.NSApplication.run);
}
static bool NSApplication_setActivationPolicy(NSApplication * self, NSApplicationActivationPolicy activationPolicy) {
    return ((bool(*)(void*,void*,NSApplicationActivationPolicy))objc_msgSend)((void*)self, oc.NSApplication.setActivationPolicy, activationPolicy);
}
static void NSApplication_setDelegate(NSApplication * self, NSApplicationDelegate* delegate) {
    return ((void(*)(void*,void*,NSApplicationDelegate*))objc_msgSend)((void*)self, oc.NSApplication.setDelegate, delegate);
}
static NSWindow* NSWindow_initWithContentRect_styleMask_backing_defer(NSWindow * self, NSRect contentRect, NSWindowStyleMask style, NSBackingStoreType backingStoreType, bool flag) {
    return ((NSWindow*(*)(void*,void*,NSRect,NSWindowStyleMask,NSBackingStoreType,bool))objc_msgSend)((void*)self, oc.NSWindow.initWithContentRect_styleMask_backing_defer, contentRect, style, backingStoreType, flag);
}
static void NSWindow_setContentView(NSWindow * self, NSView * val) {
    return ((void(*)(void*,void*,NSView *))objc_msgSend)((void*)self, oc.NSWindow.setContentView, val);
}
static NSView * NSWindow_contentView(NSWindow * self) {
    return ((NSView *(*)(void*,void*))objc_msgSend)((void*)self, oc.NSWindow.contentView);
}
static bool NSWindow_makeFirstResponder(NSWindow * self, NSResponder * responder) {
    return ((bool(*)(void*,void*,NSResponder *))objc_msgSend)((void*)self, oc.NSWindow.makeFirstResponder, responder);
}
static void NSWindow_center(NSWindow * self) {
    return ((void(*)(void*,void*))objc_msgSend)((void*)self, oc.NSWindow.center);
}
static void NSWindow_makeKeyAndOrderFront(NSWindow * self, void* sender) {
    return ((void(*)(void*,void*,void*))objc_msgSend)((void*)self, oc.NSWindow.makeKeyAndOrderFront, sender);
}
static void NSWindow_setTitle(NSWindow * self, NSString * title) {
    return ((void(*)(void*,void*,NSString *))objc_msgSend)((void*)self, oc.NSWindow.setTitle, title);
}
static void NSWindow_setDelegate(NSWindow * self, NSWindowDelegate* delegate) {
    return ((void(*)(void*,void*,NSWindowDelegate*))objc_msgSend)((void*)self, oc.NSWindow.setDelegate, delegate);
}
static void NSWindow_setAcceptsMouseMovedEvents(NSWindow * self, bool val) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, oc.NSWindow.setAcceptsMouseMovedEvents, val);
}
static bool NSWindow_acceptsMouseMovedEvents(NSWindow * self) {
    return ((bool(*)(void*,void*))objc_msgSend)((void*)self, oc.NSWindow.acceptsMouseMovedEvents);
}
static void NSWindow_setRestorable(NSWindow * self, bool val) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, oc.NSWindow.setRestorable, val);
}
static bool NSWindow_isRestorable(NSWindow * self) {
    return ((bool(*)(void*,void*))objc_msgSend)((void*)self, oc.NSWindow.isRestorable);
}
static void MTLCommandEncoder_endEncoding(MTLCommandEncoder * self) {
    return ((void(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLCommandEncoder.endEncoding);
}
static MTLFunction* MTLLibrary_newFunctionWithName(MTLLibrary * self, NSString * functionName) {
    return ((MTLFunction*(*)(void*,void*,NSString *))objc_msgSend)((void*)self, oc.MTLLibrary.newFunctionWithName, functionName);
}
static MTLCommandQueue* MTLDevice_newCommandQueue(MTLDevice * self) {
    return ((MTLCommandQueue*(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLDevice.newCommandQueue);
}
static MTLBuffer* MTLDevice_newBufferWithBytes_length_options(MTLDevice * self, const void * pointer, uint64_t length, MTLResourceOptions options) {
    return ((MTLBuffer*(*)(void*,void*,const void *,uint64_t,MTLResourceOptions))objc_msgSend)((void*)self, oc.MTLDevice.newBufferWithBytes_length_options, pointer, length, options);
}
static MTLDepthStencilState* MTLDevice_newDepthStencilStateWithDescriptor(MTLDevice * self, MTLDepthStencilDescriptor * descriptor) {
    return ((MTLDepthStencilState*(*)(void*,void*,MTLDepthStencilDescriptor *))objc_msgSend)((void*)self, oc.MTLDevice.newDepthStencilStateWithDescriptor, descriptor);
}
static MTLLibrary* MTLDevice_newLibraryWithSource_options_error(MTLDevice * self, NSString * source, MTLCompileOptions * options, NSError *  * error) {
    return ((MTLLibrary*(*)(void*,void*,NSString *,MTLCompileOptions *,NSError *  *))objc_msgSend)((void*)self, oc.MTLDevice.newLibraryWithSource_options_error, source, options, error);
}
static MTLRenderPipelineState* MTLDevice_newRenderPipelineStateWithDescriptor_error(MTLDevice * self, MTLRenderPipelineDescriptor * descriptor, NSError *  * error) {
    return ((MTLRenderPipelineState*(*)(void*,void*,MTLRenderPipelineDescriptor *,NSError *  *))objc_msgSend)((void*)self, oc.MTLDevice.newRenderPipelineStateWithDescriptor_error, descriptor, error);
}
static void MTLRenderPassAttachmentDescriptor_setLoadAction(MTLRenderPassAttachmentDescriptor * self, MTLLoadAction val) {
    return ((void(*)(void*,void*,MTLLoadAction))objc_msgSend)((void*)self, oc.MTLRenderPassAttachmentDescriptor.setLoadAction, val);
}
static MTLLoadAction MTLRenderPassAttachmentDescriptor_loadAction(MTLRenderPassAttachmentDescriptor * self) {
    return ((MTLLoadAction(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPassAttachmentDescriptor.loadAction);
}
static void MTLRenderPassColorAttachmentDescriptor_setClearColor(MTLRenderPassColorAttachmentDescriptor * self, MTLClearColor val) {
    return ((void(*)(void*,void*,MTLClearColor))objc_msgSend)((void*)self, oc.MTLRenderPassColorAttachmentDescriptor.setClearColor, val);
}
static MTLClearColor MTLRenderPassColorAttachmentDescriptor_clearColor(MTLRenderPassColorAttachmentDescriptor * self) {
    return ((MTLClearColor(*)(void*,void*))objc_msgSend_stret)((void*)self, oc.MTLRenderPassColorAttachmentDescriptor.clearColor);
}
static void MTLRenderPassDepthAttachmentDescriptor_setClearDepth(MTLRenderPassDepthAttachmentDescriptor * self, double val) {
    return ((void(*)(void*,void*,double))objc_msgSend)((void*)self, oc.MTLRenderPassDepthAttachmentDescriptor.setClearDepth, val);
}
static double MTLRenderPassDepthAttachmentDescriptor_clearDepth(MTLRenderPassDepthAttachmentDescriptor * self) {
    return ((double(*)(void*,void*))objc_msgSend_fpret)((void*)self, oc.MTLRenderPassDepthAttachmentDescriptor.clearDepth);
}
static MTLRenderPassColorAttachmentDescriptor * MTLRenderPassColorAttachmentDescriptorArray_objectAtIndexedSubscript(MTLRenderPassColorAttachmentDescriptorArray * self, uint64_t attachmentIndex) {
    return ((MTLRenderPassColorAttachmentDescriptor *(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, oc.MTLRenderPassColorAttachmentDescriptorArray.objectAtIndexedSubscript, attachmentIndex);
}
static void MTLRenderPassColorAttachmentDescriptorArray_setObject_atIndexedSubscript(MTLRenderPassColorAttachmentDescriptorArray * self, MTLRenderPassColorAttachmentDescriptor * attachment, uint64_t attachmentIndex) {
    return ((void(*)(void*,void*,MTLRenderPassColorAttachmentDescriptor *,uint64_t))objc_msgSend)((void*)self, oc.MTLRenderPassColorAttachmentDescriptorArray.setObject_atIndexedSubscript, attachment, attachmentIndex);
}
static MTLRenderPassColorAttachmentDescriptorArray * MTLRenderPassDescriptor_colorAttachments(MTLRenderPassDescriptor * self) {
    return ((MTLRenderPassColorAttachmentDescriptorArray *(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPassDescriptor.colorAttachments);
}
static void MTLRenderPassDescriptor_setDepthAttachment(MTLRenderPassDescriptor * self, MTLRenderPassDepthAttachmentDescriptor * val) {
    return ((void(*)(void*,void*,MTLRenderPassDepthAttachmentDescriptor *))objc_msgSend)((void*)self, oc.MTLRenderPassDescriptor.setDepthAttachment, val);
}
static MTLRenderPassDepthAttachmentDescriptor * MTLRenderPassDescriptor_depthAttachment(MTLRenderPassDescriptor * self) {
    return ((MTLRenderPassDepthAttachmentDescriptor *(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPassDescriptor.depthAttachment);
}
static void MTLCommandBuffer_commit(MTLCommandBuffer * self) {
    return ((void(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLCommandBuffer.commit);
}
static void MTLCommandBuffer_presentDrawable(MTLCommandBuffer * self, MTLDrawable* drawable) {
    return ((void(*)(void*,void*,MTLDrawable*))objc_msgSend)((void*)self, oc.MTLCommandBuffer.presentDrawable, drawable);
}
static void MTLCommandBuffer_addCompletedHandler(MTLCommandBuffer * self, void* block) {
    return ((void(*)(void*,void*,void*))objc_msgSend)((void*)self, oc.MTLCommandBuffer.addCompletedHandler, block);
}
static MTLRenderCommandEncoder* MTLCommandBuffer_renderCommandEncoderWithDescriptor(MTLCommandBuffer * self, MTLRenderPassDescriptor * renderPassDescriptor) {
    return ((MTLRenderCommandEncoder*(*)(void*,void*,MTLRenderPassDescriptor *))objc_msgSend)((void*)self, oc.MTLCommandBuffer.renderCommandEncoderWithDescriptor, renderPassDescriptor);
}
static MTLCommandBuffer* MTLCommandQueue_commandBuffer(MTLCommandQueue * self) {
    return ((MTLCommandBuffer*(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLCommandQueue.commandBuffer);
}
static void MTLDepthStencilDescriptor_setDepthCompareFunction(MTLDepthStencilDescriptor * self, MTLCompareFunction val) {
    return ((void(*)(void*,void*,MTLCompareFunction))objc_msgSend)((void*)self, oc.MTLDepthStencilDescriptor.setDepthCompareFunction, val);
}
static MTLCompareFunction MTLDepthStencilDescriptor_depthCompareFunction(MTLDepthStencilDescriptor * self) {
    return ((MTLCompareFunction(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLDepthStencilDescriptor.depthCompareFunction);
}
static void MTLDepthStencilDescriptor_setDepthWriteEnabled(MTLDepthStencilDescriptor * self, bool val) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, oc.MTLDepthStencilDescriptor.setDepthWriteEnabled, val);
}
static bool MTLDepthStencilDescriptor_isDepthWriteEnabled(MTLDepthStencilDescriptor * self) {
    return ((bool(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLDepthStencilDescriptor.isDepthWriteEnabled);
}
static void MTLRenderCommandEncoder_setRenderPipelineState(MTLRenderCommandEncoder * self, MTLRenderPipelineState* pipelineState) {
    return ((void(*)(void*,void*,MTLRenderPipelineState*))objc_msgSend)((void*)self, oc.MTLRenderCommandEncoder.setRenderPipelineState, pipelineState);
}
static void MTLRenderCommandEncoder_setVertexBuffer_offset_atIndex(MTLRenderCommandEncoder * self, MTLBuffer* buffer, uint64_t offset, uint64_t index) {
    return ((void(*)(void*,void*,MTLBuffer*,uint64_t,uint64_t))objc_msgSend)((void*)self, oc.MTLRenderCommandEncoder.setVertexBuffer_offset_atIndex, buffer, offset, index);
}
static void MTLRenderCommandEncoder_setCullMode(MTLRenderCommandEncoder * self, MTLCullMode cullMode) {
    return ((void(*)(void*,void*,MTLCullMode))objc_msgSend)((void*)self, oc.MTLRenderCommandEncoder.setCullMode, cullMode);
}
static void MTLRenderCommandEncoder_setDepthStencilState(MTLRenderCommandEncoder * self, MTLDepthStencilState* depthStencilState) {
    return ((void(*)(void*,void*,MTLDepthStencilState*))objc_msgSend)((void*)self, oc.MTLRenderCommandEncoder.setDepthStencilState, depthStencilState);
}
static void MTLRenderCommandEncoder_drawPrimitives_vertexStart_vertexCount(MTLRenderCommandEncoder * self, MTLPrimitiveType primitiveType, uint64_t vertexStart, uint64_t vertexCount) {
    return ((void(*)(void*,void*,MTLPrimitiveType,uint64_t,uint64_t))objc_msgSend)((void*)self, oc.MTLRenderCommandEncoder.drawPrimitives_vertexStart_vertexCount, primitiveType, vertexStart, vertexCount);
}
static void MTLRenderPipelineColorAttachmentDescriptor_setPixelFormat(MTLRenderPipelineColorAttachmentDescriptor * self, MTLPixelFormat val) {
    return ((void(*)(void*,void*,MTLPixelFormat))objc_msgSend)((void*)self, oc.MTLRenderPipelineColorAttachmentDescriptor.setPixelFormat, val);
}
static MTLPixelFormat MTLRenderPipelineColorAttachmentDescriptor_pixelFormat(MTLRenderPipelineColorAttachmentDescriptor * self) {
    return ((MTLPixelFormat(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineColorAttachmentDescriptor.pixelFormat);
}
static void MTLRenderPipelineColorAttachmentDescriptor_setBlendingEnabled(MTLRenderPipelineColorAttachmentDescriptor * self, bool val) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, oc.MTLRenderPipelineColorAttachmentDescriptor.setBlendingEnabled, val);
}
static bool MTLRenderPipelineColorAttachmentDescriptor_isBlendingEnabled(MTLRenderPipelineColorAttachmentDescriptor * self) {
    return ((bool(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineColorAttachmentDescriptor.isBlendingEnabled);
}
static void MTLRenderPipelineColorAttachmentDescriptor_setWriteMask(MTLRenderPipelineColorAttachmentDescriptor * self, MTLColorWriteMask val) {
    return ((void(*)(void*,void*,MTLColorWriteMask))objc_msgSend)((void*)self, oc.MTLRenderPipelineColorAttachmentDescriptor.setWriteMask, val);
}
static MTLColorWriteMask MTLRenderPipelineColorAttachmentDescriptor_writeMask(MTLRenderPipelineColorAttachmentDescriptor * self) {
    return ((MTLColorWriteMask(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineColorAttachmentDescriptor.writeMask);
}
static void MTLRenderPipelineDescriptor_setVertexFunction(MTLRenderPipelineDescriptor * self, MTLFunction* val) {
    return ((void(*)(void*,void*,MTLFunction*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.setVertexFunction, val);
}
static MTLFunction* MTLRenderPipelineDescriptor_vertexFunction(MTLRenderPipelineDescriptor * self) {
    return ((MTLFunction*(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.vertexFunction);
}
static void MTLRenderPipelineDescriptor_setFragmentFunction(MTLRenderPipelineDescriptor * self, MTLFunction* val) {
    return ((void(*)(void*,void*,MTLFunction*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.setFragmentFunction, val);
}
static MTLFunction* MTLRenderPipelineDescriptor_fragmentFunction(MTLRenderPipelineDescriptor * self) {
    return ((MTLFunction*(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.fragmentFunction);
}
static void MTLRenderPipelineDescriptor_setVertexDescriptor(MTLRenderPipelineDescriptor * self, MTLVertexDescriptor * val) {
    return ((void(*)(void*,void*,MTLVertexDescriptor *))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.setVertexDescriptor, val);
}
static MTLVertexDescriptor * MTLRenderPipelineDescriptor_vertexDescriptor(MTLRenderPipelineDescriptor * self) {
    return ((MTLVertexDescriptor *(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.vertexDescriptor);
}
static void MTLRenderPipelineDescriptor_setSampleCount(MTLRenderPipelineDescriptor * self, uint64_t val) {
    return ((void(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.setSampleCount, val);
}
static uint64_t MTLRenderPipelineDescriptor_sampleCount(MTLRenderPipelineDescriptor * self) {
    return ((uint64_t(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.sampleCount);
}
static void MTLRenderPipelineDescriptor_setAlphaToCoverageEnabled(MTLRenderPipelineDescriptor * self, bool val) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.setAlphaToCoverageEnabled, val);
}
static bool MTLRenderPipelineDescriptor_isAlphaToCoverageEnabled(MTLRenderPipelineDescriptor * self) {
    return ((bool(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.isAlphaToCoverageEnabled);
}
static void MTLRenderPipelineDescriptor_setAlphaToOneEnabled(MTLRenderPipelineDescriptor * self, bool val) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.setAlphaToOneEnabled, val);
}
static bool MTLRenderPipelineDescriptor_isAlphaToOneEnabled(MTLRenderPipelineDescriptor * self) {
    return ((bool(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.isAlphaToOneEnabled);
}
static void MTLRenderPipelineDescriptor_setRasterizationEnabled(MTLRenderPipelineDescriptor * self, bool val) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.setRasterizationEnabled, val);
}
static bool MTLRenderPipelineDescriptor_isRasterizationEnabled(MTLRenderPipelineDescriptor * self) {
    return ((bool(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.isRasterizationEnabled);
}
static MTLRenderPipelineColorAttachmentDescriptorArray * MTLRenderPipelineDescriptor_colorAttachments(MTLRenderPipelineDescriptor * self) {
    return ((MTLRenderPipelineColorAttachmentDescriptorArray *(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.colorAttachments);
}
static void MTLRenderPipelineDescriptor_setDepthAttachmentPixelFormat(MTLRenderPipelineDescriptor * self, MTLPixelFormat val) {
    return ((void(*)(void*,void*,MTLPixelFormat))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.setDepthAttachmentPixelFormat, val);
}
static MTLPixelFormat MTLRenderPipelineDescriptor_depthAttachmentPixelFormat(MTLRenderPipelineDescriptor * self) {
    return ((MTLPixelFormat(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLRenderPipelineDescriptor.depthAttachmentPixelFormat);
}
static MTLRenderPipelineColorAttachmentDescriptor * MTLRenderPipelineColorAttachmentDescriptorArray_objectAtIndexedSubscript(MTLRenderPipelineColorAttachmentDescriptorArray * self, uint64_t attachmentIndex) {
    return ((MTLRenderPipelineColorAttachmentDescriptor *(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, oc.MTLRenderPipelineColorAttachmentDescriptorArray.objectAtIndexedSubscript, attachmentIndex);
}
static void MTLRenderPipelineColorAttachmentDescriptorArray_setObject_atIndexedSubscript(MTLRenderPipelineColorAttachmentDescriptorArray * self, MTLRenderPipelineColorAttachmentDescriptor * attachment, uint64_t attachmentIndex) {
    return ((void(*)(void*,void*,MTLRenderPipelineColorAttachmentDescriptor *,uint64_t))objc_msgSend)((void*)self, oc.MTLRenderPipelineColorAttachmentDescriptorArray.setObject_atIndexedSubscript, attachment, attachmentIndex);
}
static void MTLVertexBufferLayoutDescriptor_setStride(MTLVertexBufferLayoutDescriptor * self, uint64_t val) {
    return ((void(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, oc.MTLVertexBufferLayoutDescriptor.setStride, val);
}
static uint64_t MTLVertexBufferLayoutDescriptor_stride(MTLVertexBufferLayoutDescriptor * self) {
    return ((uint64_t(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLVertexBufferLayoutDescriptor.stride);
}
static void MTLVertexBufferLayoutDescriptor_setStepFunction(MTLVertexBufferLayoutDescriptor * self, MTLVertexStepFunction val) {
    return ((void(*)(void*,void*,MTLVertexStepFunction))objc_msgSend)((void*)self, oc.MTLVertexBufferLayoutDescriptor.setStepFunction, val);
}
static MTLVertexStepFunction MTLVertexBufferLayoutDescriptor_stepFunction(MTLVertexBufferLayoutDescriptor * self) {
    return ((MTLVertexStepFunction(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLVertexBufferLayoutDescriptor.stepFunction);
}
static void MTLVertexBufferLayoutDescriptor_setStepRate(MTLVertexBufferLayoutDescriptor * self, uint64_t val) {
    return ((void(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, oc.MTLVertexBufferLayoutDescriptor.setStepRate, val);
}
static uint64_t MTLVertexBufferLayoutDescriptor_stepRate(MTLVertexBufferLayoutDescriptor * self) {
    return ((uint64_t(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLVertexBufferLayoutDescriptor.stepRate);
}
static MTLVertexBufferLayoutDescriptor * MTLVertexBufferLayoutDescriptorArray_objectAtIndexedSubscript(MTLVertexBufferLayoutDescriptorArray * self, uint64_t index) {
    return ((MTLVertexBufferLayoutDescriptor *(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, oc.MTLVertexBufferLayoutDescriptorArray.objectAtIndexedSubscript, index);
}
static void MTLVertexBufferLayoutDescriptorArray_setObject_atIndexedSubscript(MTLVertexBufferLayoutDescriptorArray * self, MTLVertexBufferLayoutDescriptor * bufferDesc, uint64_t index) {
    return ((void(*)(void*,void*,MTLVertexBufferLayoutDescriptor *,uint64_t))objc_msgSend)((void*)self, oc.MTLVertexBufferLayoutDescriptorArray.setObject_atIndexedSubscript, bufferDesc, index);
}
static void MTLVertexAttributeDescriptor_setFormat(MTLVertexAttributeDescriptor * self, MTLVertexFormat val) {
    return ((void(*)(void*,void*,MTLVertexFormat))objc_msgSend)((void*)self, oc.MTLVertexAttributeDescriptor.setFormat, val);
}
static MTLVertexFormat MTLVertexAttributeDescriptor_format(MTLVertexAttributeDescriptor * self) {
    return ((MTLVertexFormat(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLVertexAttributeDescriptor.format);
}
static void MTLVertexAttributeDescriptor_setOffset(MTLVertexAttributeDescriptor * self, uint64_t val) {
    return ((void(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, oc.MTLVertexAttributeDescriptor.setOffset, val);
}
static uint64_t MTLVertexAttributeDescriptor_offset(MTLVertexAttributeDescriptor * self) {
    return ((uint64_t(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLVertexAttributeDescriptor.offset);
}
static void MTLVertexAttributeDescriptor_setBufferIndex(MTLVertexAttributeDescriptor * self, uint64_t val) {
    return ((void(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, oc.MTLVertexAttributeDescriptor.setBufferIndex, val);
}
static uint64_t MTLVertexAttributeDescriptor_bufferIndex(MTLVertexAttributeDescriptor * self) {
    return ((uint64_t(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLVertexAttributeDescriptor.bufferIndex);
}
static MTLVertexAttributeDescriptor * MTLVertexAttributeDescriptorArray_objectAtIndexedSubscript(MTLVertexAttributeDescriptorArray * self, uint64_t index) {
    return ((MTLVertexAttributeDescriptor *(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, oc.MTLVertexAttributeDescriptorArray.objectAtIndexedSubscript, index);
}
static void MTLVertexAttributeDescriptorArray_setObject_atIndexedSubscript(MTLVertexAttributeDescriptorArray * self, MTLVertexAttributeDescriptor * attributeDesc, uint64_t index) {
    return ((void(*)(void*,void*,MTLVertexAttributeDescriptor *,uint64_t))objc_msgSend)((void*)self, oc.MTLVertexAttributeDescriptorArray.setObject_atIndexedSubscript, attributeDesc, index);
}
static MTLVertexDescriptor * MTLVertexDescriptor_vertexDescriptor(void) {
    return ((MTLVertexDescriptor *(*)(void*,void*))objc_msgSend)(oc.MTLVertexDescriptor.cls, oc.MTLVertexDescriptor.vertexDescriptor);
}
static MTLVertexBufferLayoutDescriptorArray * MTLVertexDescriptor_layouts(MTLVertexDescriptor * self) {
    return ((MTLVertexBufferLayoutDescriptorArray *(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLVertexDescriptor.layouts);
}
static MTLVertexAttributeDescriptorArray * MTLVertexDescriptor_attributes(MTLVertexDescriptor * self) {
    return ((MTLVertexAttributeDescriptorArray *(*)(void*,void*))objc_msgSend)((void*)self, oc.MTLVertexDescriptor.attributes);
}
static void MTKView_setDevice(MTKView * self, MTLDevice* val) {
    return ((void(*)(void*,void*,MTLDevice*))objc_msgSend)((void*)self, oc.MTKView.setDevice, val);
}
static MTLDevice* MTKView_device(MTKView * self) {
    return ((MTLDevice*(*)(void*,void*))objc_msgSend)((void*)self, oc.MTKView.device);
}
static CAMetalDrawable* MTKView_currentDrawable(MTKView * self) {
    return ((CAMetalDrawable*(*)(void*,void*))objc_msgSend)((void*)self, oc.MTKView.currentDrawable);
}
static void MTKView_setColorPixelFormat(MTKView * self, MTLPixelFormat val) {
    return ((void(*)(void*,void*,MTLPixelFormat))objc_msgSend)((void*)self, oc.MTKView.setColorPixelFormat, val);
}
static MTLPixelFormat MTKView_colorPixelFormat(MTKView * self) {
    return ((MTLPixelFormat(*)(void*,void*))objc_msgSend)((void*)self, oc.MTKView.colorPixelFormat);
}
static void MTKView_setDepthStencilPixelFormat(MTKView * self, MTLPixelFormat val) {
    return ((void(*)(void*,void*,MTLPixelFormat))objc_msgSend)((void*)self, oc.MTKView.setDepthStencilPixelFormat, val);
}
static MTLPixelFormat MTKView_depthStencilPixelFormat(MTKView * self) {
    return ((MTLPixelFormat(*)(void*,void*))objc_msgSend)((void*)self, oc.MTKView.depthStencilPixelFormat);
}
static void MTKView_setSampleCount(MTKView * self, uint64_t val) {
    return ((void(*)(void*,void*,uint64_t))objc_msgSend)((void*)self, oc.MTKView.setSampleCount, val);
}
static uint64_t MTKView_sampleCount(MTKView * self) {
    return ((uint64_t(*)(void*,void*))objc_msgSend)((void*)self, oc.MTKView.sampleCount);
}
static MTLRenderPassDescriptor * MTKView_currentRenderPassDescriptor(MTKView * self) {
    return ((MTLRenderPassDescriptor *(*)(void*,void*))objc_msgSend)((void*)self, oc.MTKView.currentRenderPassDescriptor);
}
static void MTKView_setPreferredFramesPerSecond(MTKView * self, int64_t val) {
    return ((void(*)(void*,void*,int64_t))objc_msgSend)((void*)self, oc.MTKView.setPreferredFramesPerSecond, val);
}
static int64_t MTKView_preferredFramesPerSecond(MTKView * self) {
    return ((int64_t(*)(void*,void*))objc_msgSend)((void*)self, oc.MTKView.preferredFramesPerSecond);
}
static void MTKView_setAutoResizeDrawable(MTKView * self, bool val) {
    return ((void(*)(void*,void*,bool))objc_msgSend)((void*)self, oc.MTKView.setAutoResizeDrawable, val);
}
static bool MTKView_autoResizeDrawable(MTKView * self) {
    return ((bool(*)(void*,void*))objc_msgSend)((void*)self, oc.MTKView.autoResizeDrawable);
}
