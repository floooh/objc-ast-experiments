const print = @import("std").debug.print;
const assert = @import("std").debug.assert;
usingnamespace @import("macos.zig");

var app_delegate: *c_void = undefined;
var win_delegate: *c_void = undefined;

fn cfuncptr(funcptr: anytype) *c_void {
    return @intToPtr(*c_void, @ptrToInt(funcptr));
}

fn oc_alloc(cls:*c_void) *c_void {
    const ftype = fn(*c_void,*c_void) callconv(.C) *c_void;
    const func: ftype = @ptrCast(ftype, &objc_msgSend);
    return func(cls, sel_getUid("alloc"));
}

fn oc_alloc_init(cls:*c_void) *c_void {
    return NSObject_init(@ptrCast(*NSObject, oc_alloc(cls)));
}

fn oc_release(obj:*NSObject) void {
    NSObject_release(obj);
}

export fn applicationDidFinishLaunching(obj:*c_void, sel:*c_void, notification:*NSNotification) void {
    _ = obj;
    _ = sel;
    _ = notification;

    print("applicationDidFinishLaunching called\n", .{});

    const style_mask = 
        NSWindowStyleMaskTitled |
        NSWindowStyleMaskClosable |
        NSWindowStyleMaskMiniaturizable |
        NSWindowStyleMaskResizable;
    const win: *NSWindow = @ptrCast(*NSWindow, oc_alloc_init(objc_getClass("NSWindow")));
    print("win: {}\n", .{ win });

    // ...and this is as far as we get, the struct parameter seems to trigger 
    // ABI problems: https://github.com/ziglang/zig/issues/1481
    const rect = NSRect{ .origin=.{ .x=0, .y=0 }, .size=.{ .width=300, .height=300 } };
    _ = NSWindow_initWithContentRect_styleMask_backing_defer(
        win,
        rect,
        style_mask,
        NSBackingStoreBuffered,
        false);
}

export fn applicationShouldTerminateAfterLastWindowClosed(obj:*c_void, sel:*c_void, sender:*NSApplication) bool {
    _ = obj;
    _ = sel;
    _ = sender;
    print("applicationShouldTerminateAfterLastWindowClosed called\n", .{});
    return true;
}

fn create_objc_classes_and_objects() void {
    // application delegate
    const app_delegate_class = objc_allocateClassPair(objc_getClass("NSObject"), "HelloAppDelegate", 0);
    _ = class_addMethod(app_delegate_class, sel_getUid("applicationDidFinishLaunching:"), cfuncptr(applicationDidFinishLaunching), "v@:@");
    _ = class_addMethod(app_delegate_class, sel_getUid("applicationShouldTerminateAfterLastWindowClosed:"), cfuncptr(applicationShouldTerminateAfterLastWindowClosed), "B@:@");
    objc_registerClassPair(app_delegate_class);
    app_delegate = oc_alloc_init(app_delegate_class);
    print("app_delegate: {}\n", .{ app_delegate });
}

pub fn main() void {
    create_objc_classes_and_objects();
    const app:*NSApplication = NSApplication_sharedApplication();
    print("app: {}\n", .{ app });
    _ = NSApplication_setActivationPolicy(app, NSApplicationActivationPolicyRegular);
    NSApplication_setDelegate(app, @ptrCast(*NSApplicationDelegate, app_delegate));
    NSApplication_activateIgnoringOtherApps(app, true);
    NSApplication_run(app);
}