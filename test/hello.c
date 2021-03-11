#include <assert.h>
#include <stdio.h>
#include "hello_macos.h"

id app_delegate;
id win_delegate;
MTKView* mtk_view;

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
    NSWindow_setAcceptsMouseMovedEvents(win, true);
    NSWindow_center(win);
    NSWindow_setRestorable(win, true);
    NSWindow_setDelegate(win, (NSWindowDelegate*)win_delegate);

    MTLDevice* mtl_device = MTLCreateSystemDefaultDevice();
    printf("MTLDevice: %p\n", mtl_device);
    MTKView_setPreferredFramesPerSecond(mtk_view, 60);
    MTKView_setDevice(mtk_view, mtl_device);
    MTKView_setColorPixelFormat(mtk_view, MTLPixelFormatBGRA8Unorm);
    MTKView_setDepthStencilPixelFormat(mtk_view, MTLPixelFormatDepth32Float_Stencil8);
    MTKView_setSampleCount(mtk_view, 1);
    MTKView_setAutoResizeDrawable(mtk_view, true);

    NSWindow_setContentView(win, (NSView*)mtk_view);
    NSWindow_makeFirstResponder(win, (NSResponder*)mtk_view);
    NSWindow_makeKeyAndOrderFront(win, 0);
}

bool app_applicationShouldTerminateAfterLastWindowClosed(id obj, SEL sel, NSApplication* sender) {
    return true;
}

bool win_windowShouldClose(id obj, SEL sel, id sender) {
    printf("windowShouldClose() called\n");
    return true;
}

void win_windowDidResize(id obj, SEL sel, NSNotification* notification) {
    printf("windowDidResize() called!\n");
}

void win_windowDidMove(id obj, SEL sel, NSNotification* notification) {
    printf("windowDidMove() called!\n");
}

void win_windowDidMiniaturize(id obj, SEL sel, NSNotification* notification) {
    printf("windowDidMiniaturize() called!\n");
}

void win_windowDidDeminiaturize(id obj, SEL sel, NSNotification* notification) {
    printf("windowDidDeminiaturize() called!\n");
}

void win_windowDidBecomeKey(id obj, SEL sel, NSNotification* notification) {
    printf("windowDidBecomeKey() called\n");
}

void win_windowDidResignKey(id obj, SEL sel, NSNotification* notification) {
    printf("windowDidResignKey() called!\n");
}

bool view_isOpaque(id obj, SEL sel) {
    printf("isOpaque() called\n");
    return true;
}

bool view_canBecomeKeyView(id obj, SEL sel) {
    printf("canBecomeKeyView() called\n");
    return true;
}

bool view_acceptsFirstResponder(id obj, SEL sel) {
    printf("acceptsFirstResponser() called\n");
    return true;
}

void view_drawRect(id obj, SEL sel, NSRect dirtyRect) {
    printf("drawRect called: %.1f,%.1f,%.1f,%.1f!\n", dirtyRect.origin.x, dirtyRect.origin.y, dirtyRect.size.width, dirtyRect.size.height);
}

void init_runtime(void) {
    // app-delegate
    Class app_delegate_class = objc_allocateClassPair(objc_lookUpClass("NSObject"), "HelloAppDelegate", 0);
    assert(app_delegate_class);
    class_addMethod(app_delegate_class, sel_getUid("applicationDidFinishLaunching:"), (IMP)app_didFinishLaunching, "v@:@");
    class_addMethod(app_delegate_class, sel_getUid("applicationShouldTerminateAfterLastWindowClosed:"), (IMP)app_applicationShouldTerminateAfterLastWindowClosed, "B@:@");
    objc_registerClassPair(app_delegate_class); 
    app_delegate = oc_alloc_init(app_delegate_class);
    assert(app_delegate);
    printf("app_delegate: %p\n", app_delegate);

    // window delegate
    Class win_delegate_class = objc_allocateClassPair(objc_lookUpClass("NSObject"), "HelloWinDelegate", 0);
    assert(win_delegate_class);
    class_addMethod(win_delegate_class, sel_getUid("windowShouldClose:"), (IMP)win_windowShouldClose, "B@:@");
    class_addMethod(win_delegate_class, sel_getUid("windowDidResize:"), (IMP)win_windowDidResize, "v@:@");
    class_addMethod(win_delegate_class, sel_getUid("windowDidMove:"), (IMP)win_windowDidMove, "v@:@");
    class_addMethod(win_delegate_class, sel_getUid("windowDidMiniaturize:"), (IMP)win_windowDidMiniaturize, "v@:@");
    class_addMethod(win_delegate_class, sel_getUid("windowDidDeminiaturize:"), (IMP)win_windowDidDeminiaturize, "v@:@");
    class_addMethod(win_delegate_class, sel_getUid("windowDidBecomeKey:"), (IMP)win_windowDidBecomeKey, "v@:@");
    class_addMethod(win_delegate_class, sel_getUid("windowDidResignKey:"), (IMP)win_windowDidResignKey, "v@:@");
    win_delegate = oc_alloc_init(win_delegate_class);
    assert(win_delegate);
    printf("win_delegate: %p\n", win_delegate);

    // MTKView subclass
    Class mtk_view_class = objc_allocateClassPair(objc_lookUpClass("MTKView"), "HelloMtkView", 0);
    assert(mtk_view_class);
    class_addMethod(mtk_view_class, sel_getUid("isOpaque"), (IMP)view_isOpaque, "B@:");
    class_addMethod(mtk_view_class, sel_getUid("canBecomeKeyView"), (IMP)view_canBecomeKeyView, "B@:");
    class_addMethod(mtk_view_class, sel_getUid("acceptsFirstResponder"), (IMP)view_acceptsFirstResponder, "B@:");
    class_addMethod(mtk_view_class, sel_getUid("drawRect:"), (IMP)view_drawRect, "v@:{NSRect={CGPoint=dd}{CGSize=dd}}");
    mtk_view = (MTKView*) oc_alloc_init(mtk_view_class);
    assert(mtk_view);
    printf("mtk_view: %p\n", mtk_view);
}

int main() {
    init_runtime();
    NSApplication* app = NSApplication_sharedApplication();
    NSApplication_setActivationPolicy(app, NSApplicationActivationPolicyRegular);
    NSApplication_setDelegate(app, (NSApplicationDelegate*)app_delegate);
    NSApplication_activateIgnoringOtherApps(app, true);
    NSApplication_run(app);
    return 0;
}