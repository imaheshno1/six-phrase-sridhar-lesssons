	.file	"strong_ro.c"
	.text
	.globl	_factorial
	.def	_factorial;	.scl	2;	.type	32;	.endef
_factorial:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$16, %esp
	movl	8(%ebp), %eax
	movl	%eax, -8(%ebp)
	movl	$1, -4(%ebp)
	jmp	L2
L3:
	movl	-4(%ebp), %eax
	imull	-8(%ebp), %eax
	movl	%eax, -4(%ebp)
	decl	-8(%ebp)
L2:
	cmpl	$0, -8(%ebp)
	jne	L3
	leave
	ret
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "sum = %d\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$145, 20(%esp)
	movl	20(%esp), %eax
	movl	%eax, 24(%esp)
	movl	$0, 28(%esp)
	jmp	L5
L6:
	movl	24(%esp), %eax
	movl	$10, %ecx
	cltd
	idivl	%ecx
	movl	%edx, 16(%esp)
	movl	16(%esp), %eax
	movl	%eax, (%esp)
	call	_factorial
	addl	%eax, 28(%esp)
	movl	24(%esp), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	movl	%edx, %ecx
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, 24(%esp)
L5:
	cmpl	$0, 24(%esp)
	jne	L6
	movl	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	ret
	.def	_printf;	.scl	2;	.type	32;	.endef
