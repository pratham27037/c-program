#include<iostream>

using namespace std;

struct employee{
	int age;
	string name;
	char grade;
};

union mail{
	int age;
	char bad;
};


int main()
{
//	struct employee emp;
//	emp.age=22;
//	emp.grade='c';
//	emp.name="pratham";
//	cout<<emp.age;
//	cout<<emp.name;
//	cout<<emp.grade;

//	union mail m1;
//	m1.age=22;
//	m1.bad='v';
//	cout<<m1.age;
//	cout<<m1.bad;

enum meal{
	breakfast,
	lunch,
	dinner
};

cout<<lunch;
	return 0;
}
