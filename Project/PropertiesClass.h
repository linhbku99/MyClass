#pragma warning (disable : 4996)
#pragma once
#include <iostream>
#include "Interface.h"
using namespace std;
class SecuredMessage
{
	int id = 15;
public:
	SecuredMessage();
	char * content;
	virtual void encode(const char * _input) = 0;
	virtual void decode(char *& _container) = 0;
};

SecuredMessage::SecuredMessage()
{
	cout << "Constructor class cha." << endl;
}

class A : public SecuredMessage //A kế thừa securedMessage (public)
{
public:
	A();
	void encode(const char * _input);
	void decode(char *& _container);
};
A::A()
{
	cout << "Constructor class con." << endl;
}
void A::encode(const char * _input)
{
	cout << "Phuong thuc encode: " << _input << endl;
}
void A::decode(char *& _container)
{
	cout << "Phuong thuc decode. " << endl;
}

class C : public InterfaceA, public InterfaceB //đa thừa kế
{
public:
	void MethodA1() {};
	void MethodA2() {};
	void MethodB1() {};
	void MethodB2() {};
};

class BaseClass
{
public:
	int data = 0;
	virtual void method();
	virtual int type() = 0;
};
void BaseClass::method()
{
	cout << "method of base class." << endl;
}
class ChildA : public BaseClass
{
public:
	int dataA = 1;
	void method();
	int type();
};
int ChildA::type()
{
	return 1;
}
void ChildA::method()
{
	cout << "method of class a." << endl;
}
class ChildB : public BaseClass
{
public:
	int dataB = 2;
	void method();
	int type();
};
int ChildB::type()
{
	return 2;
}
void ChildB::method()
{
	cout << "method of class b." << endl; 
}