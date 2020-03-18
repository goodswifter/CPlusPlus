#include <iostream>
using namespace std;

// 非虚继承：(10 + 10 + 3) * 4 = 23 * 4
// 虚继承：(10 + 2 + 2 + 1) * 4 = 15 * 4
class Person {
public:
	int m_age;
};

class Student : public Person {
public:
	int m_score;
};

class Worker : public Person {
public:
	int m_salary;
};

class Undergraduate : public Student, public Worker {
public:
	int m_grade;
};

int main() {
	Undergraduate ug;
	ug.m_grade = 10;
	ug.m_score = 20;
	ug.m_salary = 20;
	ug.Student::m_age = 40;
	ug.Worker::m_age = 50;

	cout << sizeof(ug) << endl;

	getchar();
	return 0;
}
