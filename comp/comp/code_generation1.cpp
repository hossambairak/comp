#include "code_generation1.h"
#include "AST.h"
#include <iostream>
#include <string>
#include "Variable.h"

code_generation1::code_generation1(void)
{
	myfile.open ("test.s");
	myfile <<"\t.data\n\t.text\n main:\n";
	//myfile.close();
}
void code_generation1::end()
{
	myfile.close();
}
void code_generation1::generate_method(TreeNode *tn){


}
void code_generation1::generate_code()
{
	myfile <<"\t.data\n\t.text\n main:";
}
void code_generation1::store_value()
{
	myfile << "sw $t0 (0)$sp \n";
}
void code_generation1::load_value()
{
	myfile << "lw $t1 (4)$sp \n";
}
void code_generation1::increase_sp()
{
	myfile << "addiu $sp $sp 4\n";
}
void code_generation1::decrease_sp()
{
	myfile << "addiu $sp $sp -4\n";
}
int code_generation1::get_var_offset(TreeNode *tn)
{
	Variable *v=(Variable*)tn->item;	
	return v->getoffset()*4;
}
void code_generation1::generate_condition(TreeNode *tn)
{
}
void code_generation1::generate_if(TreeNode *tn)
{
	tn->nodeType;
	generate_logic_expr_code(tn->left);
	myfile<<"beq $t0,$1,if_label"<< std::endl;
	myfile<<"jmp end_if"<< std::endl;
	myfile<<"if_label:"<< std::endl;
	generate_stmt_list(tn->right);
	myfile<<"end_if:"<< std::endl;
}
void code_generation1::generate_if_else(TreeNode *tn)
{
	generate_logic_expr_code(tn->left);
	myfile<<"beq $t0,$1,if_label"<< std::endl;
	generate_stmt_code(tn->right->right);
	myfile<<"jmp end_if"<< std::endl;
	myfile<<"if_label:"<< std::endl;
	generate_stmt_code(tn->right->left);
	myfile<<"end_if:"<< std::endl;
}
void code_generation1::generate_while(TreeNode *tn)
{
	myfile<<"while_label:"<< std::endl;
	generate_logic_expr_code(tn->left);
	myfile<<"beq $t0,$0,end_while"<< std::endl;
	generate_stmt_code(tn->right);
	myfile<<"jmp while_label"<< std::endl;
	myfile<<"end_while:"<< std::endl;
}
void code_generation1::generate_assigment(TreeNode *tn)
{
	int offset=get_var_offset(tn);
	myfile<<"lw $t2,("<<std::to_string(offset)<<")$fp"<< std::endl;
	myfile<<"move $t2,$t0"<< std::endl;
	myfile<<"sw $t2,("<<std::to_string(offset)<<")$fp"<< std::endl;
}
void code_generation1::generate_declaration(TreeNode *tn)
{
	int offset=get_var_offset(tn);
	myfile<<"li $t2,0"<< std::endl;
	myfile<<"sw $t2,("<<std::to_string(offset)<<")$fp"<< std::endl;
}
void code_generation1::generate_stmt_list(TreeNode *tn)
{
	while(tn)
	{
		generate_stmt_code(tn->left);
		tn=tn->right;
	}
}
void code_generation1::generate_stmt_code(TreeNode * tn)
{
	switch(tn->nodeType)
	{
		case if_Node:
			generate_if(tn);
			break;
		case if_else_Node:
			generate_if_else(tn);
			break;
		case WhileNode:
			generate_while(tn);
			break;
		case ReturnNode:
			 myfile << "lw $ra, (0)$sp" << std::endl;
             myfile << "addi $sp, $sp, " << std::endl;
             myfile << "jr $ra" << std::endl;
			break;
		case variable_declaration_node:
			generate_declaration(tn);
			break;
		case variable_assigment_node:
			generate_expr_code(tn->left);
			generate_assigment(tn);
			break;
		case BlockNode:
			generate_stmt_list(tn->left);
			break;
		default:
			generate_expr_code(tn);
	}
}
void code_generation1::generate_logic_expr_code(TreeNode * tn)
{

	switch(tn->nodeType)
	{
		case LESS_THAN_Node:
			generate_logic_expr_code(tn->left);
			store_value();
			decrease_sp();
			generate_logic_expr_code(tn->right);
			load_value();
			myfile << "slt $t0, $t0, $t1" << std::endl;
			increase_sp();
			break;
		case MORE_THAN_Node:
			generate_logic_expr_code(tn->left);
			store_value();
			decrease_sp();
			generate_logic_expr_code(tn->right);
			load_value();
			myfile << "slt $t0, $t1, $t0" << std::endl; 
			increase_sp();
			break;
		case LESS_EQUAL_Node:
			generate_logic_expr_code(tn->left);
			store_value();
			decrease_sp();
			generate_logic_expr_code(tn->right);
			load_value();
			myfile << "slt $t0, $t1, $t0" << std::endl;
            myfile << "xori $t0, 1" << std::endl;
			increase_sp();
			break;
		case MORE_EQUAL_Node:
			generate_logic_expr_code(tn->left);
			store_value();
			decrease_sp();
			generate_logic_expr_code(tn->right);
			load_value();
			 myfile << "slt $t0, $t0, $t1" << std::endl;
             myfile << "xori $t0, 1" << std::endl;
			 increase_sp();
			break;
	}
}
void code_generation1::generate_expr_code(TreeNode *tn)
{
	switch(tn->nodeType)
	{
		case AsgExpNode:
			generate_expr_code(tn->right);
			generate_assigment(tn->left);
			break;
		case intNode:
			myfile <<"li $t0,"<<std::to_string((int)tn->item)<<"\n";
			break;
		case SmpExpPlusNode:
			generate_expr_code(tn->left);
			store_value();
			decrease_sp();
			generate_expr_code(tn->right);
			load_value();
			myfile << "add $t0,$t1, $t0" << std::endl;
			increase_sp();
			break;
		case SmpExpMinusNode:
			generate_expr_code(tn->left);
			store_value();
			decrease_sp();
			generate_expr_code(tn->right);
			load_value();
			myfile << "add $t0, $t1, $t0" << std::endl;
			increase_sp();
			break;
		case SmpExpMultiNode:
			generate_expr_code(tn->left);
			store_value();
			decrease_sp();
			generate_expr_code(tn->right);
			load_value();
			myfile << "add $t0, $t1, $t0" << std::endl;
			increase_sp();
			break;
		case SmpExpDivNode:
			break;
	}
}
