	.data
	.text
 
.global I_main: 
I#_setVar1: 
subu $sp, $sp, 8 
sw $fp, 8($sp) 
sw $ra, 4($sp) 
addiu $fp, $sp, 8 
subu $sp, $sp,4
move $sp, $fp 
lw $ra, -4($fp) 
lw $fp, 0($fp) 
jr $ra 
I#_f1: 
subu $sp, $sp, 8 
sw $fp, 8($sp) 
sw $ra, 4($sp) 
addiu $fp, $sp, 8 
subu $sp, $sp,4
li $t2,0
sw $t2,-8($fp)
move $sp, $fp 
lw $ra, -4($fp) 
lw $fp, 0($fp) 
jr $ra 
I#_main: 
subu $sp, $sp, 8 
sw $fp, 8($sp) 
sw $ra, 4($sp) 
addiu $fp, $sp, 8 
subu $sp, $sp,4
li $t2,0
sw $t2,-12($fp)
