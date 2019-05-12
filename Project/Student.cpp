#pragma once
#include <iostream>
#include "Interface.h"
#include "Student.h"
using namespace std;
void ViewStudent()
{
	cout << "========== Student ==========\n";
	{
		Student obj("Peter Linh", 1710165, 8.5);
		obj.printNameAddress();
		obj.Print();
		foo(obj);
	}
	cout << "=============================\n\n";
}