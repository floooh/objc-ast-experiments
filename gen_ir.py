#-------------------------------------------------------------------------------
#   gen_ir.py [export_def.json] [output.json]
#
#   Generate a high-level intermediate representation of ObjC and C types
#   by parsing the output of 'clang -ast-dump=json'
#-------------------------------------------------------------------------------

import json, subprocess, sys, tempfile

def filter_item(item_name, item_filter):
    if len(item_filter) == 0:
        return False
    elif item_filter[0] == 'ALL':
        return True
    else:
        return item_name in item_filter

def find_decl_by_id(decl_id, all_decls):
    for decl in all_decls:
        if decl['id'] == decl_id:
            return decl
    return None

# recursively resolve a typedef'ed struct
def find_bottom_type_decl(decl, all_decls):
    # top-level decl is of kind 'TypedefDecl'
    decl = decl['inner'][0]
    # fist dig into the TypedefType child nodes...
    while decl['kind'] == "TypedefType":
        decl = decl['inner'][0]
    # is it a simple builtin type?
    if decl['kind'] == 'BuiltinType':
        return decl
    # otherwise there should be an ElaboratedType here
    if not decl['kind'] == 'ElaboratedType':
        return None
    decl = decl['inner'][0]
    if not decl['kind'] == 'RecordType':
        return None
    struct_id = decl['decl']['id']
    struct_decl = find_decl_by_id(struct_id, all_decls)
    return struct_decl

def parse_type(decl):
    outp = {}
    outp['type'] = decl['qualType']
    if 'desugaredQualType' in decl:
        outp['desugared'] = decl['desugaredQualType']
    return outp

def parse_expr(decls):
    outp = {}
    for decl in decls:
        kind = decl['kind']
        if kind in ['AvailabilityAttr']:
            continue
        elif kind == 'ConstantExpr':
            outp['kind'] = 'constexpr'
            outp['inner'] = parse_expr(decl['inner'])
            break
        elif kind == 'ParenExpr':
            outp['kind'] = 'parens'
            outp['inner'] = parse_expr(decl['inner'])
            break
        elif kind == 'ImplicitCastExpr':
            outp['kind'] = 'cast'
            outp['cast_kind'] = decl['castKind']
            outp['cast_type'] = parse_type(decl['type'])
            outp['inner'] = parse_expr(decl['inner'])
            break
        elif kind == 'BinaryOperator':
            outp['kind'] = 'binary_operator'
            outp['opcode'] = decl['opcode']
            outp['left'] = parse_expr([decl['inner'][0]])
            outp['right'] = parse_expr([decl['inner'][1]])
            break
        elif kind == 'IntegerLiteral':
            outp['kind'] = 'integer_literal'
            outp['value'] = decl['value']
            break
        elif kind == 'DeclRefExpr':
            outp['kind'] = 'declref'
            outp['declref'] = decl['referencedDecl']['name']
            break
        else:
            sys.exit(f"ERROR: unknown expression kind: {kind}")
    if len(outp) > 0:
        return outp
    else:
        return None

def parse_enum(decl, item_filter):
    outp = {}
    outp['kind'] = 'enum'
    outp['name'] = decl['name']
    outp['type'] = parse_type(decl['fixedUnderlyingType'])
    outp['items'] = []
    has_items = False
    for item_decl in decl['inner']:
        if item_decl['kind'] == 'EnumConstantDecl':
            has_items = True
            item = {}
            item['name'] = item_decl['name']
            if 'inner' in item_decl:
                expr = parse_expr(item_decl['inner'])
                if expr is not None:
                    item['expr'] = parse_expr(item_decl['inner'])
            outp['items'].append(item)
    # don't return forward declarations
    if has_items:
        return outp
    else:
        return None

