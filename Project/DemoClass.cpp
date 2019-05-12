#pragma once
#include <iostream>
#include "Interface.h"
#include "DemoClass.h"
using namespace std;
void ViewDemoClass()
{
	cout << "========== Demo Class ==========\n";
	{
		DemoClass instance1(15);
		cout << "Existing object: " << DemoClass::getCount() << endl;
		DemoClass instance2(95);
		cout << "Existing object: " << DemoClass::getCount() << endl;
		cout << "Address instance 1 [value]: 0x" << &instance1.value << endl;
		cout << "Address instance 2 [value]: 0x" << &instance2.value << endl;
	}
	cout << "Existing object: " << DemoClass::getCount() << endl;
	cout << "================================\n\n";
}