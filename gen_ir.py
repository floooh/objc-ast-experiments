#-------------------------------------------------------------------------------
#   gen_ir.py
#
#   Generate a high-level intermediate representation of ObjC and C types
#   by parsing the output of 'clang -ast-dump=json'
#-------------------------------------------------------------------------------

import json, subprocess, sys

def parse_expr(decl):
    outp = {}
    kind = decl['kind']
    if kind == 'ConstantExpr':
        outp['kind'] = 'constexpr'
        outp['inner'] = parse_expr(decl['inner'][0])
    elif kind == 'ParenExpr':
        outp['kind'] = 'parens'
        outp['inner'] = parse_expr(decl['inner'][0])
    elif kind == 'ImplicitCastExpr':
        outp['kind'] = 'cast'
        outp['cast_kind'] = decl['castKind']
        outp['cast_type'] = decl['type']['qualType']
        outp['inner'] = parse_expr(decl['inner'][0])
    elif kind == 'BinaryOperator':
        outp['kind'] = 'binary_operator'
        outp['opcode'] = decl['opcode']
        outp['left'] = parse_expr(decl['inner'][0])
        outp['right'] = parse_expr(decl['inner'][1])
    elif kind == 'IntegerLiteral':
        outp['kind'] = 'integer_literal'
        outp['value'] = decl['value']
    elif kind == 'DeclRefExpr':
        outp['kind'] = 'declref'
        outp['declref'] = decl['referencedDecl']['name']
    else:
        sys.exit(f"unknown expression kind: {kind}")
    return outp

def parse_enum(decl):
    outp = {}
    outp['kind'] = 'enum'
    outp['name'] = decl['name']
    outp['type'] = decl['fixedUnderlyingType']['qualType']
    outp['items'] = []
    for item_decl in decl['inner']:
        if item_decl['kind'] == 'EnumConstantDecl':
            item = {}
            item['name'] = item_decl['name']
            if 'inner' in item_decl:
                expr = item_decl['inner'][0]
                item['expr'] = parse_expr(expr)
            outp['items'].append(item)
    # don't return forward declarations
    if len(outp['items']) > 0:
        return outp
    else:
        return None

def parse_decl(decl, filter):
    if 'name' not in decl:
        # FIXME: do we need to support anonymous enums?
        return None 
    if decl['name'] not in filter:
        return None
    kind = decl['kind']
    if kind == 'RecordDecl':
        # FIXME: a C struct
        return None
    elif kind == 'FunctionDecl':
        # FIXME: a C function
        return None
    elif kind == 'TypedefDecl':
        # FIXME: a C typedef
        return None
    elif kind == 'EnumDecl':
        return parse_enum(decl)
    elif kind == 'ObjCInterfaceDecl':
        return None
    elif kind == 'ObjCProtocolDecl':
        return None

def clang(csrc_path):
    cmd = ['clang', '-Xclang', '-ast-dump=json', '-c']
    cmd.append(csrc_path)
    return subprocess.check_output(cmd)

#-------------------------------------------------------------------------------
def gen(csrc_path, filter):
    clang_ast = clang(csrc_path)
    json_ast = json.loads(clang_ast)
    outp = {}
    outp['csrc'] = csrc_path
    outp['decls'] = []
    for decl in json_ast['inner']:
        outp_decl = parse_decl(decl, filter)
        if outp_decl is not None:
            outp['decls'].append(outp_decl)
    return outp
