import json

with open("ast.json", "r") as f:
    ast = json.load(f)

for decl in ast['inner']:
    if 'name' in decl:
        print(f"{decl['kind']} {decl['name']}\n")
    else:
        print(f"{decl['kind']}\n")