#pragma once
void ViewMyClass();
void ViewStudent();
void ViewDemoClass();
void ViewPropertiesClass();
class InterfaceA
{
public:
	virtual void MethodA1() = 0;
	virtual void MethodA2() = 0;
};
class InterfaceB
{
public:
	virtual void MethodB1() = 0;
	virtual void MethodB2() = 0;
};
