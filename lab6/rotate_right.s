/*
 * BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
 * TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO
 * THIS ASSIGNMENT.
 *
 * Name: Vishal Kumar
 */

.file "rotate_right.s"
.section .rodata
.data
.globl rotate_right
	.type	rotate_right, @function
.text
rotate_right:
    pushq %rbp          #save caller's rbp
    movq %rsp, %rbp     #set function's frame pointer

    movb %dil, %al    #rdi contains 1st and only param for this function
    sarb $1, %al 	#rdi = (rdi >> 1)
    movb %dil, %cl
    andb $1, %cl	#(rdi & 0x01) << 7);
    salb $7, %cl
    orb  %cl, %al


    leave
    ret
.size rotate_right, .-rotate_right
