#include <iostream>
using namespace std;

// 申请堆空间
void test1() {
	// 方式一
	// 申请4个字节的堆空间内存
	int *p1 = (int *)malloc(4);
	
	char *p2 = (char *)malloc(4);
	*p2 = 1;
	*(p2 + 1) = 2;
	p2[0] = 1;
	p2[1] = 2;

	// 方式二
	int *p3 = new int;
	int *p4 = new int;

	delete p3;
	delete p4;
}

// 申请多个堆空间
void test2() {
	// 方式一
	int *p = (int *)malloc(sizeof(int) * 10);
	p[0] = 10;
	p[1] = 10;
	p[2] = 10;
	p[3] = 10;

	free(p);

	// 方式二
	int *p2 = new int[10];
	p2[0] = 10;
	delete[] p2;
}

// 内存泄漏
void test3() {
	int *p = new int; // 内存泄露 
	p = new int;

	delete p;
}

// memset : memory set
void test4() {
	int size = sizeof(int);
	int * p1 = (int *)malloc(size); // 未初始化
	int *p = (int *)malloc(size);
	// memory set
	// 从p开始的4个字节, 每个字节都初始化为1
	memset(p, 1, size);

	// 0000 0001  0000 0001  0000 0001  0000 0001
	cout << p[0] << endl;

	free(p);
}

void test5() {
	// 没有初始化
	int *p1 = new int;
	// 初始化为0
	int *p2 = new int();
	// 初始化为5
	int *p3 = new int(5);
	// 没有初始化
	int *p4 = new int[3];
	// 全部元素初始化为0
	int *p5 = new int[3]();
	// 全部元素初始化为0
	int *p6 = new int[3]{};
	// 首元素初始化为5，其他元素初始化为0
	int *p7 = new int[3]{ 5 };

	cout << p7[0] << endl;
	cout << p7[1] << endl;
	cout << p7[2] << endl;
}

// memset快速把对象、数组内存清零的方法


struct Person {
	int m_id;
	int m_age;
	int m_height;
};

// 全局区
Person g_person;

int main() {

	// 栈空间
	Person person;
	person.m_id = 1;
	person.m_age = 10;
	person.m_height = 150;
	memset(&person, 0, sizeof(person));

	Person persons[] = { {1, 5, 150}, {2, 15, 160}, {3, 35, 180} };
	memset(&persons, 0, sizeof(persons));

	cout << persons[0].m_age << endl;
	cout << persons[1].m_id << endl;
	cout << persons[2].m_height << endl;

	// 堆空间
	Person *p = new Person();
	p->m_age = 20;

	delete p;

	getchar();
	return 0;
}
