#include "stdafx.h"
#include "Method.h"
#include "Defs.h"
#include <string>
Method::Method(){
	this->name = new char[255];
	this->name[0] = '\0';
	this->returnType = voidType;
	this->scope = new Scope();
}
Method::~Method(){}
	
void Method::setName(char* n){
	strcat(this->name, n);
}
char* Method::getName(){
	return this->name;
}
void Method::setReturnType(Type t){
	this->returnType = t;
}
void Method::setReturnType(char* t){
	this->returnType1 = t;
}
char* Method::getReturnType1(){
	return this->returnType1;
}

Type Method::getReturnType(){
	return this->returnType;
}
void Method::setScope(Scope* m){
	this->scope = m;
}
void Method::setPrameter(vector<string> params)
{
	this->parameter_list=params;
	
}
vector<string> Method::getParameter(){
	return this->parameter_list;
}
bool Method::check_param_list(vector<string> params)
{
	int x=params.size();
	int y=parameter_list.size();
	if(params.size()==parameter_list.size())
	{
		bool equal=true;
		int i=0;
		while((i<params.size())&&(equal))
		{
			if(params[i].compare(parameter_list[i])!= 0)
			{
				equal=false;
			}
			i=i+1;
		}
		return equal;
	}
	return false;
}

void* Method::get_item()
{
	return this->item;
}
void Method::set_item(void* item1)
{
	item=item1;
}
void Method::set_size(int size){
	this->size=size;
}
int Method::get_size(){
	return size;
}
char* Method::get_class_name(){
	return this->class_name;
}
void Method::set_class_name(char* name){
	this->class_name=name;
}