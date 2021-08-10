// code generated, don't edit!
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

typedef struct NSObject { uint8_t dummy; } NSObject;
typedef unsigned long long dispatch_time_t;
typedef void* dispatch_semaphore_t;
typedef struct NSString { uint8_t dummy; } NSString;
typedef struct NSNotification { uint8_t dummy; } NSNotification;
typedef struct NSError { uint8_t dummy; } NSError;
typedef struct NSResponder { uint8_t dummy; } NSResponder;
typedef struct NSView { uint8_t dummy; } NSView;
typedef struct NSApplication { uint8_t dummy; } NSApplication;
typedef struct NSApplicationDelegate { uint8_t dummy; } NSApplicationDelegate;
typedef struct NSWindow { uint8_t dummy; } NSWindow;
typedef struct NSWindowDelegate { uint8_t dummy; } NSWindowDelegate;
typedef struct MTLCommandEncoder { uint8_t dummy; } MTLCommandEncoder;
typedef struct MTLBuffer { uint8_t dummy; } MTLBuffer;
typedef struct MTLFunction { uint8_t dummy; } MTLFunction;
typedef struct MTLCompileOptions { uint8_t dummy; } MTLCompileOptions;
typedef struct MTLLibrary { uint8_t dummy; } MTLLibrary;
typedef struct MTLDevice { uint8_t dummy; } MTLDevice;
typedef struct MTLRenderPassAttachmentDescriptor { uint8_t dummy; } MTLRenderPassAttachmentDescriptor;
typedef struct MTLRenderPassColorAttachmentDescriptor { uint8_t dummy; } MTLRenderPassColorAttachmentDescriptor;
typedef struct MTLRenderPassDepthAttachmentDescriptor { uint8_t dummy; } MTLRenderPassDepthAttachmentDescriptor;
typedef struct MTLRenderPassColorAttachmentDescriptorArray { uint8_t dummy; } MTLRenderPassColorAttachmentDescriptorArray;
typedef struct MTLRenderPassDescriptor { uint8_t dummy; } MTLRenderPassDescriptor;
typedef struct MTLCommandBuffer { uint8_t dummy; } MTLCommandBuffer;
typedef struct MTLCommandQueue { uint8_t dummy; } MTLCommandQueue;
typedef struct MTLDepthStencilDescriptor { uint8_t dummy; } MTLDepthStencilDescriptor;
typedef struct MTLDepthStencilState { uint8_t dummy; } MTLDepthStencilState;
typedef struct MTLDrawable { uint8_t dummy; } MTLDrawable;
typedef struct MTLRenderCommandEncoder { uint8_t dummy; } MTLRenderCommandEncoder;
typedef struct MTLRenderPipelineColorAttachmentDescriptor { uint8_t dummy; } MTLRenderPipelineColorAttachmentDescriptor;
typedef struct MTLRenderPipelineDescriptor { uint8_t dummy; } MTLRenderPipelineDescriptor;
typedef struct MTLRenderPipelineState { uint8_t dummy; } MTLRenderPipelineState;
typedef struct MTLRenderPipelineColorAttachmentDescriptorArray { uint8_t dummy; } MTLRenderPipelineColorAttachmentDescriptorArray;
typedef struct MTLVertexBufferLayoutDescriptor { uint8_t dummy; } MTLVertexBufferLayoutDescriptor;
typedef struct MTLVertexBufferLayoutDescriptorArray { uint8_t dummy; } MTLVertexBufferLayoutDescriptorArray;
typedef struct MTLVertexAttributeDescriptor { uint8_t dummy; } MTLVertexAttributeDescriptor;
typedef struct MTLVertexAttributeDescriptorArray { uint8_t dummy; } MTLVertexAttributeDescriptorArray;
typedef struct MTLVertexDescriptor { uint8_t dummy; } MTLVertexDescriptor;
typedef struct CAMetalDrawable { uint8_t dummy; } CAMetalDrawable;
typedef struct MTKView { uint8_t dummy; } MTKView;

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
typedef struct {
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
} oc_t;

