/*
 * BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
 * TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO
 * THIS ASSIGNMENT.
 *
 * Name: Vishal Kumar
 */

.file "create_key.s"
.section .rodata
PR_1:
.string "enter 4-bit key:  "
.data
.globl create_key
	.type	create_key, @function
.text
create_key:
    pushq %rbp          #save caller's rbp
    movq %rsp, %rbp     #set function's frame pointer

    # no parameters have been passed, can use rdi and rdx freely

    movq $PR_1, %rdi 	#string to print out
    movq $0, %rax 	#print out the string
    call printf

    movl $0, %edx       #initilize the key to 0

    pushq %rdx
    call getchar
    popq %rdx
    # rax will either be ascii 1(49) or 0(48) thus let's subtract 48 to convert it to 1 or 0
    subl $48, %eax
    # algorithm to set the first 4  bits of the key
    sall $1, %edx
    orl %eax, %edx

    pushq %rdx
    call getchar
    popq %rdx
    subl $48, %eax
    sall $1, %edx
    orl %eax, %edx

    pushq %rdx
    call getchar
    popq %rdx
    subl $48, %eax
    sall $1, %edx
    orl %eax, %edx

    pushq %rdx
    call getchar
    popq %rdx
    subl $48, %eax
    sall $1, %edx
    orl %eax, %edx

    # now to copy the four bits to make the 8 bit key
    movl %edx, %eax
    sall $4, %eax
    orl %edx, %eax

    leave
    ret
.size create_key, .-create_key
