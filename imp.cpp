#include <iostream>
#include "faculty.h"
#include "student.h"

using namespace std;

int main()
{
	student a("Ted" , "Thompson", 22 , "3.91");
	faculty b("Richard" , "Karp" , 45 , 2 , 420);
	a.printStudent();
	b.printFaculty();
	system("pause");
}