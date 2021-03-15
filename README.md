This is an experiment to create language bindings to macOS 
Objective-C APIs by parsing the output of 'clang -ast-dump=json'.

To dampen the expectations a bit: it's useful for replacing specific
snippets of Objective-C code, but it's probably too brittle for creating 
a general solution for writing large macOS applications in 'random'
programming languages. Reason being that the output of 'clang -ast-dump'
exposes tons of small type definition details which need to be handled
specifically by the output parser. Supporting new system header declarations
is mostly a trial-and-error process where the parser balks at some of the
more complex type definitions in the macOS system headers, so adding
new declarations to be 'exported' is a trial-and-error process.

## How it works

Conversion happens in two steps: first a simplified 'intermediate representation'
of the detailed AST output is generated with the script ```gen_ir.py```. 

```gen_ir.py``` takes a JSON file as input which describes the declarations that
should be extracted from the system headers (C structs, enums and functions, 
ObjC interfaces, protocols and categories and their methods).

The output of ```gen_ir.py``` is another JSON file with a simplified descriptions
of the extracted declarations:

```
> python3 gen_ir.py hello.json hello_ir.json
```

Running ```gen_ir.py``` takes a little while (10..20 seconds) because it
needs to chew through a several hundred megabytes big JSON file (the output
of ```clang -ast-dump```), and there's also a couple of quadratic loops which
should be optimized.

The generated IR JSON file is then fed to a language-specific code-generation
script. For instance to generate a C header:

```
> python gen_c.py hello_ir.json test/hello.h
```

## Building the examples

The ```test``` subdirectory contains example programs which implement a
Cocoa+Metal *Hello Triangle*. ```hello.m``` is the 'reference' ObjC 
implementation, ```hello.c``` is the C version which uses the generated
header ```hello.h```.

To build the tests, run:

```
# build the ObjC reference:
> ./build_objc.sh
# build the C test:
> ./build_c.sh
```

This results in the executables ```hello_objc``` and ```hello_c```.
