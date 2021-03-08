#include <assert.h>
#include "hello_macos.h"

id app_delegate;
id win_delegate;

id oc_alloc(Class cls) {
    return ((id(*)(id,SEL))objc_msgSend)((id)cls, sel_getUid("alloc"));
}

id oc_alloc_init(Class cls) {
    return ((id(*)(id,SEL))objc_msgSend)(oc_alloc(cls), sel_getUid("init"));
}

void app_didFinishLaunching(id obj, SEL sel, NSNotification* notification) {
    uint64_t style_mask = 
        NSWindowStyleMaskTitled |
        NSWindowStyleMaskClosable |
        NSWindowStyleMaskMiniaturizable |
        NSWindowStyleMaskResizable;
    NSWindow* win = (NSWindow*) oc_alloc(objc_lookUpClass("NSWindow"));
    NSWindow_initWithContentRect_styleMask_backing_defer(
        win,
        (NSRect){ .origin = { 0, 0 }, .size = { 300, 300 } },
        style_mask,
        NSBackingStoreBuffered,
        false);
    NSWindow_setTitle(win, NSString_stringWithUTF8String("Hello from C"));
    NSWindow_center(win);
    NSWindow_setDelegate(win, (NSWindowDelegate*)win_delegate);
    NSWindow_makeKeyAndOrderFront(win, 0);
}

bool app_applicationShouldTerminateAfterLastWindowClosed(id obj, SEL sel, NSApplication* sender) {
    return true;
}

bool win_windowShouldClose(id obj, SEL sel, id sender) {
    return true;
}

void init_delegates(void) {
    // app-delegate
    Class app_delegate_class = objc_allocateClassPair(objc_lookUpClass("NSObject"), "HelloAppDelegate", 0);
    assert(app_delegate_class);
    class_addMethod(app_delegate_class, sel_getUid("applicationDidFinishLaunching:"), (IMP)app_didFinishLaunching, "v@:@");
    class_addMethod(app_delegate_class, sel_getUid("applicationShouldTerminateAfterLastWindowClosed:"), (IMP)app_applicationShouldTerminateAfterLastWindowClosed, "B@:@");
    objc_registerClassPair(app_delegate_class); 
    app_delegate = oc_alloc_init(app_delegate_class);

    // window delegate
    Class win_delegate_class = objc_allocateClassPair(objc_lookUpClass("NSObject"), "HelloWinDelegate", 0);
    assert(win_delegate_class);
    class_addMethod(win_delegate_class, sel_getUid("windowShouldClose:"), (IMP)win_windowShouldClose, "B@:@");
    win_delegate = oc_alloc_init(win_delegate_class);
}

int main() {
    init_delegates();
    NSApplication* app = NSApplication_sharedApplication();
    NSApplication_setActivationPolicy(app, NSApplicationActivationPolicyRegular);
    NSApplication_setDelegate(app, (NSApplicationDelegate*)app_delegate);
    NSApplication_activateIgnoringOtherApps(app, true);
    NSApplication_run(app);
    return 0;
}