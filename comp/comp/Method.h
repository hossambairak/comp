#pragma once
#include "Defs.h"
#include "Scope.h"
#include "AST.h"
#include <vector>
class Method
{
private:
	char* name;
	Type returnType;
	char* returnType1;
	Scope * scope;
	char* class_name;
	int size;
	vector<string> parameter_list; 
	void *item;
public:

	Method();
	~Method();
	void setName(char* n);
	char* getName();
	void setReturnType(Type t);
	void setReturnType(char* t);
	char* getReturnType1();
	Type getReturnType();	
	void setScope(Scope* m);
	Scope* getScope();
	void setPrameter(vector<string> params);
	vector<string> getParameter();
	bool check_param_list(vector<string> params);
	void* get_item();
	void set_item(void* item);
	void set_size(int size);
	int get_size();
	char *get_class_name();
	void set_class_name(char* name);
};

