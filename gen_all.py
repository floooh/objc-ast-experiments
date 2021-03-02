import json
import gen_ir

metal_filter = [
    'MTLPrimitiveType',
    'MTLIndexType',
    'MTLCullMode',
    'MTLWinding',
    'MTLRegion',
    'MTLDevice',
    'MTLCommandQueue',
    'MTLCommandBuffer',
    'MTLRenderCommandEncoder',
    'MTLBuffer',
    'MTLTexture',
    'MTLSamplerState',
    'MTLTextureDescriptor',
    'MTLLibrary',
    'MTLFunction',
    'MTLVertexDescriptor',
    'MTLRenderPipelineDescriptor',
    'MTLRenderPipelineState',
    'MTLDepthStencilDescriptor',
    'MTLStencilDescriptor',
    'MTLDepthStencilState',
    'MTLRenderPassDescriptor',
    'MTLDrawable',
    'MTLViewport',
    'MTLScissorRect',
    'MTLLoadAction',
    'MTLResourceOptions',
    'MTLVertexStepFunction',
    'MTLVertexFormat',
    'MTLPrimitiveType',
    'MTLPixelFormat',
    'MTLColorWriteMask',
    'MTLBlendOperation',
    'MTLBlendFactor',
    'MTLCompareFunction',
    'MTLStencilOperation',
    'MTLCullMode',
    'MTLWinding',
    'MTLIndexType',
    'MTLTextureType',
    'MTLSamplerAddressMode',
    'MTLSamplerBorderColor',
    'MTLSamplerMinMagFilter',
    'MTLSamplerMinFilter',
    'MTLSamplerDescriptor',
]

def extract_items(decl):
    items = []
    for item in decl['inner']:
        if 'name' in item:
            items.append(item)
    return items

def print_enum_decl(decl):
    items = extract_items(decl)
    if items:
        print(f"ENUM {decl['name']}")
        for item in items:
            item_kind = item['kind']
            item_name = item['name']
            if item_kind == 'EnumConstantDecl':
                print(f"  {item_name}")
            else:
                print(f"  ??? {item_name}")
        print("")

def print_interface_or_protocol_decl(decl):
    items = extract_items(decl)
    if items:
        if decl['kind'] == 'ObjCInterfaceDecl':
            print(f"INTERFACE {decl['name']}")
        elif decl['kind'] == 'ObjCProtocolDecl':
            print(f"PROTOCOL {decl['name']}")
        for item in items:
            item_kind = item['kind']
            item_name = item['name']
            if item_kind == 'ObjCMethodDecl':
                print(f"  METHOD {item_name}")
                print(f"     RETURN {item['returnType']['qualType']}")
                if 'inner' in item:
                    for arg in item['inner']:
                        if arg['kind'] == 'ParmVarDecl':
                            print(f"     ARG {arg['type']['qualType']} {arg['name']}")
            elif item_kind == 'ObjCPropertyDecl':
                print(f"  PROPERTY {item_name}")
            else:
                print(f"  ??? {item_name}")
        print("")

#--- main ----------------------------------------------------------------------

ir = gen_ir.gen('metal.m', metal_filter)
print(json.dumps(ir, indent=4))
