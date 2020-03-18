#include <iostream>
using namespace std;

enum Season {
	Spring,
	Summer,
	Fall,
	Winter
};



struct Student {
	int age;
};

// 5. 交换两个变量的值
void oldSwap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// 引用的方式
void swap(int &a, int &b) {
	int temp = a;
	a = b;
    b = temp;
}

// 7. 函数返回值可以被赋值
int age = 10;

int &func() {
	// age各种操作
	// 方式一
	//int &rAge = age;
	//return rAge;
	// 方式二
	return age;
}

int main() {

	// 1. 指向基本数据类型的引用
	//int age = 10;
	//int &rAge = age;
	//rAge = 20;

	//cout << age << endl;
	//cout << rAge << endl;

	// 2.  指向枚举的引用
	//Season season;
	//Season &rSeason = season;
	//rSeason = Winter;
	//cout << season << endl;

	// 3. 指向结构体、类的引用
	//Student stu;
	//Student &rStu = stu;
	//rStu.age = 20;
	//cout << stu.age << endl;

	// 4. 指向指针的引用
	//int a = 10;
	//int b = 20;
	//int *p = &a;
	//int *&rP = p;
	//rP = &b;

	//cout << *p << endl;

	// 5. 指向数组的引用
	//int array[] = { 10, 20, 30 };
	//int (&rArray)[3] = array;
	//rArray[0] = 11;

	//cout << array[0] << endl;

	// 6. 用引用交换两个变量的值
	//int a = 10;
	//int b = 20;

	//// 旧方法
	////oldSwap(&a, &b);

	//// 引用的方式
	//swap(a, b);

	//cout << "a is " << a << endl;
	//cout << "b is " << b << endl;


	// 7. 函数返回值可以被赋值
	func() = 30;
	cout << age << endl;

	// 2. 定义了一个引用，相当于是变量的别名
	//int age = 10;
	//int &rAge = age;
	//int &rAge1 = rAge;
	//int &rAge2 = rAge1;

	//rAge = 11;
	//cout << age << endl;

	//rAge1 = 22;
	//cout << age << endl;

	//rAge2 = 33;
	//cout << age << endl;

	getchar();
	return 0;
}