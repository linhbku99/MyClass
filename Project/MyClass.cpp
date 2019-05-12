#pragma once
#include <iostream>
#include "Interface.h"
#include "MyClass.h"
using namespace std;
void ViewMyClass()
{
	cout << "========== My Class ================\n";
	MyClass instance(20, 30);
	cout << "Private value: " << instance.getPrivateValue() << endl;
	cout << "Public value: " << instance.publicValue << endl;
	cout << "Address instance: 0x" << &instance << endl;
	cout << "Address publicValue: 0x" << &instance.publicValue << endl;
	instance.printPrivateValueAddress();
	cout << "===================================\n";
	MyClass A(10, 20), B(5, 6);
	if (A > B)
	{
		cout << "Private Value: A > B \n";
	}
	else
	{
		cout << "Private Value: A !> B \n";
	}
	cout << "===================================\n\n";
}