extern oc_t oc;
extern void oc_initialize(void);
extern void NSObject_release(NSObject * self);
extern NSObject* NSObject_init(NSObject * self);
extern NSObject* NSObject_alloc(void);
extern NSString* NSString_stringWithUTF8String(const char * nullTerminatedCString);
extern NSApplication * NSApplication_sharedApplication(void);
extern void NSApplication_activateIgnoringOtherApps(NSApplication * self, bool flag);
extern void NSApplication_run(NSApplication * self);
extern bool NSApplication_setActivationPolicy(NSApplication * self, NSApplicationActivationPolicy activationPolicy);
extern void NSApplication_setDelegate(NSApplication * self, NSApplicationDelegate* delegate);
extern NSWindow* NSWindow_initWithContentRect_styleMask_backing_defer(NSWindow * self, NSRect contentRect, NSWindowStyleMask style, NSBackingStoreType backingStoreType, bool flag);
extern void NSWindow_setContentView(NSWindow * self, NSView * val);
extern NSView * NSWindow_contentView(NSWindow * self);
extern bool NSWindow_makeFirstResponder(NSWindow * self, NSResponder * responder);
extern void NSWindow_center(NSWindow * self);
extern void NSWindow_makeKeyAndOrderFront(NSWindow * self, void* sender);
extern void NSWindow_setTitle(NSWindow * self, NSString * title);
extern void NSWindow_setDelegate(NSWindow * self, NSWindowDelegate* delegate);
extern void NSWindow_setAcceptsMouseMovedEvents(NSWindow * self, bool val);
extern bool NSWindow_acceptsMouseMovedEvents(NSWindow * self);
extern void NSWindow_setRestorable(NSWindow * self, bool val);
extern bool NSWindow_isRestorable(NSWindow * self);
extern void MTLCommandEncoder_endEncoding(MTLCommandEncoder * self);
extern MTLFunction* MTLLibrary_newFunctionWithName(MTLLibrary * self, NSString * functionName);
extern MTLCommandQueue* MTLDevice_newCommandQueue(MTLDevice * self);
extern MTLBuffer* MTLDevice_newBufferWithBytes_length_options(MTLDevice * self, const void * pointer, uint64_t length, MTLResourceOptions options);
extern MTLDepthStencilState* MTLDevice_newDepthStencilStateWithDescriptor(MTLDevice * self, MTLDepthStencilDescriptor * descriptor);
extern MTLLibrary* MTLDevice_newLibraryWithSource_options_error(MTLDevice * self, NSString * source, MTLCompileOptions * options, NSError *  * error);
extern MTLRenderPipelineState* MTLDevice_newRenderPipelineStateWithDescriptor_error(MTLDevice * self, MTLRenderPipelineDescriptor * descriptor, NSError *  * error);
extern void MTLRenderPassAttachmentDescriptor_setLoadAction(MTLRenderPassAttachmentDescriptor * self, MTLLoadAction val);
extern MTLLoadAction MTLRenderPassAttachmentDescriptor_loadAction(MTLRenderPassAttachmentDescriptor * self);
extern void MTLRenderPassColorAttachmentDescriptor_setClearColor(MTLRenderPassColorAttachmentDescriptor * self, MTLClearColor val);
extern MTLClearColor MTLRenderPassColorAttachmentDescriptor_clearColor(MTLRenderPassColorAttachmentDescriptor * self);
extern void MTLRenderPassDepthAttachmentDescriptor_setClearDepth(MTLRenderPassDepthAttachmentDescriptor * self, double val);
extern double MTLRenderPassDepthAttachmentDescriptor_clearDepth(MTLRenderPassDepthAttachmentDescriptor * self);
extern MTLRenderPassColorAttachmentDescriptor * MTLRenderPassColorAttachmentDescriptorArray_objectAtIndexedSubscript(MTLRenderPassColorAttachmentDescriptorArray * self, uint64_t attachmentIndex);
extern void MTLRenderPassColorAttachmentDescriptorArray_setObject_atIndexedSubscript(MTLRenderPassColorAttachmentDescriptorArray * self, MTLRenderPassColorAttachmentDescriptor * attachment, uint64_t attachmentIndex);
extern MTLRenderPassColorAttachmentDescriptorArray * MTLRenderPassDescriptor_colorAttachments(MTLRenderPassDescriptor * self);
extern void MTLRenderPassDescriptor_setDepthAttachment(MTLRenderPassDescriptor * self, MTLRenderPassDepthAttachmentDescriptor * val);
extern MTLRenderPassDepthAttachmentDescriptor * MTLRenderPassDescriptor_depthAttachment(MTLRenderPassDescriptor * self);
extern void MTLCommandBuffer_commit(MTLCommandBuffer * self);
extern void MTLCommandBuffer_presentDrawable(MTLCommandBuffer * self, MTLDrawable* drawable);
extern void MTLCommandBuffer_addCompletedHandler(MTLCommandBuffer * self, void* block);
extern MTLRenderCommandEncoder* MTLCommandBuffer_renderCommandEncoderWithDescriptor(MTLCommandBuffer * self, MTLRenderPassDescriptor * renderPassDescriptor);
extern MTLCommandBuffer* MTLCommandQueue_commandBuffer(MTLCommandQueue * self);
extern void MTLDepthStencilDescriptor_setDepthCompareFunction(MTLDepthStencilDescriptor * self, MTLCompareFunction val);
extern MTLCompareFunction MTLDepthStencilDescriptor_depthCompareFunction(MTLDepthStencilDescriptor * self);
extern void MTLDepthStencilDescriptor_setDepthWriteEnabled(MTLDepthStencilDescriptor * self, bool val);
extern bool MTLDepthStencilDescriptor_isDepthWriteEnabled(MTLDepthStencilDescriptor * self);
extern void MTLRenderCommandEncoder_setRenderPipelineState(MTLRenderCommandEncoder * self, MTLRenderPipelineState* pipelineState);
extern void MTLRenderCommandEncoder_setVertexBuffer_offset_atIndex(MTLRenderCommandEncoder * self, MTLBuffer* buffer, uint64_t offset, uint64_t index);
extern void MTLRenderCommandEncoder_setCullMode(MTLRenderCommandEncoder * self, MTLCullMode cullMode);
extern void MTLRenderCommandEncoder_setDepthStencilState(MTLRenderCommandEncoder * self, MTLDepthStencilState* depthStencilState);
extern void MTLRenderCommandEncoder_drawPrimitives_vertexStart_vertexCount(MTLRenderCommandEncoder * self, MTLPrimitiveType primitiveType, uint64_t vertexStart, uint64_t vertexCount);
extern void MTLRenderPipelineColorAttachmentDescriptor_setPixelFormat(MTLRenderPipelineColorAttachmentDescriptor * self, MTLPixelFormat val);
extern MTLPixelFormat MTLRenderPipelineColorAttachmentDescriptor_pixelFormat(MTLRenderPipelineColorAttachmentDescriptor * self);
extern void MTLRenderPipelineColorAttachmentDescriptor_setBlendingEnabled(MTLRenderPipelineColorAttachmentDescriptor * self, bool val);
extern bool MTLRenderPipelineColorAttachmentDescriptor_isBlendingEnabled(MTLRenderPipelineColorAttachmentDescriptor * self);
extern void MTLRenderPipelineColorAttachmentDescriptor_setWriteMask(MTLRenderPipelineColorAttachmentDescriptor * self, MTLColorWriteMask val);
extern MTLColorWriteMask MTLRenderPipelineColorAttachmentDescriptor_writeMask(MTLRenderPipelineColorAttachmentDescriptor * self);
extern void MTLRenderPipelineDescriptor_setVertexFunction(MTLRenderPipelineDescriptor * self, MTLFunction* val);
extern MTLFunction* MTLRenderPipelineDescriptor_vertexFunction(MTLRenderPipelineDescriptor * self);
extern void MTLRenderPipelineDescriptor_setFragmentFunction(MTLRenderPipelineDescriptor * self, MTLFunction* val);
extern MTLFunction* MTLRenderPipelineDescriptor_fragmentFunction(MTLRenderPipelineDescriptor * self);
extern void MTLRenderPipelineDescriptor_setVertexDescriptor(MTLRenderPipelineDescriptor * self, MTLVertexDescriptor * val);
extern MTLVertexDescriptor * MTLRenderPipelineDescriptor_vertexDescriptor(MTLRenderPipelineDescriptor * self);
extern void MTLRenderPipelineDescriptor_setSampleCount(MTLRenderPipelineDescriptor * self, uint64_t val);
extern uint64_t MTLRenderPipelineDescriptor_sampleCount(MTLRenderPipelineDescriptor * self);
extern void MTLRenderPipelineDescriptor_setAlphaToCoverageEnabled(MTLRenderPipelineDescriptor * self, bool val);
extern bool MTLRenderPipelineDescriptor_isAlphaToCoverageEnabled(MTLRenderPipelineDescriptor * self);
extern void MTLRenderPipelineDescriptor_setAlphaToOneEnabled(MTLRenderPipelineDescriptor * self, bool val);
extern bool MTLRenderPipelineDescriptor_isAlphaToOneEnabled(MTLRenderPipelineDescriptor * self);
extern void MTLRenderPipelineDescriptor_setRasterizationEnabled(MTLRenderPipelineDescriptor * self, bool val);
extern bool MTLRenderPipelineDescriptor_isRasterizationEnabled(MTLRenderPipelineDescriptor * self);
extern MTLRenderPipelineColorAttachmentDescriptorArray * MTLRenderPipelineDescriptor_colorAttachments(MTLRenderPipelineDescriptor * self);
extern void MTLRenderPipelineDescriptor_setDepthAttachmentPixelFormat(MTLRenderPipelineDescriptor * self, MTLPixelFormat val);
extern MTLPixelFormat MTLRenderPipelineDescriptor_depthAttachmentPixelFormat(MTLRenderPipelineDescriptor * self);
extern MTLRenderPipelineColorAttachmentDescriptor * MTLRenderPipelineColorAttachmentDescriptorArray_objectAtIndexedSubscript(MTLRenderPipelineColorAttachmentDescriptorArray * self, uint64_t attachmentIndex);
extern void MTLRenderPipelineColorAttachmentDescriptorArray_setObject_atIndexedSubscript(MTLRenderPipelineColorAttachmentDescriptorArray * self, MTLRenderPipelineColorAttachmentDescriptor * attachment, uint64_t attachmentIndex);
extern void MTLVertexBufferLayoutDescriptor_setStride(MTLVertexBufferLayoutDescriptor * self, uint64_t val);
extern uint64_t MTLVertexBufferLayoutDescriptor_stride(MTLVertexBufferLayoutDescriptor * self);
extern void MTLVertexBufferLayoutDescriptor_setStepFunction(MTLVertexBufferLayoutDescriptor * self, MTLVertexStepFunction val);
extern MTLVertexStepFunction MTLVertexBufferLayoutDescriptor_stepFunction(MTLVertexBufferLayoutDescriptor * self);
extern void MTLVertexBufferLayoutDescriptor_setStepRate(MTLVertexBufferLayoutDescriptor * self, uint64_t val);
extern uint64_t MTLVertexBufferLayoutDescriptor_stepRate(MTLVertexBufferLayoutDescriptor * self);
extern MTLVertexBufferLayoutDescriptor * MTLVertexBufferLayoutDescriptorArray_objectAtIndexedSubscript(MTLVertexBufferLayoutDescriptorArray * self, uint64_t index);
extern void MTLVertexBufferLayoutDescriptorArray_setObject_atIndexedSubscript(MTLVertexBufferLayoutDescriptorArray * self, MTLVertexBufferLayoutDescriptor * bufferDesc, uint64_t index);
extern void MTLVertexAttributeDescriptor_setFormat(MTLVertexAttributeDescriptor * self, MTLVertexFormat val);
extern MTLVertexFormat MTLVertexAttributeDescriptor_format(MTLVertexAttributeDescriptor * self);
extern void MTLVertexAttributeDescriptor_setOffset(MTLVertexAttributeDescriptor * self, uint64_t val);
extern uint64_t MTLVertexAttributeDescriptor_offset(MTLVertexAttributeDescriptor * self);
extern void MTLVertexAttributeDescriptor_setBufferIndex(MTLVertexAttributeDescriptor * self, uint64_t val);
extern uint64_t MTLVertexAttributeDescriptor_bufferIndex(MTLVertexAttributeDescriptor * self);
extern MTLVertexAttributeDescriptor * MTLVertexAttributeDescriptorArray_objectAtIndexedSubscript(MTLVertexAttributeDescriptorArray * self, uint64_t index);
extern void MTLVertexAttributeDescriptorArray_setObject_atIndexedSubscript(MTLVertexAttributeDescriptorArray * self, MTLVertexAttributeDescriptor * attributeDesc, uint64_t index);
extern MTLVertexDescriptor * MTLVertexDescriptor_vertexDescriptor(void);
extern MTLVertexBufferLayoutDescriptorArray * MTLVertexDescriptor_layouts(MTLVertexDescriptor * self);
extern MTLVertexAttributeDescriptorArray * MTLVertexDescriptor_attributes(MTLVertexDescriptor * self);
extern void MTKView_setDevice(MTKView * self, MTLDevice* val);
extern MTLDevice* MTKView_device(MTKView * self);
extern CAMetalDrawable* MTKView_currentDrawable(MTKView * self);
extern void MTKView_setColorPixelFormat(MTKView * self, MTLPixelFormat val);
extern MTLPixelFormat MTKView_colorPixelFormat(MTKView * self);
extern void MTKView_setDepthStencilPixelFormat(MTKView * self, MTLPixelFormat val);
extern MTLPixelFormat MTKView_depthStencilPixelFormat(MTKView * self);
extern void MTKView_setSampleCount(MTKView * self, uint64_t val);
extern uint64_t MTKView_sampleCount(MTKView * self);
extern MTLRenderPassDescriptor * MTKView_currentRenderPassDescriptor(MTKView * self);
extern void MTKView_setPreferredFramesPerSecond(MTKView * self, int64_t val);
extern int64_t MTKView_preferredFramesPerSecond(MTKView * self);
extern void MTKView_setAutoResizeDrawable(MTKView * self, bool val);
extern bool MTKView_autoResizeDrawable(MTKView * self);
extern void* oc_alloc(void* cls);
extern void* oc_alloc_init(void* cls);
extern void oc_release(void* obj);
