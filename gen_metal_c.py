import json
import gen_c

with open('metal.json', 'r') as f:
    ir = json.load(fp=f)
    gen_c.gen(ir, 'c_', 'metal_capi.h')