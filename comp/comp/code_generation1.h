#pragma once
#include <fstream>
#include "AST.h"
#include "Symbol_Table.h"
#include <string>
#include "Method.h"
class code_generation1
{
public:
	Scope *base_st;
	Scope *curr_st;
	char* curr_class_name;
	string class_name;
	std::ofstream myfile;
	code_generation1(void);
	void generate_code();
	void end();
	void generate_new();
	int get_method_size(char* class_name,char* method_name);
	void generate_class(char* class_name,Scope* st);
	void generate_method(TreeNode *tn,Scope *scope);
	void generate_method_call(TreeNode *tn,char* class_name,char* method_name);
	void generate_agrument(TreeNode *tn,int offset);
	void generate_argument_list(TreeNode *tn);
	void generate_expr_code(TreeNode *tn);
	void generate_assign(TreeNode *tn);
	void generate_logic_expr_code(TreeNode * tn);
	void generate_stmt_code(TreeNode *tn);
	void generate_stmt_list(TreeNode *tn);
	void generate_condition(TreeNode *tn);
	void generate_if(TreeNode *tn);
	void generate_if_else(TreeNode *tn);
	void generate_while(TreeNode *tn);
	void generate_assigment(TreeNode *tn);
	void generate_declaration(TreeNode *tn);
	int  get_var_offset(TreeNode *tn);
	void load_value();
	void store_value();
	void increase_sp();
	void decrease_sp();
};


