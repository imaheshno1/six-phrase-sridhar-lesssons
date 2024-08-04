	.file	"macro_max.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%d %d %d %d\0"
LC1:
	.ascii "Big = %d\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$64, %esp
	call	___main
	leal	44(%esp), %eax
	movl	%eax, 16(%esp)
	leal	48(%esp), %eax
	movl	%eax, 12(%esp)
	leal	52(%esp), %eax
	movl	%eax, 8(%esp)
	leal	56(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_scanf
	movl	44(%esp), %eax
	movl	48(%esp), %edx
	cmpl	%edx, %eax
	jge	L2
	movl	%edx, %eax
L2:
	movl	52(%esp), %edx
	movl	56(%esp), %ecx
	cmpl	%ecx, %edx
	jge	L3
	movl	%ecx, %edx
L3:
	cmpl	%edx, %eax
	jge	L4
	movl	%edx, %eax
L4:
	movl	%eax, 60(%esp)
	movl	60(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	leave
	ret
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
