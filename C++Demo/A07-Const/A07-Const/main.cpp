#include <iostream>
using namespace std;

struct Student {
	int age;
};

int func() {
	return 10;
}

int sum(int *a, int *b) {
	return *a + *b;
}

int sum(const int *a, const int *b) {
	return *a + *b;
}

int main() {

	int v1 = 10;
	int v2 = 20;
	sum(&v1, &v2);

	const int v3 = 10;
	const int v4 = 20;
	sum(&v3, &v4);

	//sum(50, 60);


	// 5. 常引用可以指向临时数据(常量、表达式、函数返回值等)
	//int a = 20;
	//int b = 30;
	//int age = 10; // 4
	//const double &ref = age; // 8
	//const int &rAge = func();
	//const int &rAge = 40;
	//const int &rAge = a + b;

	//// 4. 引用的本质就是指针
	//int age = 10;
	// // rAge的指向本来就不能改，const只起强调作用
	// int & const rAge = age;

	// // 不能通过引用修改所指向的内容
	//const int &rAge1 = age;
	//rAge1 = 30;


	// // 不能通过指针修改所指向的内容
	// int const *pAge1 = &age;
	// // 不能修改指针的指向，但是可以通过指针修改所指向的内容
	// int * const pAge2 = &age;


	// 2. 修饰结构体
	//Student stu1 = { 10 };
	//Student stu2 = { 20 };

	//const Student stu = { 20 };
	//Student stu2 = { 40 };
	//stu = stu2; // 不能被赋值
	//stu.age = 50; // 结构体的成员变量不能被赋值

	// 3. 修饰结构体的指针
	//Student stu = { 20 };
	//stu.age = 40;

	//const Student *pStu = &stu;
	//pStu->age = 50;

	//const Student *pStu = &stu1;
	////*pStu = stu2; // *pStu是常量
	//// 如果修饰的是类、结构体(的指针)，其成员也不可以更改
	////(*pStu).age = 30;
	////pStu->age = 40;
	//pStu = &stu2; // pStu不是常量

	// 1. 以下5个指针分别是什么含义
	//int age = 10;
	//// *p0是常量，p0不是常量
	//const int *p0 = &age;
	//// *p1是常量，p1不是常量
	//int const *p1 = &age;
	//// p2是常量，*p2不是常量
	//int * const p2 = &age;
	//// *p3是常量，p3是常量
	//const int * const p3 = &age;
	//// *p4是常量，p4是常量
	//int const * const p4 = &age;

	getchar();
	return 0;
}
