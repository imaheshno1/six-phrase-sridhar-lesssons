	.file	"arguments.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Arguments count is : %d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	8(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	$0, 28(%esp)
	jmp	L2
L3:
	movl	28(%esp), %eax
	leal	0(,%eax,4), %edx
	movl	12(%ebp), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, (%esp)
	call	_puts
	incl	28(%esp)
L2:
	movl	28(%esp), %eax
	cmpl	8(%ebp), %eax
	jl	L3
	movl	$0, 28(%esp)
	jmp	L4
L5:
	movl	28(%esp), %eax
	leal	0(,%eax,4), %edx
	movl	16(%ebp), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, (%esp)
	call	_puts
	incl	28(%esp)
L4:
	movl	28(%esp), %eax
	leal	0(,%eax,4), %edx
	movl	16(%ebp), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	testl	%eax, %eax
	jne	L5
	movl	$0, %eax
	leave
	ret
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
