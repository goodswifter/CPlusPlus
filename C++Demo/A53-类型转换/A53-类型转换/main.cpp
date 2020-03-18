#include <iostream>
using namespace std;

class Person {
public:
	int m_age;
	virtual void run() {}
};

class Student : public Person {
public:
	int m_score;
};

class Car {

};

// 1. const_cast
void test1const_cast() {
	const Person *p1 = new Person();
	Person *p2 = const_cast<Person *>(p1);
	// 也可以直接转 == const_cast<Person *>
	Person *p3 = (Person *)(p1);

	p2->m_age = 20;
	p3->m_age = 30;

	cout << p1->m_age << endl;
}

// 2. dynamic_cast
void test2dynamic_cast() {
	Person *p1 = new Person();
	Person *p2 = new Student();

	/*Student *stu1 = (Student *) p1;
	Student *stu2 = (Student *) p2;
	Car *car = (Car *) p2;*/

	Student *stu1 = dynamic_cast<Student *>(p1);
	Student *stu2 = dynamic_cast<Student *>(p2);
	Car *car = dynamic_cast<Car *>(p2);

	cout << stu1 << endl;
	cout << stu2 << endl;
	cout << car << endl;
}

// 3. static_cast
void test3static_cast() {
	Person *p1 = new Person();
	Person *p2 = new Student();

	Student *stu1 = static_cast<Student *>(p1);
	Student *stu2 = static_cast<Student *>(p2);

	int i = 10;
	double d = i;

	cout << stu1 << endl;
	cout << stu2 << endl;
}

// 4. reinterpret_cast
void test4reinterpret_cast() {
	// 4.1 C语言转换
	// 0a 00 00 00
	//int a = 10;

	//// 浮点数是以科学计数的方式存储的
	//// 00 00 00 00 00 00 24 40
	//double d1 = (double)a;
	//double d2 = double(a);

	//cout << d1 << endl;
	//cout << d2 << endl;

	// 4.2 对象转换
	//Person *p1 = new Person();
	//Person *p2 = new Student();

	//Student *stu1 = reinterpret_cast<Student *>(p1);
	//Student *stu2 = reinterpret_cast<Student *>(p2);
	//Car *car = reinterpret_cast<Car *>(p2);

	//cout << p1 << endl;
	//cout << p2 << endl;
	//cout << p2 << endl;

	//cout << stu1 << endl;
	//cout << stu2 << endl;
	//cout << car << endl;

	// 4.3 int -> double 
	// 注意： 类型不同时，要使用引用 reinterpret_cast<type &>
	// 0a 00 00 00
	//int i = 10;
	//// 0a 00 00 00 cc cc cc cc 
	//double d = reinterpret_cast<double &>(i);
	//cout << i << endl;
	//cout << d << endl;

	// 4.4 地址的强制赋值
	//int *p = reinterpret_cast<int *>(100);
	//int i = reinterpret_cast<int>(p);
}

int main() {
	
	test4reinterpret_cast();

	getchar();
	return 0;
}