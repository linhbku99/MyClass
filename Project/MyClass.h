#pragma once
#include <iostream>
using namespace std;
class MyClass
{
	int privateValue;
public:
	MyClass();
	MyClass(int _prvtValue, int _pubValue);
	int publicValue;
	void setPrivateValue(int _val);
	int getPrivateValue();
	void printPrivateValueAddress();

	// Toán tử nạp chồng, tạo để so sánh Class
	bool operator>(const MyClass & obj); // Để so sánh
	friend bool operator<(const MyClass & objA, const MyClass & objB);
};
MyClass::MyClass()
{
	this->privateValue = 0;
	this->publicValue = 0;
}
MyClass::MyClass(int _prvtValue, int _pubValue)
{
	this->privateValue = _prvtValue;
	this->publicValue = _pubValue;
}
void MyClass::setPrivateValue(int _val)
{
	this->privateValue = _val;
}
int MyClass::getPrivateValue()
{
	return this->privateValue;
}
void MyClass::printPrivateValueAddress()
{
	cout << "Address privateValue: 0x" << &privateValue << endl;
}
bool MyClass::operator>(const MyClass & obj)
{
	return this->privateValue > obj.privateValue;
}
bool operator<(const MyClass & objA, const MyClass & objB) // Nằm ngoài My Class
{
	return objA.privateValue < objB.privateValue;
}