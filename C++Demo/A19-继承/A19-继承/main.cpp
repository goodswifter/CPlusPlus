#include <iostream>
using namespace std;

struct Person {
	int m_age;
};

struct Student : Person {
	int m_no;
};

struct GoodStudent : Student {
	int m_money;
};

int main() {
	// 12
	GoodStudent gs;
	gs.m_age = 20;
	gs.m_no = 1;
	gs.m_money = 2000;

	cout << &gs << endl;
	cout << &gs.m_age << endl;
	cout << &gs.m_no << endl;
	cout << &gs.m_money << endl;

	// 4
	Person person;

	// 8
	Student stu;

	cout << sizeof(Person) << endl;
	cout << sizeof(Student) << endl;
	cout << sizeof(GoodStudent) << endl;

	getchar();
	return 0;
}