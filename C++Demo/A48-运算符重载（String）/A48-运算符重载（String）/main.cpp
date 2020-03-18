#include <iostream>
#include "String.h"
using namespace std;

int main() {
	// 1. 指针变量m_cstring的赋值问题
	//{
	//	char name[] = "123";
	//	String str1 = name;
	//	String str2 = "111";
	//}

	// 2. 运算符重载<<,直接打印字符串
	//String str3 = "222";
	//cout << str3 << endl;

	// 3. 自动调用单参数的构造函数问题
	//{
	//	String str = "1111";
	//	str = NULL; // 相当于 str = String("2222");
	//	cout << str << endl;
	//}

	// 4. 字符串对象的赋值
	//{
	//	String str1 = "1111";
	//	String str2 = "2222";

	//	str1 = str2;
	//}

	// 5. 字符串对象自己赋值自己
	//{
	//	String str1 = "1111";

	//	str1 = str1;
	//}

	// 6. 拷贝构造，系统默认浅拷贝
	{
		String str1 = "1111";
		String str2 = str1;
	}

	getchar();
	return 0;
}