#pragma once
#include "Header.h"

class student : public person
{
	string fyp;
public:
	student(string fn , string ln , int a , string cg):person(fn , ln ,a)
	{
		fyp = cg;
		cout << "\n Student()\n";
	}
	~student()
	{
		fyp = '0';
		cout << "~student";
	}

	string get_fyp(string f){return f;}
	void set_fyp(string f){fyp= f;}
	void printStudent()
	{
		printInformation();
	    cout << " years old, his CGPA is " << fyp;
	}
};

