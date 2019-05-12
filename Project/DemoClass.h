#pragma warning (disable : 4996)
#pragma once
#include <iostream>
using namespace std;
class DemoClass
{
	static int count;
public:
	DemoClass();
	DemoClass(int _value);
	int value;
	static int getCount();
	~DemoClass();
};

DemoClass::DemoClass()
{
}
int DemoClass::count = 0;
DemoClass::DemoClass(int _value)
{
	this->value = _value;
	DemoClass::count++;
}
int DemoClass::getCount()
{
	return DemoClass::count;
}
DemoClass::~DemoClass()
{
	DemoClass::count--;
}