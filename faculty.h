#pragma once
#include "Header.h"

class faculty : public person
{
	int course_count;
	int tel_num;
public:
	faculty(string fn , string ln , int a , int cn , int tn):person(fn , ln , a)
	{
		course_count = cn;
		tel_num = tn;
		cout << "\n faculty() \n";
	}
	~faculty(void)
	{
		course_count = 0 ;
		tel_num = 0;

		cout << "\n~faculty()\n";
	}

	int get_cc(int cc){return cc;}
	int get_tel(int tel){return tel;}

	void set_cc(int cc){course_count = cc;}
	void set_tel(int tel){tel_num = tel;}

	void printFaculty()
	{
		printInformation();
		cout << "number of courses : " << course_count << " EXT: " << tel_num;
	}
};