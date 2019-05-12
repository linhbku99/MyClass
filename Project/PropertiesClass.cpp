#pragma once
#include <iostream>
#include "Interface.h"
#include "PropertiesClass.h"
using namespace std;
void ViewPropertiesClass()
{
	cout << "========== Properties Class ==========\n";
	{
		BaseClass *ptr = new ChildB();
		if (ptr->type() == 1)
		{
			ChildA *p = (ChildA*)ptr;
			p->dataA = 15;
			cout << p->dataA << endl;
		}
		else if (ptr->type() == 2)
		{
			ChildB * p = (ChildB*)ptr;
			p->dataB = 51;
			cout << p->dataB << endl;
		}
		//instance.encode("encode");
	}
	cout << "======================================\n\n";
}