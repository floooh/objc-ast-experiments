#-------------------------------------------------------------------------------
#   gen_c.py
#
#   Take the output of gen_ir.py and generate a C API.
#-------------------------------------------------------------------------------

type_map = {
    'NSUInteger': 'uint64_t',
    'NSInteger':  'int64_t',
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
    type = type.strip()
    if type.startswith('id<'):
        type = type[3:-1]
        type = type + ' *'
    if type.strip('* ') in api_types:
        type = c_prefix + type
    return type

def write_header():
    l('#include <stdint.h>')
    l('')

def write_typedefs(ir, c_prefix):
    for decl in ir['decls']:
        if decl['kind'] in ['objc_interface', 'objc_protocol']:
            l(f"typedef void* {c_prefix}{decl['name']};")
    l('')

def expr_str(expr):
    kind = expr['kind']
    if kind in ['cast', 'constexpr']:
        # 'skip' casts and constexpr
        return expr_str(expr['inner'])
    elif kind == 'integer_literal':
        return f"{expr['value']}"
    elif kind == 'binary_operator':
        left = expr['left']
        op = expr['opcode']
        right = expr['right']
        return f"{expr_str(left)}{op}{expr_str(right)}"
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
                l(f"    {item['name']} = {expr_str(item['expr'])},")
            l(f"}} {c_type(c_prefix, decl['name'])};")
            l('')

def c_func_name(c_prefix, objc_class_name, objc_method_name):
    name = f"{c_prefix}{objc_class_name}_{objc_method_name}"
    name = name.replace(':', '_').rstrip('_')
    return name

def args_str(c_prefix, self_type, args_decl):
    args = []
    if self_type is not None:
        args.append(f"{c_type(c_prefix, self_type)} * self")
    for arg_decl in args_decl:
        args.append(f"{c_type(c_prefix, arg_decl['type']['type'])} {arg_decl['name']}")
    return ', '.join(args)

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
                    l(f"static {return_type} {func_name}({args_str(c_prefix, self_type, method_decl['args'])}) {{")
                    l("}")

def gen(ir, c_prefix, output_path):
    reset_globals()
    extract_api_types(ir)
    write_header()
    write_typedefs(ir, c_prefix)
    write_enums(ir, c_prefix)
    write_funcs(ir, c_prefix)
    with open(output_path, 'w', newline='\n') as f_outp:
        f_outp.write(out_lines)
