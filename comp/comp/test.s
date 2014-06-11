	.data
	.text
 
.globl main 
I.setVar1: 
subu $sp, $sp, 8 
sw $fp, 8($sp) 
sw $ra, 4($sp) 
addiu $fp, $sp, 8 
subu $sp, $sp,8
move $sp, $fp 
lw $ra, -4($fp) 
lw $fp, 0($fp) 
jr $ra 
I.f1: 
subu $sp, $sp, 8 
sw $fp, 8($sp) 
sw $ra, 4($sp) 
addiu $fp, $sp, 8 
subu $sp, $sp,4
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
sw $t2,4($fp)
lw $t0,4($fp) 
sw $t0 0($sp) 
addiu $sp $sp -4
li $t0,2
lw $t1 4($sp) 
seq $t0, $t0, $t1
addiu $sp $sp 4
beq $t0,1,if_label
.data 
_string1: .asciiz " no"  
.text 
 la $t0,_string1 
li  $v0,4 
move $a0,$t0 
syscall 
li $t0,0
j end_if
if_label:
.data 
_string2: .asciiz " yes"  
.text 
 la $t0,_string2 
li  $v0,4 
move $a0,$t0 
syscall 
li $t0,0
end_if:
.data 
_string3: .asciiz " press enter to continue..."  
.text 
 li  $v0,4 
la $a0, _string3
syscall 
li $v0, 8 
syscall 
move $sp, $fp 
lw $ra, -4($fp) 
lw $fp, 0($fp) 
jr $ra 
