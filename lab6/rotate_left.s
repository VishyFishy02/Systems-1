/*
 * BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
 * TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO
 * THIS ASSIGNMENT.
 *
 * Name: Vishal Kumar
 */

.file "rotate_left.s"
.section .rodata
.data
.globl rotate_left
	.type	rotate_left, @function
.text
rotate_left:
    pushq %rbp          #save caller's rbp
    movq %rsp, %rbp     #set function's frame pointer

    movb  %dil, %al    #rdi contains 1st and only param for this function
    shlb $1, %al
    movb   %dil, %r8b
    andb $128, %r8b
    shrb $7, %r8b
    orb %r8b, %al
#    rol $1, %al
    leave
    ret
.size rotate_left, .-rotate_left
