#include <iostream>
using namespace std;

struct Person {
	// 成员变量
	int m_id;
	int m_age;
	int m_height;

	// 成员函数
	void display() {
		// this指向Person对象的指针
		// this里面存储的就是Person对象的地址值
		this->m_id = 7;
		this->m_age = 8;
		this->m_height = 9;
	}
};

struct Student {
	// 成员变量
	int m_no;

	// 成员函数
	void study() {
		cout << "study() " << endl;
	}
};

int main() {

	Person person;
	person.m_id = 1;
	person.m_age = 2;
	person.m_height = 3;
	person.display();

	Person person2;
	person2.m_id = 4;
	person2.m_age = 5;
	person2.m_height = 6;
	person2.display();

	//Person person;
	//person.m_id = 10;
	//person.m_age = 20;
	//person.m_height = 30;

	//Person *p = (Person *)&person.m_age;
	//p->m_id = 40;
	//p->m_age = 50;

	//p->display();

	//person.display();

	//Person person;
	//person.m_id = 1;
	//person.m_age = 2;
	//person.m_height = 3;

	//Person *p = &person;
	//p->m_id = 4;
	//p->m_age = 5;
	//p->m_height = 6;

	//cout << "&person is " << &person << endl;
	//cout << "&person.m_id is " << &person.m_id << endl;
	//cout << "&person.m_age is " << &person.m_age << endl;
	//cout << "&person.m_height is " << &person.m_height << endl;

	// 在栈空间分配了内存给person对象
	// 这个person对象的内存会自动回收，不用开发人员去管理
	//Person person;
	//// 访问person对象的成员变量
	//person.m_age = 10;
	//// 调用person对象的成员函数
	//person.display();

	//// 通过指针访问person对象
	//Person *pPerson = &person;
	//pPerson->m_age = 5;
	//pPerson->display();

	getchar();
	return 0;
}

