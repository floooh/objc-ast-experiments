#include "hello_macos.h"
#include <stdio.h>
#include <assert.h>

Class app_delegate_class;
id app_delegate;

id oc_alloc(Class cls) {
    return ((id(*)(id,SEL))objc_msgSend)((id)cls, sel_getUid("alloc"));
}

id oc_alloc_init(Class cls) {
    return ((id(*)(id,SEL))objc_msgSend)(oc_alloc(cls), sel_getUid("init"));
}

void didFinishLaunching(id obj, SEL sel, NSNotification* notification) {
    printf("didFinishLaunching called!\n");
}

void init_delegate(void) {
    // create and register a new app-delegate class
    app_delegate_class = objc_allocateClassPair(objc_lookUpClass("NSObject"), "HelloAppDelegate", 0);
    assert(app_delegate_class);
    class_addMethod(app_delegate_class, sel_getUid("applicationDidFinishLaunching:"), (IMP)didFinishLaunching, "v@@");
    objc_registerClassPair(app_delegate_class); 
    app_delegate = oc_alloc_init(app_delegate_class);
    printf("app delegate: %p", app_delegate);
}

int main() {
    init_delegate();
    NSApplication* app = NSApplication_sharedApplication();
    NSApplication_activateIgnoringOtherApps(app, true);
    NSApplication_setActivationPolicy(app, NSApplicationActivationPolicyRegular);
    NSApplication_setDelegate(app, (NSApplicationDelegate*)app_delegate);
    printf("app: %p\n", app);
    NSApplication_run(app);
    return 0;
}