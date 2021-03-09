#-------------------------------------------------------------------------------
#   gen_c.py
#
#   Take the output of gen_ir.py and generate a C API.
#-------------------------------------------------------------------------------
import sys, json

type_map = {
    'CGFloat':    'double',
    'NSUInteger': 'uint64_t',
    'NSInteger':  'int64_t',
    'BOOL':       'bool',
}

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

def c_type(c_prefix, type):
    if type in type_map:
        type = type_map[type]
    type = type.replace('_Nullable', '')
    type = type.replace('_Nonnull', '')
    type = type.replace('__kindof', '')
    type = type.strip()
    if type.startswith('id<'):
        type = type[3:-1]
        type = type + ' *'
    if type.strip('* ') in api_types:
        type = c_prefix + type
    return type

def classify_return_type(type):
    if type in api_types:
        api_type = api_types[type]
        if api_type == 'enum':
            return 'simple'
        elif api_type == 'struct':
            return 'struct'
    elif type.endswith('*'):
        return 'simple'
    elif type in [ 'void', 'bool', 'int8_t', 'int16_t', 'int32_t', 'int64_t', 'uint8_t', 'uint16_t', 'uint32_t', 'uint64_t']:
        return 'simple'
    elif type in [ 'float', 'double' ]:
        return 'float'
    else:
        print(f"don't know how to classify result type '{type}")
        return None

def write_header():
    l('#include <stdint.h>')
    l("#include <objc/objc-runtime.h>")
    l('')

def write_typedefs(ir, c_prefix):
    for decl in ir['decls']:
        if decl['kind'] in ['objc_interface', 'objc_protocol']:
            typename = f"{c_prefix}{decl['name']}"
            l(f"typedef struct {typename} {{ }} {typename};")
    l('')

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

def write_enums(ir, c_prefix):
    for decl in ir['decls']:
        if decl['kind'] == 'enum':
            # FIXME: uses a clang extension to specific enum underlying type
            l(f"typedef enum {c_type(c_prefix, decl['name'])}: {c_type(c_prefix, decl['type']['type'])} {{")
            for item in decl['items']:
                if 'expr' in item:
                    l(f"    {item['name']} = {expr_as_string(item['expr'])},")
                else:
                    l(f"    {item['name']},")
            l(f"}} {c_type(c_prefix, decl['name'])};")
            l('')

def write_structs(ir, c_prefix):
    for decl in ir['decls']:
        if decl['kind'] == 'struct':
            struct_type = c_type(c_prefix, decl['name'])
            l(f"typedef struct {struct_type} {{")
            for item in decl['items']:
                l(f"    {c_type(c_prefix, item['type']['type'])} {item['name']};")
            l(f"}} {struct_type};")
            l('')

def c_func_name(c_prefix, objc_class_name, objc_method_name):
    name = f"{c_prefix}{objc_class_name}_{objc_method_name}"
    name = name.replace(':', '_').rstrip('_')
    return name

def cfunc_args_as_string(c_prefix, self_type, args_decl):
    args = []
    if self_type is not None:
        args.append(f"{c_type(c_prefix, self_type)} * self")
    for arg_decl in args_decl:
        args.append(f"{c_type(c_prefix, arg_decl['type']['type'])} {arg_decl['name']}")
    return ', '.join(args)

def objcfunc_args_as_string(c_prefix, self_type, class_name, method_name, args_decl):
    args = []
    if self_type is not None:
        args.append("(void*)self")
    else:
        # FIXME: use cached class 
        args.append(f'(void*)objc_getClass("{class_name}")')
    # FIXME: use a cached selector
    args.append(f'(void*)sel_getUid("{method_name}")')
    for arg_decl in args_decl:
        args.append(arg_decl['name'])
    return ', '.join(args)

def objcfunc_prototype_as_string(c_prefix, self_type, args_decl, return_type):
    args = [ 'void*', 'void*' ] # id, SEL
    for arg_decl in args_decl:
        args.append(f"{c_type(c_prefix, arg_decl['type']['type'])}")
    args_str = ','.join(args)
    proto_str = f"({return_type}(*)({args_str}))"
    return proto_str

def write_funcs(ir, c_prefix):
    for class_decl in ir['decls']:
        if class_decl['kind'] in ['objc_interface', 'objc_protocol']:
            class_name = class_decl['name']
            for method_decl in class_decl['items']:
                if method_decl['kind'] == 'objc_method':
                    func_name = c_func_name(c_prefix, class_name, method_decl['name'])
                    return_type = c_type(c_prefix, method_decl['return_type']['type'])
                    # special case 'instancetype'
                    if return_type == 'instancetype':
                        return_type = f"{c_prefix}{class_name}*"
                    if method_decl['is_instance_method']:
                        self_type = class_name
                    else:
                        self_type = None
                    return_type_class = classify_return_type(return_type)
                    if return_type_class == 'simple':
                        msgsend_func = 'objc_msgSend'
                    elif return_type_class == 'float':
                        msgsend_func = 'objc_msgSend_fpret'
                    elif return_type_class == 'struct':
                        msgsend_func = 'objc_msgSend_stret'
                    else:
                        msgsend_func = 'FIXME'
                    c_args_str = cfunc_args_as_string(c_prefix, self_type, method_decl['args'])
                    objc_proto_str = objcfunc_prototype_as_string(c_prefix, self_type, method_decl['args'], return_type)
                    objc_args_str = objcfunc_args_as_string(c_prefix, self_type, class_name, method_decl['name'], method_decl['args'])
                    l(f"static {return_type} {func_name}({c_args_str}) {{")
                    l(f"    return ({objc_proto_str}{msgsend_func})({objc_args_str});")
                    l("}")

def gen(ir, c_prefix, output_path):
    reset_globals()
    extract_api_types(ir)
    write_header()
    write_typedefs(ir, c_prefix)
    write_enums(ir, c_prefix)
    write_structs(ir, c_prefix)
    write_funcs(ir, c_prefix)
    with open(output_path, 'w', newline='\n') as f_outp:
        f_outp.write(out_lines)

#-- main -----------------------------------------------------------------------
if len(sys.argv) != 3:
    sys.exit(f"expected args: [ir.json] [output.h], where:\n\n  ir.json: result of gen_ir.py\n  output.h: name of generated C header file\n")
ir_path = sys.argv[1]
output_path = sys.argv[2]
if ir_path == output_path:
    sys.exit("input and output filename are identical")

with open(ir_path, "r") as fp:
    ir_json = json.load(fp)
gen(ir_json, ir_json['c_prefix'], output_path)
