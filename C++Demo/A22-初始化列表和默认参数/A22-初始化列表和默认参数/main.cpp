#include <iostream>
using namespace std;

class Person {
	int m_age;
	int m_height;

public:
	// 如果构造函数的声明和实现是分开的
	// 1. 默认参数只能写在函数的声明中
	Person(int age = 0, int height = 0);
};

// 2. 初始化列表只能写在函数的实现中
Person::Person(int age, int height ) :m_age(age), m_height(height) { }

int main() {



	getchar();
	return 0;
}
