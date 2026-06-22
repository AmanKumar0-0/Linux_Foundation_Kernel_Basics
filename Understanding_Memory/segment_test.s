	.file	"segment_test.c"
	.text
	.globl	gvar1
	.bss
	.align 4
	.type	gvar1, @object
	.size	gvar1, 4
gvar1:
	.zero	4
	.globl	gvar2
	.data
	.align 4
	.type	gvar2, @object
	.size	gvar2, 4
gvar2:
	.long	10
	.local	svar1
	.comm	svar1,4,4
	.align 4
	.type	svar2, @object
	.size	svar2, 4
svar2:
	.long	11
	.section	.rodata
	.align 8
.LC0:
	.string	"\ngvar1 = %p , gvar2 = %p , svar1 = %p , svar2 = %p , lvar1 = %p , lvar2 = %p , lvar3 = %p\n"
.LC1:
	.string	"\nsvar3 = %p , svar4 = %p\n"
.LC2:
	.string	"\nfunction = %p , main = %p\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -20(%rbp)
	movl	$111, -16(%rbp)
	movl	$0, %eax
	call	function
	leaq	-20(%rbp), %rdx
	leaq	-12(%rbp), %rax
	pushq	%rax
	leaq	-16(%rbp), %rax
	pushq	%rax
	movq	%rdx, %r9
	leaq	svar2(%rip), %r8
	leaq	svar1(%rip), %rax
	movq	%rax, %rcx
	leaq	gvar2(%rip), %rax
	movq	%rax, %rdx
	leaq	gvar1(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	addq	$16, %rsp
	leaq	svar4.0(%rip), %rax
	movq	%rax, %rdx
	leaq	svar3.1(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	main(%rip), %rax
	movq	%rax, %rdx
	leaq	function(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	call	getchar@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.section	.rodata
.LC3:
	.string	"\n%d + %d = %d"
	.text
	.globl	function
	.type	function, @function
function:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$10, -8(%rbp)
	movl	$100, -4(%rbp)
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	leal	(%rdx,%rax), %ecx
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	function, .-function
	.local	svar3.1
	.comm	svar3.1,4,4
	.data
	.align 4
	.type	svar4.0, @object
	.size	svar4.0, 4
svar4.0:
	.long	1100
	.ident	"GCC: (Ubuntu 13.3.0-6ubuntu2~24.04.1) 13.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
