	.file	"month_name.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%d\0"
LC1:
	.ascii "January\12\12\12\0"
LC2:
	.ascii "Febraury\12\12\12\0"
LC3:
	.ascii "March\12\12\12\0"
LC4:
	.ascii "April\12\12\12\0"
LC5:
	.ascii "May\12\12\12\0"
LC6:
	.ascii "June\12\12\12\0"
LC7:
	.ascii "July\12\12\12\0"
LC8:
	.ascii "August\12\12\12\0"
LC9:
	.ascii "September\12\12\12\0"
LC10:
	.ascii "October\12\12\12\0"
LC11:
	.ascii "November\12\12\12\0"
LC12:
	.ascii "December\12\12\12\0"
	.align 4
LC13:
	.ascii "Which World Are You From, Welcome to Earth!!!!\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	leal	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_scanf
	movl	28(%esp), %eax
	cmpl	$12, %eax
	ja	L2
	movl	L15(,%eax,4), %eax
	jmp	*%eax
	.section .rdata,"dr"
	.align 4
L15:
	.long	L2
	.long	L3
	.long	L4
	.long	L5
	.long	L6
	.long	L7
	.long	L8
	.long	L9
	.long	L10
	.long	L11
	.long	L12
	.long	L13
	.long	L14
	.text
L3:
	movl	$LC1, (%esp)
	call	_puts
	jmp	L17
L4:
	movl	$LC2, (%esp)
	call	_puts
	jmp	L17
L5:
	movl	$LC3, (%esp)
	call	_puts
	jmp	L17
L6:
	movl	$LC4, (%esp)
	call	_puts
	jmp	L17
L7:
	movl	$LC5, (%esp)
	call	_puts
	jmp	L17
L8:
	movl	$LC6, (%esp)
	call	_puts
	jmp	L17
L9:
	movl	$LC7, (%esp)
	call	_puts
	jmp	L17
L10:
	movl	$LC8, (%esp)
	call	_puts
	jmp	L17
L11:
	movl	$LC9, (%esp)
	call	_puts
	jmp	L17
L12:
	movl	$LC10, (%esp)
	call	_puts
	jmp	L17
L13:
	movl	$LC11, (%esp)
	call	_puts
	jmp	L17
L14:
	movl	$LC12, (%esp)
	call	_puts
	jmp	L17
L2:
	movl	$LC13, (%esp)
	call	_printf
L17:
	leave
	ret
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
