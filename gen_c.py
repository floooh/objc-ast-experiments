#-------------------------------------------------------------------------------
#   gen_c.py
#
#   Take the output of gen_ir.py and generate a C API.
#-------------------------------------------------------------------------------

type_map = {
    'NSUInteger': 'uint64_t',
    'NSInteger':  'int64_t',
}

out_lines = ''

def map_type(type):
    if type in type_map:
        return type_map[type]
    else:
        return type

def reset_globals():
    global out_lines
    out_lines = ''

def l(s):
    global out_lines
    out_lines += s + '\n'

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
            l(f"typedef enum: {map_type(decl['type']['type'])} {{")
            for item in decl['items']:
                l(f"    {item['name']} = {expr_str(item['expr'])},")
            l(f"}} {c_prefix}{decl['name']};")
            l('')

def write_funcs(ir, c_prefix):
    l('// FIXME: functions')

def gen(ir, c_prefix, output_path):
    reset_globals()
    write_header()
    write_typedefs(ir, c_prefix)
    write_enums(ir, c_prefix)
    write_funcs(ir, c_prefix)
    with open(output_path, 'w', newline='\n') as f_outp:
        f_outp.write(out_lines)
