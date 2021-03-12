	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 1
	.globl	_oc_alloc               ## -- Begin function oc_alloc
	.p2align	4, 0x90
_oc_alloc:                              ## @oc_alloc
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str(%rip), %rdi
	movq	%rax, -16(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_oc_alloc_init          ## -- Begin function oc_alloc_init
	.p2align	4, 0x90
_oc_alloc_init:                         ## @oc_alloc_init
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_oc_alloc
	leaq	L_.str.1(%rip), %rdi
	movq	%rax, -16(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3               ## -- Begin function app_didFinishLaunching
LCPI2_0:
	.quad	4643985272004935680     ## double 300
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_app_didFinishLaunching
	.p2align	4, 0x90
_app_didFinishLaunching:                ## @app_didFinishLaunching
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$144, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	$15, -32(%rbp)
	leaq	L_.str.2(%rip), %rdi
	callq	_objc_lookUpClass
	movq	%rax, %rdi
	callq	_oc_alloc
	xorl	%ecx, %ecx
	movsd	LCPI2_0(%rip), %xmm0    ## xmm0 = mem[0],zero
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rdi
	xorps	%xmm1, %xmm1
	movsd	%xmm1, -72(%rbp)
	movsd	%xmm1, -64(%rbp)
	movsd	%xmm0, -56(%rbp)
	movsd	%xmm0, -48(%rbp)
	movq	-32(%rbp), %rsi
	leaq	-72(%rbp), %rax
	movq	(%rax), %rdx
	movq	%rdx, (%rsp)
	movq	8(%rax), %rdx
	movq	%rdx, 8(%rsp)
	movq	16(%rax), %rdx
	movq	%rdx, 16(%rsp)
	movq	24(%rax), %rax
	movq	%rax, 24(%rsp)
	movl	$2, %edx
	callq	_NSWindow_initWithContentRect_styleMask_backing_defer
	movq	-40(%rbp), %rdi
	leaq	L_.str.3(%rip), %rdx
	movq	%rdi, -88(%rbp)         ## 8-byte Spill
	movq	%rdx, %rdi
	movq	%rax, -96(%rbp)         ## 8-byte Spill
	callq	_NSString_stringWithUTF8String
	movq	-88(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_NSWindow_setTitle
	movq	-40(%rbp), %rdi
	movl	$1, %esi
	callq	_NSWindow_setAcceptsMouseMovedEvents
	movq	-40(%rbp), %rdi
	callq	_NSWindow_center
	movq	-40(%rbp), %rdi
	movl	$1, %esi
	callq	_NSWindow_setRestorable
	movq	_win_delegate@GOTPCREL(%rip), %rax
	movq	-40(%rbp), %rdi
	movq	(%rax), %rax
	movq	%rax, %rsi
	callq	_NSWindow_setDelegate
	callq	_MTLCreateSystemDefaultDevice
	movq	%rax, -80(%rbp)
	movq	-80(%rbp), %rsi
	leaq	L_.str.4(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movq	_mtk_view@GOTPCREL(%rip), %rdx
	movq	(%rdx), %rdi
	movl	$60, %esi
	movl	%eax, -100(%rbp)        ## 4-byte Spill
	callq	_MTKView_setPreferredFramesPerSecond
	movq	_mtk_view@GOTPCREL(%rip), %rdx
	movq	(%rdx), %rdi
	movq	-80(%rbp), %rsi
	callq	_MTKView_setDevice
	movq	_mtk_view@GOTPCREL(%rip), %rdx
	movq	(%rdx), %rdi
	movl	$80, %esi
	callq	_MTKView_setColorPixelFormat
	movq	_mtk_view@GOTPCREL(%rip), %rdx
	movq	(%rdx), %rdi
	movl	$260, %esi              ## imm = 0x104
	callq	_MTKView_setDepthStencilPixelFormat
	movq	_mtk_view@GOTPCREL(%rip), %rdx
	movq	(%rdx), %rdi
	movl	$1, %esi
	callq	_MTKView_setSampleCount
	movq	_mtk_view@GOTPCREL(%rip), %rdx
	movq	(%rdx), %rdi
	movl	$1, %esi
	callq	_MTKView_setAutoResizeDrawable
	movq	_mtk_view@GOTPCREL(%rip), %rdx
	movq	-40(%rbp), %rdi
	movq	(%rdx), %rdx
	movq	%rdx, %rsi
	callq	_NSWindow_setContentView
	movq	_mtk_view@GOTPCREL(%rip), %rdx
	movq	-40(%rbp), %rdi
	movq	(%rdx), %rdx
	movq	%rdx, %rsi
	callq	_NSWindow_makeFirstResponder
	xorl	%ecx, %ecx
	movl	%ecx, %esi
	movq	-40(%rbp), %rdi
	movb	%al, -101(%rbp)         ## 1-byte Spill
	callq	_NSWindow_makeKeyAndOrderFront
	movq	-80(%rbp), %rdi
	callq	_MTLDevice_newCommandQueue
	movq	_mtl_queue@GOTPCREL(%rip), %rdx
	movq	%rax, (%rdx)
	movq	(%rdx), %rsi
	leaq	L_.str.5(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	$2, %edi
	movl	%eax, -108(%rbp)        ## 4-byte Spill
	callq	_dispatch_semaphore_create
	movq	_sem@GOTPCREL(%rip), %rdx
	movq	%rax, (%rdx)
	movq	(%rdx), %rsi
	leaq	L_.str.6(%rip), %rdi
	movb	$0, %al
	callq	_printf
	addq	$144, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function NSWindow_initWithContentRect_styleMask_backing_defer
_NSWindow_initWithContentRect_styleMask_backing_defer: ## @NSWindow_initWithContentRect_styleMask_backing_defer
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
                                        ## kill: def $cl killed $cl killed $ecx
	leaq	16(%rbp), %rax
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	andb	$1, %cl
	movb	%cl, -25(%rbp)
	movq	-8(%rbp), %rdx
	leaq	L_.str.38(%rip), %rdi
	movq	%rax, -40(%rbp)         ## 8-byte Spill
	movq	%rdx, -48(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rcx
	movb	-25(%rbp), %r8b
	andb	$1, %r8b
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	movq	-40(%rbp), %rax         ## 8-byte Reload
	movq	(%rax), %r9
	movq	%r9, (%rsp)
	movq	8(%rax), %r9
	movq	%r9, 8(%rsp)
	movq	16(%rax), %r9
	movq	%r9, 16(%rsp)
	movq	24(%rax), %r9
	movq	%r9, 24(%rsp)
	movzbl	%r8b, %r8d
	callq	_objc_msgSend
	addq	$80, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function NSWindow_setTitle
_NSWindow_setTitle:                     ## @NSWindow_setTitle
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.39(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function NSString_stringWithUTF8String
_NSString_stringWithUTF8String:         ## @NSString_stringWithUTF8String
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	L_.str.40(%rip), %rdi
	callq	_objc_getClass
	leaq	L_.str.41(%rip), %rdi
	movq	%rax, -16(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-8(%rbp), %rdx
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function NSWindow_setAcceptsMouseMovedEvents
_NSWindow_setAcceptsMouseMovedEvents:   ## @NSWindow_setAcceptsMouseMovedEvents
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
                                        ## kill: def $sil killed $sil killed $esi
	movq	%rdi, -8(%rbp)
	andb	$1, %sil
	movb	%sil, -9(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.42(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movb	-9(%rbp), %cl
	andb	$1, %cl
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	movzbl	%cl, %edx
	callq	_objc_msgSend
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function NSWindow_center
_NSWindow_center:                       ## @NSWindow_center
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.43(%rip), %rdi
	movq	%rax, -16(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function NSWindow_setRestorable
_NSWindow_setRestorable:                ## @NSWindow_setRestorable
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
                                        ## kill: def $sil killed $sil killed $esi
	movq	%rdi, -8(%rbp)
	andb	$1, %sil
	movb	%sil, -9(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.44(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movb	-9(%rbp), %cl
	andb	$1, %cl
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	movzbl	%cl, %edx
	callq	_objc_msgSend
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function NSWindow_setDelegate
_NSWindow_setDelegate:                  ## @NSWindow_setDelegate
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.45(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTKView_setPreferredFramesPerSecond
_MTKView_setPreferredFramesPerSecond:   ## @MTKView_setPreferredFramesPerSecond
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.46(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTKView_setDevice
_MTKView_setDevice:                     ## @MTKView_setDevice
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.47(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTKView_setColorPixelFormat
_MTKView_setColorPixelFormat:           ## @MTKView_setColorPixelFormat
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.48(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTKView_setDepthStencilPixelFormat
_MTKView_setDepthStencilPixelFormat:    ## @MTKView_setDepthStencilPixelFormat
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.49(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTKView_setSampleCount
_MTKView_setSampleCount:                ## @MTKView_setSampleCount
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.50(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTKView_setAutoResizeDrawable
_MTKView_setAutoResizeDrawable:         ## @MTKView_setAutoResizeDrawable
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
                                        ## kill: def $sil killed $sil killed $esi
	movq	%rdi, -8(%rbp)
	andb	$1, %sil
	movb	%sil, -9(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.51(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movb	-9(%rbp), %cl
	andb	$1, %cl
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	movzbl	%cl, %edx
	callq	_objc_msgSend
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function NSWindow_setContentView
_NSWindow_setContentView:               ## @NSWindow_setContentView
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.52(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function NSWindow_makeFirstResponder
_NSWindow_makeFirstResponder:           ## @NSWindow_makeFirstResponder
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.53(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	andb	$1, %al
	movzbl	%al, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function NSWindow_makeKeyAndOrderFront
_NSWindow_makeKeyAndOrderFront:         ## @NSWindow_makeKeyAndOrderFront
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.54(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTLDevice_newCommandQueue
_MTLDevice_newCommandQueue:             ## @MTLDevice_newCommandQueue
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.55(%rip), %rdi
	movq	%rax, -16(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_app_applicationShouldTerminateAfterLastWindowClosed ## -- Begin function app_applicationShouldTerminateAfterLastWindowClosed
	.p2align	4, 0x90
_app_applicationShouldTerminateAfterLastWindowClosed: ## @app_applicationShouldTerminateAfterLastWindowClosed
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movb	$1, %al
	andb	$1, %al
	movzbl	%al, %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_win_windowShouldClose  ## -- Begin function win_windowShouldClose
	.p2align	4, 0x90
_win_windowShouldClose:                 ## @win_windowShouldClose
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	leaq	L_.str.7(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movb	$1, %cl
	andb	$1, %cl
	movzbl	%cl, %r8d
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	movl	%r8d, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_view_isOpaque          ## -- Begin function view_isOpaque
	.p2align	4, 0x90
_view_isOpaque:                         ## @view_isOpaque
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	leaq	L_.str.8(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movb	$1, %cl
	andb	$1, %cl
	movzbl	%cl, %edx
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	movl	%edx, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_view_canBecomeKeyView  ## -- Begin function view_canBecomeKeyView
	.p2align	4, 0x90
_view_canBecomeKeyView:                 ## @view_canBecomeKeyView
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	leaq	L_.str.9(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movb	$1, %cl
	andb	$1, %cl
	movzbl	%cl, %edx
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	movl	%edx, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_view_acceptsFirstResponder ## -- Begin function view_acceptsFirstResponder
	.p2align	4, 0x90
_view_acceptsFirstResponder:            ## @view_acceptsFirstResponder
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	leaq	L_.str.10(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movb	$1, %cl
	andb	$1, %cl
	movzbl	%cl, %edx
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	movl	%edx, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3               ## -- Begin function view_drawRect
LCPI25_0:
	.quad	4607182418800017408     ## double 1
LCPI25_1:
	.quad	4576918229304087675     ## double 0.01
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_view_drawRect
	.p2align	4, 0x90
_view_drawRect:                         ## @view_drawRect
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$144, %rsp
	movsd	LCPI25_0(%rip), %xmm0   ## xmm0 = mem[0],zero
	movsd	LCPI25_1(%rip), %xmm1   ## xmm1 = mem[0],zero
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	addsd	_view_drawRect.green(%rip), %xmm1
	movsd	%xmm1, _view_drawRect.green(%rip)
	movsd	_view_drawRect.green(%rip), %xmm1 ## xmm1 = mem[0],zero
	ucomisd	%xmm0, %xmm1
	jbe	LBB25_2
## %bb.1:
	xorps	%xmm0, %xmm0
	movsd	%xmm0, _view_drawRect.green(%rip)
LBB25_2:
	movq	_sem@GOTPCREL(%rip), %rax
	movq	(%rax), %rdi
	movq	$-1, %rsi
	callq	_dispatch_semaphore_wait
	movq	_mtk_view@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rdi
	movq	%rax, -112(%rbp)        ## 8-byte Spill
	callq	_MTKView_currentRenderPassDescriptor
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rdi
	callq	_MTLRenderPassDescriptor_colorAttachments
	xorl	%edx, %edx
	movl	%edx, %esi
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rdi
	callq	_MTLRenderPassColorAttachmentDescriptorArray_objectAtIndexedSubscript
	movq	%rax, -40(%rbp)
	movq	-24(%rbp), %rdi
	callq	_MTLRenderPassDescriptor_depthAttachment
	movq	%rax, -48(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	movl	$2, %esi
	callq	_MTLRenderPassAttachmentDescriptor_setLoadAction
	movsd	LCPI25_0(%rip), %xmm0   ## xmm0 = mem[0],zero
	movq	-40(%rbp), %rdi
	movsd	%xmm0, -80(%rbp)
	movsd	_view_drawRect.green(%rip), %xmm1 ## xmm1 = mem[0],zero
	movsd	%xmm1, -72(%rbp)
	xorps	%xmm1, %xmm1
	movsd	%xmm1, -64(%rbp)
	movsd	%xmm0, -56(%rbp)
	leaq	-80(%rbp), %rax
	movq	(%rax), %rcx
	movq	%rcx, (%rsp)
	movq	8(%rax), %rcx
	movq	%rcx, 8(%rsp)
	movq	16(%rax), %rcx
	movq	%rcx, 16(%rsp)
	movq	24(%rax), %rax
	movq	%rax, 24(%rsp)
	callq	_MTLRenderPassColorAttachmentDescriptor_setClearColor
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	movl	$2, %esi
	callq	_MTLRenderPassAttachmentDescriptor_setLoadAction
	movsd	LCPI25_0(%rip), %xmm0   ## xmm0 = mem[0],zero
	movq	-48(%rbp), %rdi
	callq	_MTLRenderPassDepthAttachmentDescriptor_setClearDepth
	movq	_mtl_queue@GOTPCREL(%rip), %rax
	movq	(%rax), %rdi
	callq	_MTLCommandQueue_commandBuffer
	movq	%rax, -88(%rbp)
	movq	-88(%rbp), %rdi
	movq	-24(%rbp), %rsi
	callq	_MTLCommandBuffer_renderCommandEncoderWithDescriptor
	movq	%rax, -96(%rbp)
	movq	-96(%rbp), %rax
	movq	%rax, %rdi
	callq	_MTLCommandEncoder_endEncoding
	movq	_mtk_view@GOTPCREL(%rip), %rax
	movq	(%rax), %rdi
	callq	_MTKView_currentDrawable
	movq	%rax, -104(%rbp)
	movq	-88(%rbp), %rdi
	movq	-104(%rbp), %rsi
	callq	_MTLCommandBuffer_presentDrawable
	leaq	___block_literal_global(%rip), %rax
	movq	-88(%rbp), %rdi
	movq	%rax, %rsi
	callq	_MTLCommandBuffer_addCompletedHandler
	movq	-88(%rbp), %rdi
	callq	_MTLCommandBuffer_commit
	addq	$144, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTKView_currentRenderPassDescriptor
_MTKView_currentRenderPassDescriptor:   ## @MTKView_currentRenderPassDescriptor
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.56(%rip), %rdi
	movq	%rax, -16(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTLRenderPassDescriptor_colorAttachments
_MTLRenderPassDescriptor_colorAttachments: ## @MTLRenderPassDescriptor_colorAttachments
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.57(%rip), %rdi
	movq	%rax, -16(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTLRenderPassColorAttachmentDescriptorArray_objectAtIndexedSubscript
_MTLRenderPassColorAttachmentDescriptorArray_objectAtIndexedSubscript: ## @MTLRenderPassColorAttachmentDescriptorArray_objectAtIndexedSubscript
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.58(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTLRenderPassDescriptor_depthAttachment
_MTLRenderPassDescriptor_depthAttachment: ## @MTLRenderPassDescriptor_depthAttachment
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.59(%rip), %rdi
	movq	%rax, -16(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTLRenderPassAttachmentDescriptor_setLoadAction
_MTLRenderPassAttachmentDescriptor_setLoadAction: ## @MTLRenderPassAttachmentDescriptor_setLoadAction
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.60(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTLRenderPassColorAttachmentDescriptor_setClearColor
_MTLRenderPassColorAttachmentDescriptor_setClearColor: ## @MTLRenderPassColorAttachmentDescriptor_setClearColor
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	leaq	16(%rbp), %rax
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rcx
	leaq	L_.str.61(%rip), %rdi
	movq	%rax, -16(%rbp)         ## 8-byte Spill
	movq	%rcx, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	movq	-16(%rbp), %rax         ## 8-byte Reload
	movq	(%rax), %rcx
	movq	%rcx, (%rsp)
	movq	8(%rax), %rcx
	movq	%rcx, 8(%rsp)
	movq	16(%rax), %rcx
	movq	%rcx, 16(%rsp)
	movq	24(%rax), %rcx
	movq	%rcx, 24(%rsp)
	callq	_objc_msgSend
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTLRenderPassDepthAttachmentDescriptor_setClearDepth
_MTLRenderPassDepthAttachmentDescriptor_setClearDepth: ## @MTLRenderPassDepthAttachmentDescriptor_setClearDepth
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movsd	%xmm0, -16(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.62(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movsd	-16(%rbp), %xmm0        ## xmm0 = mem[0],zero
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTLCommandQueue_commandBuffer
_MTLCommandQueue_commandBuffer:         ## @MTLCommandQueue_commandBuffer
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.63(%rip), %rdi
	movq	%rax, -16(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTLCommandBuffer_renderCommandEncoderWithDescriptor
_MTLCommandBuffer_renderCommandEncoderWithDescriptor: ## @MTLCommandBuffer_renderCommandEncoderWithDescriptor
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.64(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTLCommandEncoder_endEncoding
_MTLCommandEncoder_endEncoding:         ## @MTLCommandEncoder_endEncoding
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.65(%rip), %rdi
	movq	%rax, -16(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTKView_currentDrawable
_MTKView_currentDrawable:               ## @MTKView_currentDrawable
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.66(%rip), %rdi
	movq	%rax, -16(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTLCommandBuffer_presentDrawable
_MTLCommandBuffer_presentDrawable:      ## @MTLCommandBuffer_presentDrawable
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.67(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTLCommandBuffer_addCompletedHandler
_MTLCommandBuffer_addCompletedHandler:  ## @MTLCommandBuffer_addCompletedHandler
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.68(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function __view_drawRect_block_invoke
___view_drawRect_block_invoke:          ## @__view_drawRect_block_invoke
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	_sem@GOTPCREL(%rip), %rax
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdi, -24(%rbp)
	movq	(%rax), %rdi
	callq	_dispatch_semaphore_signal
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function MTLCommandBuffer_commit
_MTLCommandBuffer_commit:               ## @MTLCommandBuffer_commit
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.69(%rip), %rdi
	movq	%rax, -16(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_init_runtime           ## -- Begin function init_runtime
	.p2align	4, 0x90
_init_runtime:                          ## @init_runtime
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$128, %rsp
	leaq	L_.str.12(%rip), %rdi
	callq	_objc_lookUpClass
	xorl	%ecx, %ecx
	movl	%ecx, %edx
	movq	%rax, %rdi
	leaq	L_.str.13(%rip), %rsi
	callq	_objc_allocateClassPair
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	setne	%r8b
	xorb	$-1, %r8b
	andb	$1, %r8b
	movzbl	%r8b, %ecx
	movslq	%ecx, %rax
	cmpq	$0, %rax
	je	LBB41_2
## %bb.1:
	leaq	L___func__.init_runtime(%rip), %rdi
	leaq	L_.str.14(%rip), %rsi
	leaq	L_.str.15(%rip), %rcx
	movl	$123, %edx
	callq	___assert_rtn
LBB41_2:
	jmp	LBB41_3
LBB41_3:
	movq	-8(%rbp), %rdi
	leaq	L_.str.16(%rip), %rax
	movq	%rdi, -32(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	callq	_sel_getUid
	leaq	_app_didFinishLaunching(%rip), %rcx
	movq	-32(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	movq	%rcx, %rdx
	leaq	L_.str.17(%rip), %rcx
	callq	_class_addMethod
	movq	-8(%rbp), %rdi
	leaq	L_.str.18(%rip), %rcx
	movq	%rdi, -40(%rbp)         ## 8-byte Spill
	movq	%rcx, %rdi
	movb	%al, -41(%rbp)          ## 1-byte Spill
	callq	_sel_getUid
	leaq	_app_applicationShouldTerminateAfterLastWindowClosed(%rip), %rcx
	movq	-40(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	movq	%rcx, %rdx
	leaq	L_.str.19(%rip), %rcx
	callq	_class_addMethod
	movq	-8(%rbp), %rdi
	movb	%al, -42(%rbp)          ## 1-byte Spill
	callq	_objc_registerClassPair
	movq	-8(%rbp), %rdi
	callq	_oc_alloc_init
	movq	_app_delegate@GOTPCREL(%rip), %rcx
	movq	%rax, (%rcx)
	cmpq	$0, (%rcx)
	setne	%r8b
	xorb	$-1, %r8b
	andb	$1, %r8b
	movzbl	%r8b, %r9d
	movslq	%r9d, %rax
	cmpq	$0, %rax
	je	LBB41_5
## %bb.4:
	leaq	L___func__.init_runtime(%rip), %rdi
	leaq	L_.str.14(%rip), %rsi
	leaq	L_.str.20(%rip), %rcx
	movl	$128, %edx
	callq	___assert_rtn
LBB41_5:
	jmp	LBB41_6
LBB41_6:
	movq	_app_delegate@GOTPCREL(%rip), %rax
	movq	(%rax), %rsi
	leaq	L_.str.21(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str.12(%rip), %rdi
	movl	%eax, -48(%rbp)         ## 4-byte Spill
	callq	_objc_lookUpClass
	xorl	%ecx, %ecx
	movl	%ecx, %edx
	movq	%rax, %rdi
	leaq	L_.str.22(%rip), %rsi
	callq	_objc_allocateClassPair
	movq	%rax, -16(%rbp)
	cmpq	$0, -16(%rbp)
	setne	%r8b
	xorb	$-1, %r8b
	andb	$1, %r8b
	movzbl	%r8b, %ecx
	movslq	%ecx, %rax
	cmpq	$0, %rax
	je	LBB41_8
## %bb.7:
	leaq	L___func__.init_runtime(%rip), %rdi
	leaq	L_.str.14(%rip), %rsi
	leaq	L_.str.23(%rip), %rcx
	movl	$133, %edx
	callq	___assert_rtn
LBB41_8:
	jmp	LBB41_9
LBB41_9:
	movq	-16(%rbp), %rdi
	leaq	L_.str.24(%rip), %rax
	movq	%rdi, -56(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	callq	_sel_getUid
	leaq	_win_windowShouldClose(%rip), %rcx
	movq	-56(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	movq	%rcx, %rdx
	leaq	L_.str.19(%rip), %rcx
	callq	_class_addMethod
	movq	-16(%rbp), %rdi
	movb	%al, -57(%rbp)          ## 1-byte Spill
	callq	_oc_alloc_init
	movq	_win_delegate@GOTPCREL(%rip), %rcx
	movq	%rax, (%rcx)
	cmpq	$0, (%rcx)
	setne	%r8b
	xorb	$-1, %r8b
	andb	$1, %r8b
	movzbl	%r8b, %r9d
	movslq	%r9d, %rax
	cmpq	$0, %rax
	je	LBB41_11
## %bb.10:
	leaq	L___func__.init_runtime(%rip), %rdi
	leaq	L_.str.14(%rip), %rsi
	leaq	L_.str.25(%rip), %rcx
	movl	$136, %edx
	callq	___assert_rtn
LBB41_11:
	jmp	LBB41_12
LBB41_12:
	movq	_win_delegate@GOTPCREL(%rip), %rax
	movq	(%rax), %rsi
	leaq	L_.str.26(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str.27(%rip), %rdi
	movl	%eax, -64(%rbp)         ## 4-byte Spill
	callq	_objc_lookUpClass
	xorl	%ecx, %ecx
	movl	%ecx, %edx
	movq	%rax, %rdi
	leaq	L_.str.28(%rip), %rsi
	callq	_objc_allocateClassPair
	movq	%rax, -24(%rbp)
	cmpq	$0, -24(%rbp)
	setne	%r8b
	xorb	$-1, %r8b
	andb	$1, %r8b
	movzbl	%r8b, %ecx
	movslq	%ecx, %rax
	cmpq	$0, %rax
	je	LBB41_14
## %bb.13:
	leaq	L___func__.init_runtime(%rip), %rdi
	leaq	L_.str.14(%rip), %rsi
	leaq	L_.str.29(%rip), %rcx
	movl	$141, %edx
	callq	___assert_rtn
LBB41_14:
	jmp	LBB41_15
LBB41_15:
	movq	-24(%rbp), %rdi
	leaq	L_.str.30(%rip), %rax
	movq	%rdi, -72(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	callq	_sel_getUid
	leaq	_view_isOpaque(%rip), %rcx
	movq	-72(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	movq	%rcx, %rdx
	leaq	L_.str.31(%rip), %rcx
	callq	_class_addMethod
	movq	-24(%rbp), %rdi
	leaq	L_.str.32(%rip), %rcx
	movq	%rdi, -80(%rbp)         ## 8-byte Spill
	movq	%rcx, %rdi
	movb	%al, -81(%rbp)          ## 1-byte Spill
	callq	_sel_getUid
	leaq	_view_canBecomeKeyView(%rip), %rcx
	movq	-80(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	movq	%rcx, %rdx
	leaq	L_.str.31(%rip), %rcx
	callq	_class_addMethod
	movq	-24(%rbp), %rdi
	leaq	L_.str.33(%rip), %rcx
	movq	%rdi, -96(%rbp)         ## 8-byte Spill
	movq	%rcx, %rdi
	movb	%al, -97(%rbp)          ## 1-byte Spill
	callq	_sel_getUid
	leaq	_view_acceptsFirstResponder(%rip), %rcx
	movq	-96(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	movq	%rcx, %rdx
	leaq	L_.str.31(%rip), %rcx
	callq	_class_addMethod
	movq	-24(%rbp), %rdi
	leaq	L_.str.34(%rip), %rcx
	movq	%rdi, -112(%rbp)        ## 8-byte Spill
	movq	%rcx, %rdi
	movb	%al, -113(%rbp)         ## 1-byte Spill
	callq	_sel_getUid
	leaq	_view_drawRect(%rip), %rcx
	movq	-112(%rbp), %rdi        ## 8-byte Reload
	movq	%rax, %rsi
	movq	%rcx, %rdx
	leaq	L_.str.35(%rip), %rcx
	callq	_class_addMethod
	movq	-24(%rbp), %rdi
	movb	%al, -114(%rbp)         ## 1-byte Spill
	callq	_oc_alloc_init
	movq	_mtk_view@GOTPCREL(%rip), %rcx
	movq	%rax, (%rcx)
	cmpq	$0, (%rcx)
	setne	%r8b
	xorb	$-1, %r8b
	andb	$1, %r8b
	movzbl	%r8b, %r9d
	movslq	%r9d, %rax
	cmpq	$0, %rax
	je	LBB41_17
## %bb.16:
	leaq	L___func__.init_runtime(%rip), %rdi
	leaq	L_.str.14(%rip), %rsi
	leaq	L_.str.36(%rip), %rcx
	movl	$147, %edx
	callq	___assert_rtn
LBB41_17:
	jmp	LBB41_18
LBB41_18:
	movq	_mtk_view@GOTPCREL(%rip), %rax
	movq	(%rax), %rsi
	leaq	L_.str.37(%rip), %rdi
	movb	$0, %al
	callq	_printf
	addq	$128, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	$0, -4(%rbp)
	callq	_init_runtime
	callq	_NSApplication_sharedApplication
	xorl	%ecx, %ecx
	movl	%ecx, %esi
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rdi
	callq	_NSApplication_setActivationPolicy
	movq	_app_delegate@GOTPCREL(%rip), %rdx
	movq	-16(%rbp), %rdi
	movq	(%rdx), %rdx
	movq	%rdx, %rsi
	movb	%al, -17(%rbp)          ## 1-byte Spill
	callq	_NSApplication_setDelegate
	movq	-16(%rbp), %rdi
	movl	$1, %esi
	callq	_NSApplication_activateIgnoringOtherApps
	movq	-16(%rbp), %rdi
	callq	_NSApplication_run
	xorl	%eax, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function NSApplication_sharedApplication
_NSApplication_sharedApplication:       ## @NSApplication_sharedApplication
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	leaq	L_.str.70(%rip), %rdi
	callq	_objc_getClass
	leaq	L_.str.71(%rip), %rdi
	movq	%rax, -8(%rbp)          ## 8-byte Spill
	callq	_sel_getUid
	movq	-8(%rbp), %rdi          ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function NSApplication_setActivationPolicy
_NSApplication_setActivationPolicy:     ## @NSApplication_setActivationPolicy
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.72(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	andb	$1, %al
	movzbl	%al, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function NSApplication_setDelegate
_NSApplication_setDelegate:             ## @NSApplication_setDelegate
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.45(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function NSApplication_activateIgnoringOtherApps
_NSApplication_activateIgnoringOtherApps: ## @NSApplication_activateIgnoringOtherApps
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
                                        ## kill: def $sil killed $sil killed $esi
	movq	%rdi, -8(%rbp)
	andb	$1, %sil
	movb	%sil, -9(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.73(%rip), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movb	-9(%rbp), %cl
	andb	$1, %cl
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	movzbl	%cl, %edx
	callq	_objc_msgSend
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function NSApplication_run
_NSApplication_run:                     ## @NSApplication_run
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	leaq	L_.str.74(%rip), %rdi
	movq	%rax, -16(%rbp)         ## 8-byte Spill
	callq	_sel_getUid
	movq	-16(%rbp), %rdi         ## 8-byte Reload
	movq	%rax, %rsi
	callq	_objc_msgSend
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"alloc"

L_.str.1:                               ## @.str.1
	.asciz	"init"

L_.str.2:                               ## @.str.2
	.asciz	"NSWindow"

L_.str.3:                               ## @.str.3
	.asciz	"Hello from C"

	.comm	_win_delegate,8,3       ## @win_delegate
L_.str.4:                               ## @.str.4
	.asciz	"MTLDevice: %p\n"

	.comm	_mtk_view,8,3           ## @mtk_view
	.comm	_mtl_queue,8,3          ## @mtl_queue
L_.str.5:                               ## @.str.5
	.asciz	"mtl_queue: %p\n"

	.comm	_sem,8,3                ## @sem
L_.str.6:                               ## @.str.6
	.asciz	"sem: %p\n"

L_.str.7:                               ## @.str.7
	.asciz	"windowShouldClose() called\n"

L_.str.8:                               ## @.str.8
	.asciz	"isOpaque() called\n"

L_.str.9:                               ## @.str.9
	.asciz	"canBecomeKeyView() called\n"

L_.str.10:                              ## @.str.10
	.asciz	"acceptsFirstResponser() called\n"

.zerofill __DATA,__bss,_view_drawRect.green,8,3 ## @view_drawRect.green
L_.str.11:                              ## @.str.11
	.asciz	"v16@?0^v8"

	.section	__DATA,__const
	.p2align	3               ## @__block_descriptor_tmp
___block_descriptor_tmp:
	.quad	0                       ## 0x0
	.quad	32                      ## 0x20
	.quad	L_.str.11
	.quad	0

	.p2align	3               ## @__block_literal_global
___block_literal_global:
	.quad	__NSConcreteGlobalBlock
	.long	1342177280              ## 0x50000000
	.long	0                       ## 0x0
	.quad	___view_drawRect_block_invoke
	.quad	___block_descriptor_tmp

	.section	__TEXT,__cstring,cstring_literals
L_.str.12:                              ## @.str.12
	.asciz	"NSObject"

L_.str.13:                              ## @.str.13
	.asciz	"HelloAppDelegate"

L___func__.init_runtime:                ## @__func__.init_runtime
	.asciz	"init_runtime"

L_.str.14:                              ## @.str.14
	.asciz	"hello.c"

L_.str.15:                              ## @.str.15
	.asciz	"app_delegate_class"

L_.str.16:                              ## @.str.16
	.asciz	"applicationDidFinishLaunching:"

L_.str.17:                              ## @.str.17
	.asciz	"v@:@"

L_.str.18:                              ## @.str.18
	.asciz	"applicationShouldTerminateAfterLastWindowClosed:"

L_.str.19:                              ## @.str.19
	.asciz	"B@:@"

	.comm	_app_delegate,8,3       ## @app_delegate
L_.str.20:                              ## @.str.20
	.asciz	"app_delegate"

L_.str.21:                              ## @.str.21
	.asciz	"app_delegate: %p\n"

L_.str.22:                              ## @.str.22
	.asciz	"HelloWinDelegate"

L_.str.23:                              ## @.str.23
	.asciz	"win_delegate_class"

L_.str.24:                              ## @.str.24
	.asciz	"windowShouldClose:"

L_.str.25:                              ## @.str.25
	.asciz	"win_delegate"

L_.str.26:                              ## @.str.26
	.asciz	"win_delegate: %p\n"

L_.str.27:                              ## @.str.27
	.asciz	"MTKView"

L_.str.28:                              ## @.str.28
	.asciz	"HelloMtkView"

L_.str.29:                              ## @.str.29
	.asciz	"mtk_view_class"

L_.str.30:                              ## @.str.30
	.asciz	"isOpaque"

L_.str.31:                              ## @.str.31
	.asciz	"B@:"

L_.str.32:                              ## @.str.32
	.asciz	"canBecomeKeyView"

L_.str.33:                              ## @.str.33
	.asciz	"acceptsFirstResponder"

L_.str.34:                              ## @.str.34
	.asciz	"drawRect:"

L_.str.35:                              ## @.str.35
	.asciz	"v@:{NSRect={CGPoint=dd}{CGSize=dd}}"

L_.str.36:                              ## @.str.36
	.asciz	"mtk_view"

L_.str.37:                              ## @.str.37
	.asciz	"mtk_view: %p\n"

L_.str.38:                              ## @.str.38
	.asciz	"initWithContentRect:styleMask:backing:defer:"

L_.str.39:                              ## @.str.39
	.asciz	"setTitle:"

L_.str.40:                              ## @.str.40
	.asciz	"NSString"

L_.str.41:                              ## @.str.41
	.asciz	"stringWithUTF8String:"

L_.str.42:                              ## @.str.42
	.asciz	"setAcceptsMouseMovedEvents:"

L_.str.43:                              ## @.str.43
	.asciz	"center"

L_.str.44:                              ## @.str.44
	.asciz	"setRestorable:"

L_.str.45:                              ## @.str.45
	.asciz	"setDelegate:"

L_.str.46:                              ## @.str.46
	.asciz	"setPreferredFramesPerSecond:"

L_.str.47:                              ## @.str.47
	.asciz	"setDevice:"

L_.str.48:                              ## @.str.48
	.asciz	"setColorPixelFormat:"

L_.str.49:                              ## @.str.49
	.asciz	"setDepthStencilPixelFormat:"

L_.str.50:                              ## @.str.50
	.asciz	"setSampleCount:"

L_.str.51:                              ## @.str.51
	.asciz	"setAutoResizeDrawable:"

L_.str.52:                              ## @.str.52
	.asciz	"setContentView:"

L_.str.53:                              ## @.str.53
	.asciz	"makeFirstResponder:"

L_.str.54:                              ## @.str.54
	.asciz	"makeKeyAndOrderFront:"

L_.str.55:                              ## @.str.55
	.asciz	"newCommandQueue"

L_.str.56:                              ## @.str.56
	.asciz	"currentRenderPassDescriptor"

L_.str.57:                              ## @.str.57
	.asciz	"colorAttachments"

L_.str.58:                              ## @.str.58
	.asciz	"objectAtIndexedSubscript:"

L_.str.59:                              ## @.str.59
	.asciz	"depthAttachment"

L_.str.60:                              ## @.str.60
	.asciz	"setLoadAction:"

L_.str.61:                              ## @.str.61
	.asciz	"setClearColor:"

L_.str.62:                              ## @.str.62
	.asciz	"setClearDepth:"

L_.str.63:                              ## @.str.63
	.asciz	"commandBuffer"

L_.str.64:                              ## @.str.64
	.asciz	"renderCommandEncoderWithDescriptor:"

L_.str.65:                              ## @.str.65
	.asciz	"endEncoding"

L_.str.66:                              ## @.str.66
	.asciz	"currentDrawable"

L_.str.67:                              ## @.str.67
	.asciz	"presentDrawable:"

L_.str.68:                              ## @.str.68
	.asciz	"addCompletedHandler:"

L_.str.69:                              ## @.str.69
	.asciz	"commit"

L_.str.70:                              ## @.str.70
	.asciz	"NSApplication"

L_.str.71:                              ## @.str.71
	.asciz	"sharedApplication"

L_.str.72:                              ## @.str.72
	.asciz	"setActivationPolicy:"

L_.str.73:                              ## @.str.73
	.asciz	"activateIgnoringOtherApps:"

L_.str.74:                              ## @.str.74
	.asciz	"run"

.subsections_via_symbols
