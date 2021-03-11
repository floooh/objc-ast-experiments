// same as hello.c, but in ObjC to compare behaviour
//
#import <Cocoa/Cocoa.h>
#import <Metal/Metal.h>
#import <MetalKit/MetalKit.h>
#include <stdio.h> // printf

@interface HelloAppDelegate : NSObject<NSApplicationDelegate>
@end
@interface HelloWindowDelegate : NSObject<NSWindowDelegate>
@end
@interface HelloMTKView : MTKView
@end

static id<MTLDevice> mtl_device;
static MTKView* mtk_view;

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

    mtl_device= MTLCreateSystemDefaultDevice();
    printf("mtl_device: %p\n", mtl_device);
    mtk_view = [[HelloMTKView alloc] init];
    printf("mtk_view: %p\n", mtk_view);
    mtk_view.preferredFramesPerSecond = 60;
    mtk_view.device = mtl_device;
    mtk_view.colorPixelFormat = MTLPixelFormatBGRA8Unorm;
    mtk_view.depthStencilPixelFormat = MTLPixelFormatDepth32Float_Stencil8;
    mtk_view.sampleCount = 1;
    mtk_view.autoResizeDrawable = true;
    
    win.contentView = mtk_view;
    [win makeFirstResponder:mtk_view];
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
- (void)windowDidResize:(NSNotification*)notification {
    printf("windowDidResize called!\n");
}

- (void)windowDidMove:(NSNotification*)notification {
    printf("windowDidMove called!\n");
}

- (void)windowDidMiniaturize:(NSNotification*)notification {
    printf("windowDidMiniaturize called!\n");
}

- (void)windowDidDeminiaturize:(NSNotification*)notification {
    printf("windowDidDeminiaturize called!\n");
}

- (void)windowDidBecomeKey:(NSNotification*)notification {
    printf("windowDidBecomeKey called!\n");
}

- (void)windowDidResignKey:(NSNotification*)notification {
    printf("windowDidResignKey called!\n");
}
@end

@implementation HelloMTKView
- (BOOL)isOpaque {
    printf("isOpaque called!\n");
    return YES;
}
- (BOOL)canBecomeKeyView {
    printf("canBecomeKeyView called!\n");
    return YES;
}
- (BOOL)acceptsFirstResponder {
    printf("acceptsFirstResponder called!\n");
    return YES;
}
- (void)drawRect:(NSRect)dirtyRect {
    printf("drawRect called: %.1f,%.1f,%.1f,%.1f!\n", dirtyRect.origin.x, dirtyRect.origin.y, dirtyRect.size.width, dirtyRect.size.height);
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