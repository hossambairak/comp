	.data
	.text
 
.globl main 
I#.setVar1: 
subu $sp, $sp, 8 
sw $fp, 8($sp) 
sw $ra, 4($sp) 
addiu $fp, $sp, 8 
subu $sp, $sp,8
move $sp, $fp 
lw $ra, -4($fp) 
lw $fp, 0($fp) 
jr $ra 
I#.f1: 
subu $sp, $sp, 8 
sw $fp, 8($sp) 
sw $ra, 4($sp) 
addiu $fp, $sp, 8 
subu $sp, $sp,8
li $t2,0
sw $t2,4($fp)
move $sp, $fp 
lw $ra, -4($fp) 
lw $fp, 0($fp) 
jr $ra 
main: 
subu $sp, $sp, 8 
sw $fp, 8($sp) 
sw $ra, 4($sp) 
addiu $fp, $sp, 8 
subu $sp, $sp,8
li $t2,0
sw $t2,8($fp)
li $t0,2
sw $t0 0($sp) 
addiu $sp $sp -4
li $t0,3
lw $t1 4($sp) 
add $t0,$t1, $t0
addiu $sp $sp 4
sw $t0,8($fp) 
li $t0,2
li  $v0, 1 
move $a0, $t0 
syscall 
li $t0,0
.data 
_string1: .asciiz "press any key to continue.. \n"  
.text 
 li  $v0,4 
la $a0, _string1 
syscall 
li $v0, 8 
syscall 
move $sp, $fp 
lw $ra, -4($fp) 
lw $fp, 0($fp) 
jr $ra 
