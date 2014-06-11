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
	std::ofstream myfile;
	int string_num;
	code_generation1(string main);
	void generate_code(Scope *st);
	void end();
	void generate_string(char* s);
	void generate_new(char *class_name);
	void generate_id(TreeNode *tn);
	void generate_left_assigment(TreeNode *tn);
	void generate_NSLog(TreeNode* tn);
	void search_in_classes(TreeNode* tn);
	void generate_read_int(TreeNode *tn);
	int get_class_size(char* class_name);
	int get_Interface_size(Interface* I);
	int get_method_size(char* class_name,char* method_name);
	void generate_class(char* class_name,Scope* st);
	void generate_method(TreeNode *tn,Scope *scope,char* method_name);
	void generate_message(TreeNode* tn);
	void generate_sender(TreeNode* tn);
	void generate_method_call(TreeNode *tn);
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


