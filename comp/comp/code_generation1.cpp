#include "code_generation1.h"
#include "AST.h"
#include <iostream>
#include "Symbol_Table.h"
#include <string>
#include "Variable.h"
#include "Method.h"

code_generation1::code_generation1(void)
{
	myfile.open ("test.s");
	myfile <<"\t.data\n\t.text\n main:\n";
}
void code_generation1::end()
{
	myfile.close();
}
void code_generation1::generate_new(char* class_name){
	myfile<<"li $v0,9 \n";
	myfile<<"li $a0,"<<to_string(4*(get_class_size(class_name)+1));
	myfile<<"syscall \n";
}

int code_generation1::get_class_size(char* class_name){
	Interface* I=(Interface*)this->base_st->m->lookup(class_name);
	int size=0;
	while(I)
	{
		Scope* Interface_scope=I->getScope();
		for(int i=0;i<256;i++){
			Variable* v=(Variable*)Interface_scope->m->table[i];
			if(v)
				size++;
		}
		I=I->getInheritedType();
	}
	return size;
}
int code_generation1::get_method_size(char* class_name,char* method_name){
	Implementation* temp_imp=(Implementation*)this->curr_st->m->lookup(class_name);//add # here
	Scope *temp_scope=temp_imp->getScope();
	Method* method=(Method*)this->curr_st->m->lookup(method_name);
	temp_scope=method->getScope();
	int size=0;
	for(int i=0;i<255;i++){
		if(temp_scope->m->table[i])
			size++;
	}
	return size;
}
void generate_object(){
}
void code_generation1::generate_method_call(TreeNode *tn,char* class_name,char* method_name){
	myfile<<"j "<<class_name<<"_"<<method_name;
}
void code_generation1::generate_method(TreeNode *tn,Scope *scope,char* method_name){
	this->curr_st=scope;
	int size=get_method_size(this->curr_class_name,method_name);
	myfile<<"subu $sp, $sp, 8 \n";
	myfile<<"sw $fp, 8($sp) \n";
	myfile<<"sw $ra, 4($sp) \n";
	myfile<<"addiu $fp, $sp, 8 \n";
	myfile<<"subu $sp, $sp,"<<to_string((size+1)*4);
	generate_stmt_list(tn->left);
	myfile<<"move $sp, $fp \n";
	myfile<<"lw $ra, -4($fp) \n";
	myfile<<"lw $fp, 0($fp) \n";
	myfile<<"jr $ra \n";
}
void code_generation1::generate_class(char* class_name,Scope *st){
	this->curr_class_name=class_name;
	for(int i=0;i<255;i++)
	{
		Method *temp_method=(Method*)st->m->table[i];
		if(temp_method)
			generate_method((TreeNode*)temp_method->get_item(),temp_method->getScope(),temp_method->getName());
	}
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
void code_generation1::generate_agrument(TreeNode *tn,int offset){
	generate_expr_code(tn->left);
	int size=-1*((offset)*4);
	myfile<<"subu $sp,$sp,4 \n";
	myfile<<"$t0,4($sp) \n";
	myfile<<"sw t0,"<<to_string(size)<<"($fp)";
}
void code_generation1::generate_argument_list(TreeNode *tn)
{
	int offset=1;
	while(tn)
	{
		generate_agrument(tn->left,offset);
		tn=tn->right;
		offset++;
	}
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
			 myfile << "lw $ra, 0($sp)" << std::endl;
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
		case AsgExpNode:
			generate_expr_code(tn->left);
			generate_assigment(tn);
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
			generate_left_assigment(tn->left);
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
		case IdentNode:
			generate_id(tn);

	}
}
int code_generation1::get_Interface_size(Interface* I){
	Variable* v;
	int size=0;
	for(int i=0;i<256;i++){
		v=(Variable*)I->getScope()->m->table[i];
		if(v)
			size++;
	}
	return size;
}
void code_generation1::generate_id(TreeNode *tn){
	Variable* v=(Variable*)this->curr_st->m->lookup((char*)tn->item);
	if(v){
		myfile<<"lw $t0,"<<to_string(4*(v->getoffset()+1))<<"($fp)";
	}
	else{
		myfile<<"lw $t3,4($fp)";
		Interface* I=(Interface*)this->base_st->m->lookup(this->curr_class_name);
		int size=0;
		while(I){
			v=(Variable*)I->getScope()->m->lookup((char*)tn->item);
			if(v)
				myfile<<"lw $t0,"<<to_string(4*(v->getoffset()+size+1))<<"($t3)";
			else{
				size=size+this->get_Interface_size(I);
			}
			I=I->getInheritedType();
		}
	}
	while(tn->right){
		myfile<<"move $t3,$t0 \n";
		Interface* I=(Interface*)tn->expectedType;
		int size=0;
		bool found=false;
		while((I)&&(!found)){
			v=(Variable*)I->getScope()->m->lookup((char*)tn->item);
			if(v){
				myfile<<"lw $t0,"<<to_string(4*(v->getoffset()+size+1))<<"($t3)";
				found=true;
			}
			else{
				size=size+this->get_Interface_size(I);
			}
			I=I->getInheritedType();
		}
		tn=tn->right;
	}
}
void code_generation1::generate_left_assigment(TreeNode *tn){
	Variable* v=(Variable*)this->curr_st->m->lookup((char*)tn->item);
	if(v){
		if(!tn->right)
			myfile<<"sw $t0,"<<to_string(4*(v->getoffset()+1))<<"($fp)";
		else{
			myfile<<"lw $t1,"<<to_string(4*(v->getoffset()+1))<<"($fp)";
			tn=tn->right;
			while(tn){
				Interface* I=(Interface*)tn->expectedType;
				int size=0;
				bool found=false;
				while((I)&&(!found)){
					v=(Variable*)I->getScope()->m->lookup((char*)tn->item);
					if(v){
						if(tn->right)
							myfile<<"lw $t1,"<<to_string(4*(v->getoffset()+size+1))<<"($t1)";
						else
							myfile<<"sw $t0,"<<to_string(4*(v->getoffset()+size+1))<<"($t1)";
						found=true;
					}
					else{
						size=size+this->get_Interface_size(I);
					}
					I=I->getInheritedType();
				}
				tn=tn->right;
			}
			myfile<<"";
		}
	}
	else{



	}
}
void code_generation1::generate_NSLog(TreeNode* tn){
	myfile<<"li  $v0, 1 \n";
	myfile<<"move $a0, $t1 \n";
	myfile<<"syscall";
}
void code_generation1::generate_read_int(TreeNode *tn){
	myfile<<"li $v0, 5 \n";
	myfile<<"syscall \n";
	myfile<<"move $t2, $v0 \n";
}


