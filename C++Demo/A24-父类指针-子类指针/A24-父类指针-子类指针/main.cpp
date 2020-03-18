#include <iostream>
using namespace std;

class Person {
public:
	int m_age;
};

// Student是一个Person
class Student : public Person {
public:
	int m_score;
};

int main() {

	// 学生是一个人
	Person *stu = new Student();
	stu->m_age = 10;

	// 子类指针指向父类对象是不安全的
	Student *p = (Student *)new Person();
	p->m_age = 20;
	p->m_score = 100;

	cout << p->m_age << endl;

	getchar();
	return 0;
}
