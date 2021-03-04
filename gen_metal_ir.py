import json
import gen_ir, gen_c

# FIXME: those API filter definitions should go into separate JSON files
metal_filter = {
    'MTLRegion': [ 'ALL' ],
    'MTLDevice': [
        'newSamplerStateWithDescriptor:',
        'newCommandQueue',
        'newBufferWithLength:options:',
        'newBufferWithBytes:length:options:',
        'newTextureWithDescriptor:',
        'newLibraryWithSource:options:error:',
        'newLibraryWithData:error:',
        'newRenderPipelineStateWithDescriptor:error:',
        'newDepthStencilStateWithDescriptor:',
    ],
    'MTLCommandQueue': [
        'commandBufferWithUnretainedReferences',
    ],
    'MTLCommandBuffer': [
        'renderCommandEncoderWithDescriptor:',
        'presentDrawable:',
        # 'addCompletionHandler' FIXME: block pointer
        'commit',
    ],
    'MTLRenderCommandEncoder': [
        'setVertexBuffer:offset:atIndex:',
        'setFragmentBuffer:offset:atIndex:',
        'setViewport:',
        'setScissorRect:',
        'setBlendColorRed:green:blue:alpha:',
        'setCullMode:',
        'setFrontFacingWinding:',
        'setStencilReferenceValue:',
        'setDepthBias:slopeScale:clamp:',
        'setRenderPipelineState:',
        'setDepthStencilState:',
        'setVertexTexture:atIndex:',
        'setVertexSamplerState:atIndex:',
        'setFragmentTexture:atIndex:',
        'setFragmentSamplerState:atIndex:',
        'setVertexBufferOffset:atIndex:',
        'setFragmentBufferOffset:atIndex:',
        'drawIndexedPrimitives:indexCount:indexType:indexBuffer:indexBufferOffset:instanceCount:',
        'drawPrimitives:vertexStart:vertexCount:instanceCount:',
    ],
    'MTLBuffer': [
        'didModifyRange:'
    ],
    'MTLTexture': [
        'replaceRegion:mipmapLevel:slice:withBytes:bytesPerRow:bytesPerImage:',

    ],
    'MTLSamplerState': [ ],
    'MTLTextureDescriptor': [
        'setTextureType:',
        'setPixelFormat:',
        'setWidth:',
        'setHeight:',
        'setDepth:',
        'setMipmapLevelCount:',
        'setArrayLength:',
        'setUsage:',
        'setCpuCacheMode:',
        'setResourceOptions:',
        'setStorageMode:',
        'setSampleCount:',

    ],
    'MTLLibrary': [
        'newFunctionWithName:'
    ],
    'MTLFunction': [ ],
    'MTLVertexDescriptor': [
        'vertexDescriptor',
        'attributes',
        'layouts',
    ],
    'MTLRenderPipelineDescriptor': [
        'setVertexDescriptor:',
        'setVertexFunction:',
        'setFragmentFunction:',
        'setSampleCount:',
        'setAlphaToCoverageEnabled:',
        'setAlphaToOneEnabled:',
        'setRasterizationEnabled:',
        'setDepthAttachmentPixelFormat:',
        'setStencilAttachmentPixelFormat:',
        'colorAttachments',
    ],
    'MTLRenderPipelineState': [ ],
    'MTLDepthStencilDescriptor': [
        'setDepthCompareFunction:',
        'setDepthWriteEnabled:',
        'setBackFaceStencil:',
        'setFrontFaceStencil:',
    ],
    'MTLStencilDescriptor': [
        'setStencilFailureOperation:',
        'setDepthFailureOperation:',
        'setDepthStencilPassOperation:',
        'setStencilCompareFunction:',
        'setReadMask:',
        'setWriteMask:',
    ],
    'MTLDepthStencilState': [ 'ALL' ],
    'MTLRenderPassDescriptor': [
        'colorAttachments',
        'depthAttachment',
        'stencilAttachment',
    ],
    'MTLDrawable': [ ],
    'MTLViewport': [ 'ALL' ],
    'MTLScissorRect': [ 'ALL' ],
    'MTLCPUCacheMode': [ 'ALL' ],
    'MTLStorageMode': [ 'ALL' ],
    'MTLHazardTrackingMode': [ 'ALL' ],
    'MTLResourceOptions': [ 'ALL' ],
    'MTLLoadAction': [
        'MTLLoadActionClear',
        'MTLLoadActionLoad',
        'MTLLoadActionDontCare'
    ],
    'MTLVertexStepFunction': [ 'ALL' ],
    'MTLVertexFormat': [
        'MTLVertexFormatFloat',
        'MTLVertexFormatFloat2',
        'MTLVertexFormatFloat3',
        'MTLVertexFormatFloat4',
        'MTLVertexFormatChar4',
        'MTLVertexFormatChar4Normalized',
        'MTLVertexFormatUChar4',
        'MTLVertexFormatUChar4Normalized',
        'MTLVertexFormatShort2',
        'MTLVertexFormatShort2Normalized',
        'MTLVertexFormatUShort2Normalized',
        'MTLVertexFormatShort4',
        'MTLVertexFormatShort4Normalized',
        'MTLVertexFormatUShort4Normalized',
        'MTLVertexFormatUInt1010102Normalized',
    ],
    'MTLPrimitiveType': [ 'ALL' ],
    'MTLPixelFormat': [ 'ALL' ],
    'MTLColorWriteMask': [ 'ALL' ],
    'MTLBlendOperation': [ 'ALL' ],
    'MTLBlendFactor': [ 'ALL' ],
    'MTLCompareFunction': [ 'ALL' ],
    'MTLStencilOperation': [ 'ALL' ],
    'MTLCullMode': [ 'ALL' ],
    'MTLWinding': [ 'ALL' ],
    'MTLIndexType': [ 'ALL' ],
    'MTLTextureType': [ 'ALL' ],
    'MTLSamplerAddressMode': [ 'ALL' ],
    'MTLSamplerBorderColor': [ 'ALL' ],
    'MTLSamplerMinMagFilter': [ 'ALL' ],
    'MTLSamplerMinFilter': [ 'ALL' ],
    'MTLSamplerDescriptor': [ 'ALL' ],
}

#--- main ----------------------------------------------------------------------
ir = gen_ir.gen('metal.m', metal_filter)
with open('metal.json', 'w') as f:
    json.dump(obj=ir, fp=f, indent=4)
