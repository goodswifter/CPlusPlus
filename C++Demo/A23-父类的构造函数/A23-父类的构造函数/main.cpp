#include <iostream>
using namespace std;

//class Person {
//	int m_age;
//public:
//	Person() {
//		cout << "Person()" << endl;
//	}
//	Person(int age) :m_age(age) {
//		cout << "Person(int age)" << endl;
//	}
//};
//
//class Student : public Person {
//	int m_score;
//public:
//	Student() {
//		cout << "Student()" << endl;
//	}
//	Student(int age, int score) :m_score(score), Person(age) {
//		cout << "Student(int age, int score)" << endl;
//	}
//};

class Person {
	int m_age;
public:
	Person(int age) :m_age(age) {
		cout << "Person(int age)" << endl;
	}
};

class Student : public Person {
	int m_score;
public:
	// 如果父类缺少无参构造函数，子类的构造函数必须显式调用父类的有参构造函数
	Student() :Person(0) {
		cout << "Student()" << endl;
	}
};

int main() {

	// 子类的构造函数默认会调用父类的无参构造函数
	//Student  stu;

	Student stu2;

	getchar();
	return 0;
}
