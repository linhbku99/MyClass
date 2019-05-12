#pragma warning (disable : 4996)
#pragma once
#include <iostream>
using namespace std;
class Student
{
	char *name;
	float GPA;
	int ID;
public:
	Student();
	Student(const Student &obj);
	Student(const char * _name, int _id, float _gpa);
	void Print();
	void printNameAddress();
	~Student();
};

Student::Student()
{
	this->name = new char[255];
	this->ID = 0;
	this->GPA = 0;
}
Student::Student(const char * _name, int _id, float _gpa)
{
	this->name = new char[strlen(_name) + 1];
	strcpy(this->name, _name);
	this->GPA = _gpa;
	this->ID = _id;
}
Student::Student(const Student &obj)
{
	this->name = new char[strlen(obj.name) + 1];
	strcpy(this->name, obj.name);
	this->GPA = obj.GPA;
	this->ID = obj.ID;
}
void Student::Print()
{
	cout << "=== Infomation Student ===\n";
	cout << "Name: " << this->name << endl;
	cout << "ID: " << this->ID << endl;
	cout << "GPA: " << this->GPA << endl;
	cout << "==========================\n";
}

void Student::printNameAddress()
{
	cout << "Name Address: 0x" << &this->name << endl;
}

void foo(Student s)
{
	s.printNameAddress();
	s.Print();
}

Student::~Student()
{
	delete[] this->name;
	cout << "--> Delete Memory Student." << endl;
}