#include <iostream>
using namespace std;

//struct Person {
//	int m_age;
//	int m_height;
//
//	Person():Person(0, 0) {
//		cout << "Person() " << this << endl;
//
//		// 直接调用构造函数，会创建一个临时对象，传入一个临时的地址值给this指针
//		 //Person(0, 0);
//	}
//
//	//Person() :Person(0, 0) { }
//	Person(int age, int height) :m_age(age), m_height(height) { }
//
//	/*Person(int age, int height) {
//		cout << "Person(int age, int height) " << this << endl;
//
//		this->m_age = age;
//		this->m_height = height;
//	}*/
//
//	void display() {
//		cout << "m_age is " << this->m_age << endl;
//		cout << "m_height is " << this->m_height << endl;
//	}
//};

struct Person {
	int m_age;
	int m_height;

	Person(int age, int height) :m_height(height), m_age(m_height) {
	//Person(int age, int height) {
		// 初始化列表赋值的顺序是成员变量的顺序
		//this->m_age = m_height;
		//this->m_height = height;
	}
};

int main() {

	Person p(20, 180);

	cout << p.m_age << endl;
	cout << p.m_height << endl;
	//Person person;
	//person.display();

	getchar();
	return 0;
}