def parse_struct(decl):
    if 'inner' not in decl:
        return None
    outp = {}
    outp['kind'] = 'struct'
    # might be an anonymous struct
    if 'name' in decl:
        outp['name'] = decl['name']
    outp['items'] = []
    for item_decl in decl['inner']:
        kind = item_decl['kind']
        # ignore certain node types
        if kind in ['ObjCBoxableAttr']:
            continue
        # ...anything else is a hard error
        if kind != 'FieldDecl':
            sys.exit(f"ERROR: struct declarations must only contain simple fields (in {decl['name']}: kind {kind})")
        item = {}
        item['name'] = item_decl['name']
        item['type'] = parse_type(item_decl['type'])
        outp['items'].append(item)
    return outp

def parse_function(decl):
    outp = {}
    outp['kind'] = 'func'
    outp['name'] = decl['name']
    outp['return_type'] = parse_type(decl['type'])
    outp['args'] = []
    if 'inner' in decl:
        for arg in decl['inner']:
            if arg['kind'] == 'ParmVarDecl':
                if not 'name' in arg:
                    # ignore function definitions with unnamed args, these 
                    # are most likely forward declarations
                    return None
                outp_arg = {}
                outp_arg['name'] = arg['name']
                outp_arg['type'] = parse_type(arg['type'])
                outp['args'].append(outp_arg)
    return outp

def parse_typedef(decl, all_decls):
    outp = {}
    name = decl['name']

    # shortcut if this is a "ObjCObjectPointerType", just create a void* typedef
    if decl['inner'][0]['kind'] == 'ObjCObjectPointerType':
        outp['name'] = name
        outp['kind'] = 'typedef'
        outp['type'] = { 'type': 'void*' }
    else:
        # otherwise try to resolve the typedef "properly"
        decl = find_bottom_type_decl(decl, all_decls)
        if decl is None:
            return None
        elif decl['kind'] == 'BuiltinType':
            # a typedef'ed builtin type
            outp['name'] = name
            outp['kind'] = 'typedef'
            outp['type'] = parse_type(decl['type'])
        elif decl['kind'] == 'RecordDecl':
            # a typedef'ed struct
            outp = parse_struct(decl)
            if outp is None:
                return None
            outp['name'] = name
    return outp

def append_unique_named_item(new_item, items):
    for item in items:
        if item['name'] == new_item['name']:
            return
    items.append(new_item)

def property_has_getter(decl):
    if 'readonly' in decl and decl['readonly']:
        return True
    elif 'readwrite' in decl and decl['readwrite']:
        return True
    else:
        return False

def property_has_setter(decl):
    return 'readwrite' in decl and decl['readwrite']
    
def parse_objc_methods_and_properties(decls, item_filter):
    outp = []
    has_items = False
    for decl in decls:
        kind = decl['kind']
        if kind == 'ObjCMethodDecl':
            outp_item = {}
            has_items = True
            if filter_item(decl['name'], item_filter):
                outp_item['name'] = decl['name']
                outp_item['kind'] = 'objc_method'
                outp_item['is_instance_method'] = decl['instance']
                outp_item['return_type'] = parse_type(decl['returnType'])
                outp_item['args'] = []
                if 'inner' in decl:
                    for arg in decl['inner']:
                        if arg['kind'] == 'ParmVarDecl':
                            outp_arg = {}
                            outp_arg['name'] = arg['name']
                            outp_arg['type'] = parse_type(arg['type'])
                            outp_item['args'].append(outp_arg)
                # 'explicit' methods may overlap with generated property methods
                append_unique_named_item(outp_item, outp)
        elif kind == 'ObjCPropertyDecl':
            if filter_item(decl['name'], item_filter):
                if property_has_setter(decl):
                    has_items = True
                    setter_item = {
                        'name': 'set' + decl['name'][:1].upper() + decl['name'][1:] + ':',
                        'kind': 'objc_method',
                        'is_instance_method': not ('class' in decl and decl['class']),
                        'return_type': {
                            'type': 'void'
                        },
                        'args': [
                            { 'name': 'val', 'type': parse_type(decl['type']) }
                        ]
                    }
                    append_unique_named_item(setter_item, outp)

                if property_has_getter(decl):
                    has_items = True
                    getter_item = {
                        'name': decl['name'],
                        'kind': 'objc_method',
                        'is_instance_method': not ('class' in decl and decl['class']),
                        'return_type': parse_type(decl['type']),
                        'args': [ ]
                    }
                    # the getter name may be overriden
                    if 'getter' in decl:
                        getter_item['name'] = decl['getter']['name']
                    append_unique_named_item(getter_item, outp)
    return has_items, outp

