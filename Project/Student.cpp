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
		cout << "Old ID: " << obj.newID << endl;
		cout << "Old ID: " << obj.getID() << endl;
		int *c = (int*)(((char*)&obj) + 8);
		*c = 9876543;
		cout << "New ID: " << obj.getID() << endl;
		foo(obj);
	}
	cout << "=============================\n\n";
}