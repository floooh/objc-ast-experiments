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
static id<MTLCommandQueue> mtl_queue;
static MTKView* mtk_view;
dispatch_semaphore_t sem;

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

    mtl_queue = [mtl_device newCommandQueue];
    printf("mtl_queue: %p\n", mtl_queue);

    sem = dispatch_semaphore_create(2);
    printf("sem: %p\n", sem);
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
    static double green = 0.0f;
    green += 0.01;
    if (green > 1.0f) {
        green = 0.0f;
    }

    // begin pass
    dispatch_semaphore_wait(sem, DISPATCH_TIME_FOREVER);
    MTLRenderPassDescriptor* pass_desc = [mtk_view currentRenderPassDescriptor];
    pass_desc.colorAttachments[0].loadAction = MTLLoadActionClear;
    pass_desc.colorAttachments[0].clearColor = MTLClearColorMake(1.0, green, 0.0, 1.0);
    pass_desc.depthAttachment.loadAction = MTLLoadActionClear;
    pass_desc.depthAttachment.clearDepth = 1.0;

    id<MTLCommandBuffer> cmd_buf = [mtl_queue commandBuffer];
    id<MTLRenderCommandEncoder> cmd_enc = [cmd_buf renderCommandEncoderWithDescriptor:pass_desc];

    // end pass
    [cmd_enc endEncoding];

    // commit
    [cmd_buf presentDrawable:[mtk_view currentDrawable]];
    [cmd_buf addCompletedHandler:^(id<MTLCommandBuffer> cmd_buf) {
        dispatch_semaphore_signal(sem);
    }];
    [cmd_buf commit];
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