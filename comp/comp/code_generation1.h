#pragma once
#include <fstream>
#include "AST.h"
class code_generation1
{
public:
	std::ofstream myfile;
	code_generation1(void);
	void generate_code();
	void end();
	void generate_method(TreeNode *tn);
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


