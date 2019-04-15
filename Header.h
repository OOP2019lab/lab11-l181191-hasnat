#pragma once
#include <string>
#include <iostream>

using namespace std;

class person
{
	string first_name;
	string last_name;

protected:
	int age;

public:
	person(string f , string l , int a)
	{
		first_name = f;
		last_name = l;
		age =a;

		cout << "\n person()\n";
	}
	~person()
	{
		first_name = '0';
		last_name = '0';
		age =0;

		cout << "\n person \n";
	}

	string get_fn(string fn) {return fn;}
	string get_ln(string ln) {return ln;}
	int get_age(int a) {return a;}

	void set_fn(string fn){first_name = fn;}
	void set_ln(string ln){last_name = ln;}
	void set_age(int a){age = a;}

	void printInformation()
	{
		cout << first_name << " " << last_name << " is "<< age << " years old.";
	}
};