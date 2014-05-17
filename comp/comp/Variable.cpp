#include "stdafx.h"
#include "Variable.h"
#include "Symbol_Table.h"
#include <string>

Variable::Variable(){
	this->name = new char[255];
	this->name[0] = '\0';
	kind=0;
}
Variable::~Variable(){}
void Variable::setName(char* n){
	strcat(this->name, n);
}
char* Variable::getName(){
	return this->name;
}
void Variable::setType(Type t){
	this->type = t;
}
void Variable::settype1(void* t)
{
	this->type1=t;
}
Type Variable::getType(){
	return this->type;
}
void* Variable::getType1()
{
	return this->type1;
}
void* Variable::getValue()
{
	return this->value;
}
void Variable::setValue(void* value1)
{
	this->value=value1;
}
int Variable::getkind()
{
	return kind;
}
void Variable::setKind(int kind)
{
	this->kind=kind;
}
void Variable::setDataModifier(DataModifier * dm){
	this->dataModifier = dm;
}

DataModifier * Variable::getDataModifier(){
	return this->dataModifier;
}
void Variable::setsSpecifier(int x)
{
	this->accessSpecifier=static_cast<AccessSpecifier>(x);
}
int Variable::getSpecifier()
{
	return this->accessSpecifier;
}
void Variable::setoffset(int x)
{
	this->offset=x;
}
int Variable::getoffset()
{
	return this->offset;
}
int Variable::get_size(Symbol_Table *s){
	if(type<6)
		return 4;
	else
	{
		int size=0;
		char* inhertance=(char*)type1;
		while(inhertance){
			Interface* inhert_interface=(Interface*)s->currScope->m->lookup(inhertance);
			size+=inhert_interface->get_size()+4;
			inhertance=inhert_interface->getInheritedType()->getName();
		}
		return size;
	}
}