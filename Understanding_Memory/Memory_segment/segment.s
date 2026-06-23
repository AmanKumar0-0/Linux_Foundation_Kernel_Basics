	.file	"segment.c"
	.text
	.globl	global_initialized
	.data
	.align 4
	.type	global_initialized, @object
	.size	global_initialized, 4
global_initialized:
	.long	100
	.globl	global_uninitialized
	.bss
	.align 4
	.type	global_uninitialized, @object
	.size	global_uninitialized, 4
global_uninitialized:
	.zero	4
	.globl	str_literal
	.section	.rodata
.LC0:
	.string	"hello"
	.section	.data.rel.local,"aw"
	.align 8
	.type	str_literal, @object
	.size	str_literal, 8
str_literal:
	.quad	.LC0
	.section	.rodata
	.align 8
.LC1:
	.string	"==== Memory Segment Addresses ====\n"
.LC2:
	.string	"TEXT (main function):\t%p\n"
.LC3:
	.string	"TEXT (string literal):\t%p\n"
	.align 8
.LC4:
	.string	"DATA (global initialized):\t%p\n"
	.align 8
.LC5:
	.string	"DATA (global uninitialized):\t%p\n"
.LC6:
	.string	"HEAP (malloc pointer):    %p\n"
	.align 8
.LC7:
	.string	"STACK (local variable):    %p\n"
.LC8:
	.string	"\nPID: %d\n"
	.align 8
.LC9:
	.string	"Print ENTER to view /proc/PID/maps......"
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
	movl	$42, -20(%rbp)
	movl	$4, %edi
	call	malloc@PLT
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movl	$100, (%rax)
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	main(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	str_literal(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	global_initialized(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	global_uninitialized(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	call	getpid@PLT
	movl	%eax, %esi
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
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
