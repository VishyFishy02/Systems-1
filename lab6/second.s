.file "second.s"
.section .rodata
.data
.align 8
Array:
.quad 0x6f
.quad 0x84
.quad 0x55
.quad 0x44
.globl main
	.type	main, @function
.text
main:
	pushq %rbp		#stack housekeeping
	movq %rsp, %rbp

	movq $55, %rdx
	movq %rdx, %rbx
	movq $33, %r8
	movq $Array, %rax
	movq %rbx, 8(%rax)
	movq %r8, 24(%rax)
	movq %rax, (%rax)
	movq (%rax), %rcx
	
	leave
	ret

.size	main, .-main
