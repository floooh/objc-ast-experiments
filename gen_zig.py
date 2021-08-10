#-------------------------------------------------------------------------------
#   gen_zig.py
#
#   Take the output of gen_ir.py and generate a Zig module.
#
#   NOTE: Currently the Zig module depends on the C header and source file
#   because of (ABI?) problems calling the objc_msgSend stubs from Zig.
#-------------------------------------------------------------------------------
import sys, json

type_map = {}
api_types = {}
out_lines = ''

def reset_globals():
    global out_lines
    global api_types
    out_lines = ''
    api_types = {}

def extract_api_types(ir):
    global api_types
    for decl in ir['decls']:
        api_types[decl['name']] = decl['kind']

def l(s):
    global out_lines
    out_lines += s + '\n'

def zig_type(typename):
    # strip any attributes we encountered
    attrs = [
        '_Nullable',
        '_Nonnull',
        '_Null_unspecified',
        '__kindof',
        'NS_RETURNS_RETAINED',
        'DISPATCH_RETURNS_RETAINED'
    ]
    # sometimes return type annoations have types inside parens, remove this stuff
    start_paren = typename.find('(')
    end_paren = typename.find(')')
    if start_paren != -1 and end_paren != -1:
        typename = typename[0:start_paren] + typename[end_paren+1:]
    for attr in attrs:
        typename = typename.replace(attr, '')
    typename = typename.strip()
    if typename in type_map:
        typename = type_map[typename]
    if typename.startswith('id<'):
        typename = typename[3:-1]
    if typename.strip(' *') in api_types:
        if api_types[typename.strip(' *')] == 'objc_class':
            typename = '*'+typename.strip(' *')
    return typename

def zig_arg_name(name):
    if name == 'error':
        return 'err'
    else:
        return name

def expr_as_string(expr):
    kind = expr['kind']
    if kind in ['cast', 'constexpr']:
        # 'skip' casts and constexpr
        return expr_as_string(expr['inner'])
    elif kind == 'integer_literal':
        return f"{expr['value']}"
    elif kind == 'binary_operator':
        left = expr['left']
        op = expr['opcode']
        right = expr['right']
        return f"{expr_as_string(left)}{op}{expr_as_string(right)}"
    elif kind == 'declref':
        return f"{expr['declref']}"
    else:
        return '???'

def zigfunc_args_as_string(self_type, args_decl):
    args = []
    if self_type is not None:
        args.append(f"self:{zig_type(self_type)}")
    for arg_decl in args_decl:
        args.append(f"{zig_arg_name(arg_decl['name'])}:{zig_type(arg_decl['type']['type'])}")
    if len(args) == 0:
        return ''
    else:
        return ', '.join(args)

# def classify_return_type(type):
#     if type in api_types:
#         api_type = api_types[type]
#         if api_type == 'enum':
#             return 'simple'
#         elif api_type == 'struct':
#             return 'struct'
#     elif type.startswith('*') or type.startswith('[*c]'):
#         return 'simple'
#     elif type in [ 'void', 'bool', 'i8', 'i16', 'i32', 'i64', 'u8', 'u16', 'u32', 'u64']:
#         return 'simple'
#     elif type in [ 'f32', 'f64' ]:
#         return 'float'
#     else:
#         print(f"don't know how to classify result type '{type}'")
#         return None

def write_head():
    l("// machine generated, don't edit")
    l('const c = @cImport(@cInclude("macos.h"));')

def write_enums(ir):
    for decl in ir['decls']:
        if decl['kind'] == 'enum':
            enum_type = zig_type(decl['type']['type'])
            l(f"pub const {decl['name']} = {enum_type};")
            for index,item in enumerate(decl['items']):
                if 'expr' in item:
                    l(f"pub const {item['name']}: {enum_type} = {expr_as_string(item['expr'])};")
                else:
                    l(f"pub const {item['name']}: {enum_type} = {index};")

def write_structs(ir):
    for decl in ir['decls']:
        if decl['kind'] == 'struct':
            l(f"pub const {decl['name']} = c.{decl['name']};")

def write_extern_cfuncs(ir):
    for decl in ir['decls']:
        if decl['kind'] == 'func':
            func_name = decl['name']
            l(f"pub const {func_name} = c.{func_name};")

def objcfunc_args_as_string(self_type, class_name, method_name, args_decl):
    args = []
    if self_type is not None:
        args.append('self')
    for arg_decl in args_decl:
        args.append(zig_arg_name(arg_decl['name']))
    return ', '.join(args)

# def objcfunc_prototype_as_string(self_type, args_decl, return_type):
#     if self_type is not None:
#         args = [ f'*{self_type}', '*c_void' ] # id, SEL
#     else:
#         args = [ '*c_void', '*c_void' ]
#     for arg_decl in args_decl:
#         args.append(f"{zig_type(arg_decl['type']['type'])}")
#     args_str = ','.join(args)
#     proto_str = f"fn({args_str}) callconv(.C) {return_type}"
#     return proto_str

def write_objc_classes(ir):
    for class_decl in ir['decls']:
        if class_decl['kind'] == 'objc_class':
            class_name = class_decl['name']
            l(f"pub const {class_name} = c.{class_name};")
            for method_decl in class_decl['items']:
                if method_decl['kind'] == 'objc_method':
                    c_func_name = f"{class_name}_{method_decl['name'].replace(':','_').rstrip('_')}"
                    zig_func_name = c_func_name
                    return_type = zig_type(method_decl['return_type']['type'])
                    # special case 'instancetype'
                    if return_type == 'instancetype':
                        return_type = f"*{class_name}"
                    if method_decl['is_instance_method']:
                        self_type = class_name
                    else:
                        self_type = None
                    # return_type_class = classify_return_type(return_type)
                    # if return_type_class == 'simple':
                    #     msgsend_func = 'objc_msgSend'
                    # elif return_type_class == 'float':
                    #     msgsend_func = 'objc_msgSend_fpret'
                    # elif return_type_class == 'struct':
                    #     msgsend_func = 'objc_msgSend_stret'
                    # else:
                    #     msgsend_func = 'FIXME'
                    arg_str = zigfunc_args_as_string(self_type, method_decl['args'])
                    objc_args_str = objcfunc_args_as_string(self_type, class_name, method_decl['name'], method_decl['args'])
                    l(f"pub fn {zig_func_name}({arg_str}) {return_type} {{")
                    l(f"    {'' if return_type=='void' else 'return '}c.{c_func_name}({objc_args_str});")
                    l("}")

def gen(ir, output_path):
    global type_map
    reset_globals()
    type_map = ir['language_options']['zig']['typemap']
    extract_api_types(ir)
    write_head()
    write_enums(ir)
    write_structs(ir)
    write_extern_cfuncs(ir)
    write_objc_classes(ir)
    with open(output_path, 'w', newline='\n') as f_outp:
        f_outp.write(out_lines)

#-- main -----------------------------------------------------------------------
if len(sys.argv) != 3:
    sys.exit('''expected args: [ir.json] [output.h], where:\n\n
    ir.json: result of gen_ir.py\n
    output.h: name of generated Zig module file\n''')
ir_path = sys.argv[1]
output_path = sys.argv[2]
if ir_path == output_path:
    sys.exit("input and output filename are identical")

with open(ir_path, "r") as fp:
    ir_json = json.load(fp)
gen(ir_json, output_path)
