pushd ..
python3 gen_ir.py  test.json test_ir.json
python3 gen_c.py test_ir.json test/hello_macos.h
popd
clang hello.c -o hello_c -framework Cocoa
clang hello.m -o hello_objc -framework Cocoa
