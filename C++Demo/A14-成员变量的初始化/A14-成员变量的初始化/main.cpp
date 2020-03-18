#include <iostream>
using namespace std;

struct Person {
	int m_age;
	int m_height;

	Person() {
		memset(this, 0, sizeof(Person));
	}
};

// 全局区（成员变量初始化为0）
Person g_person;

int main() {
	// 栈空间（成员变量没有初始化）
	Person person;

	// 堆空间
	Person *p1 = new Person; // 成员变量没有初始化
	Person *p2 = new Person(); // 成员变量初始化为0
	Person *p3 = new Person[3]; // 成员变量没有初始化
	Person *p4 = new Person[3](); // 3个Person对象的成员变量都初始化为0
	Person *p5 = new Person[3]{}; // 3个Person对象的成员变量都初始化为0
	Person *p6 = new Person{ 2 }; // Person的首元素初始化为2，其他都初始化为0

	cout << "g_person " << g_person.m_age << endl;
	//cout << "person " << person.m_age << endl;
	cout << "p1 " << p1->m_age << endl;
	cout << "p2 " << p2->m_age << endl;
	cout << "p3 " << p3[0].m_age << endl;
	cout << "p4 " << p4[1].m_age << endl;
	cout << "p5 " << p5[1].m_age << endl;
	cout << "p6 " << p6->m_height << endl;

	getchar();
	return 0;
}
