import json
import gen_c

with open('metal.json', 'r') as f:
    ir = json.load(fp=f)
    gen_c.gen(ir, '', 'metal_capi.h')