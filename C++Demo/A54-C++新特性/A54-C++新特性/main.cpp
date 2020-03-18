#include <iostream>
using namespace std;

class Person {
public:
	int m_age;
};

void test1auto() {
	//int i = 10;
	//const char *name = "jack";
	//double d = 9.6;

	auto i = 10;
	auto name = "jack";
	auto d = 9.6;
	auto p = new Person();
	p->m_age = 10;
}

void func(int p) {
	cout << "func(int) - " << p << endl;
}

void func(int *p) {
	cout << "func(int *) - " << p << endl;
}

// 2. 解决空指针的二义性
void test2nullptr() {
	func(0);
	func(NULL);
	func(nullptr);

	cout << (nullptr == NULL) << endl;
}

// 3. 数组的快速遍历和简洁初始化
void test3array() {
	// 1. 快速遍历
	int array[] = { 10, 20, 30, 40 };
	for (int item : array) {
		cout << item << endl;
	}

	// 2. 简洁初始化
	int array[]{ 10, 20, 30, 40 };
}

// 4. lambda表达式
int exec(int a, int b, int(*func)(int, int)) {
	// ....
	// ...
	return func(a, b);
}

void test4lambad() {
	// 1. 
	int(*p)(int, int) = [](int a, int b) -> int {
		return a + b;
	};

	cout << p(10, 20) << endl;

	// 2. 
	cout << [](int a, int b) -> int {
		return a + b;
	}(10, 20) << endl;

	// 3. 
	cout << [](int a, int b) {
		return a + b;
	}(10, 20) << endl;

	// 4. 
	void(*p1)() = [] {
		cout << 1 << endl;
		cout << 2 << endl;
		cout << 3 << endl;
	};
	p1();
	p1();

	// 5.
	cout << exec(20, 10, [](int a, int b) { return a + b; }) << endl;
	cout << exec(20, 10, [](int a, int b) { return a - b; }) << endl;
	cout << exec(20, 10, [](int a, int b) { return a * b; }) << endl;
	cout << exec(20, 10, [](int a, int b) { return a / b; }) << endl;
}

// 5. lambda-mutable
void test5lambdaMutable() {
	int a = 10;

	auto p = [a] () mutable {
		a++;
		cout << "lambda - " << a << endl;
	};
	p();

	// 10
	cout << a << endl;
}

// 6. lambda外部变量捕获
void test6lambda() {
	int a = 10;
	int b = 20;

	auto p = [=, &a] {
		cout << a << endl;
		cout << b << endl;
	};

	a = 11;
	b = 22;

	p();
}

// 7. c++17初始化的if、switch语句
void test7if() {
	// 变量a、b的作用域是它所在的 if 语句、以及其后面的if-else语句
	if (int a = 10;  a > 5) {
		a = 1;
	} else if (int b = 20; b > 10) {
		a = 2;
		b = 2;
	} else if (2) {
		a = 3;
		b = 3;
	} else {
		a = 4;
		b = 4;
	}
}

int main() {



	getchar();
	return 0;
}