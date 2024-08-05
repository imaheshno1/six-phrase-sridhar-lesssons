	.file	"demo.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC2:
	.ascii "%d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$64, %esp
	call	___main
	movl	$412316860, %eax
	movl	$1075287556, %edx
	movl	%eax, 56(%esp)
	movl	%edx, 60(%esp)
	fldl	56(%esp)
	fldl	LC1
	fmulp	%st, %st(1)
	fmull	56(%esp)
	fstpl	48(%esp)
	movl	40(%esp), %edx
	movl	44(%esp), %eax
	cmpl	%edx, %eax
	jge	L2
	movl	%edx, %eax
L2:
	movl	32(%esp), %ecx
	movl	36(%esp), %edx
	cmpl	%ecx, %edx
	jge	L3
	movl	%ecx, %edx
L3:
	cmpl	%edx, %eax
	jge	L4
	movl	%edx, %eax
L4:
	movl	%eax, 28(%esp)
	movl	$100, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	$100, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	leave
	ret
	.section .rdata,"dr"
	.align 8
LC1:
	.long	1293080650
	.long	1074340347
	.def	_printf;	.scl	2;	.type	32;	.endef
