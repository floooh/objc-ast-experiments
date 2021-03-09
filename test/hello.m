// same as hello.c, but in ObjC to compare behaviour
//
#import <Cocoa/Cocoa.h>

@interface HelloAppDelegate : NSObject<NSApplicationDelegate>
@end
@interface HelloWindowDelegate : NSObject<NSWindowDelegate>
@end

@implementation HelloAppDelegate
- (void)applicationDidFinishLaunching:(NSNotification*)aNotification {
    const NSUInteger style =
        NSWindowStyleMaskTitled |
        NSWindowStyleMaskClosable |
        NSWindowStyleMaskMiniaturizable |
        NSWindowStyleMaskResizable;
    NSWindow* win = [[NSWindow alloc]
        initWithContentRect:NSMakeRect(0, 0, 300, 300)
        styleMask:style
        backing:NSBackingStoreBuffered
        defer:NO];
    [win setTitle:[NSString stringWithUTF8String:"Hello from ObjC"]];
    [win setAcceptsMouseMovedEvents:YES];
    [win setRestorable:YES];
    [win center];
    [win setDelegate:[[HelloWindowDelegate alloc] init]];
    [win makeKeyAndOrderFront:nil];
}

- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(NSApplication*)sender {
    (void)sender;
    return YES;
}
@end

@implementation HelloWindowDelegate
- (BOOL)windowShouldClose:(id)sender {
    return YES;
}
@end

int main() {
    NSApplication* app = [NSApplication sharedApplication];
    [app setActivationPolicy:NSApplicationActivationPolicyRegular];
    [app setDelegate:[[HelloAppDelegate alloc] init]];
    [app activateIgnoringOtherApps:YES];
    [app run];
    return 0;
}