def parse_objc_interface_or_protocol_or_category(decl, item_filter):
    outp = {}
    outp['kind'] = 'objc_class'
    if decl['kind'] == 'ObjCCategoryDecl':
        outp['name'] = decl['interface']['name']
    else:
        outp['name'] = decl['name']
    has_items = False
    if 'inner' in decl:
        has_items, outp['items'] = parse_objc_methods_and_properties(decl['inner'], item_filter)
    if has_items:
        return outp
    else:
        return None

# FIXME: this can't parse anonymous enums currently (which are used in AudioToolbox.h)
def parse_decl(decl, filter, all_decls):
    if 'name' not in decl:
        return None 
    kind = decl['kind']
    # ObjCCatgories are class-extensions
    if kind == 'ObjCCategoryDecl':
        decl_name = decl['interface']['name']
    else:
        decl_name = decl['name']
    if decl_name not in filter:
        return None
    item_filter = filter[decl_name]
    if kind == 'RecordDecl':
        return parse_struct(decl)
    elif kind == 'FunctionDecl':
        return parse_function(decl)
    elif kind == 'TypedefDecl':
        return parse_typedef(decl, all_decls)
    elif kind == 'EnumDecl':
        return parse_enum(decl, item_filter)
    elif kind in ['ObjCInterfaceDecl', 'ObjCProtocolDecl', 'ObjCCategoryDecl']:
        return parse_objc_interface_or_protocol_or_category(decl, item_filter)

# associated Protocols, Interfaces and Categories are integrated into a single 'class'
# FIXME: this will become slow very quickly as number of filtered decls grows
def integrate_decl(all_decls, new_decl):
    new_decl_name = new_decl['name']
    for decl in all_decls:
        if decl['name'] == new_decl_name:
            for new_item in new_decl['items']:
                append_unique_named_item(new_item, decl['items'])
            break
    else:
        # this is a new item
        all_decls.append(new_decl)

def parse_decls(decls, filter):
    outp = []
    for decl in decls:
        outp_decl = parse_decl(decl, filter, decls)
        if outp_decl is not None:
            integrate_decl(outp, outp_decl)
    return outp

def clang(csrc_path):
    cmd = ['clang', '-Xclang', '-ast-dump=json', '-c']
    cmd.append(csrc_path)
    return subprocess.check_output(cmd)

def gen(csrc_path, filter):
    clang_ast = clang(csrc_path)
    json_ast = json.loads(clang_ast)
    outp = {}
    outp['decls'] = parse_decls(json_ast['inner'], filter)
    return outp

#-- main -----------------------------------------------------------------------
if len(sys.argv) != 3:
    sys.exit(f"expected args: [exports.json] [output.json], where:\n\n  export.json: input json file with requested API exports\n  output.json: output json file with intermediate representation\n")
exports_path = sys.argv[1]
output_path = sys.argv[2]
if exports_path == output_path:
    sys.exit("input and output filename are identical")

with open(exports_path, "r") as fp:
    exports_json = json.load(fp)

# generate ObjC source file with header includes
with tempfile.NamedTemporaryFile(mode="w", suffix='.m', delete=False) as fp:
    for header in exports_json['headers']['imports']:
        fp.write(f"#import <{header}>\n")
    for header in exports_json['headers']['includes']:
        fp.write(f"#include <{header}>\n")
    tempfile_name = fp.name

output_json = gen(csrc_path = tempfile_name, filter = exports_json['exports'])
output_json['language_options'] = exports_json['language_options']
with open(output_path, 'w') as fp:
    json.dump(obj = output_json, fp=fp, indent=4)

