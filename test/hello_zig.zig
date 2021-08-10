const print = @import("std").debug.print;
const assert = @import("std").debug.assert;
usingnamespace @import("macos.zig");
const c = @cImport(@cInclude("macos.h"));

var app_delegate: *c_void = undefined;
var win_delegate: *c_void = undefined;

fn cfuncptr(funcptr: anytype) *c_void {
    return @intToPtr(*c_void, @ptrToInt(funcptr));
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
    const win: *NSWindow = @ptrCast(*NSWindow, c.oc_alloc_init(objc_getClass("NSWindow")));
    print("win: {}\n", .{ win });

    const rect = NSRect{ .origin=.{ .x=0, .y=0 }, .size=.{ .width=300, .height=300 } };
    // hmm, this crashes now deep in Cocoa with 'assertion failure: "CGSWindow != ((void *)0)" -> 0'
    const w = NSWindow_initWithContentRect_styleMask_backing_defer(
        win,
        rect,
        style_mask,
        NSBackingStoreBuffered,
        false);
    print("after initWithContentRect: {}\n", .{w});
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
    app_delegate = c.oc_alloc_init(app_delegate_class.?).?;
    print("app_delegate: {}\n", .{ app_delegate });
}

pub fn main() void {
    c.oc_initialize();
    create_objc_classes_and_objects();
    const app:*NSApplication = NSApplication_sharedApplication();
    print("app: {}\n", .{ app });
    _ = NSApplication_setActivationPolicy(app, NSApplicationActivationPolicyRegular);
    NSApplication_setDelegate(app, @ptrCast(*NSApplicationDelegate, app_delegate));
    NSApplication_activateIgnoringOtherApps(app, true);
    NSApplication_run(app);
}