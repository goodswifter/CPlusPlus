#pragma once
#include <iostream>
using namespace std;

class String {
	// friend func
	friend ostream &operator<<(ostream &, const String &);
private:
	// attributes
	// 为了安全，不置空的话，m_cstring可能有值
	// C语言字符串
	char *m_cstring = NULL; 
	// 字符串长度
	size_t m_length;
	
	// pirvate func
	// 深拷贝
	String &assign(const char *cstring);
	// 两个C语言字符串相加
	char *join(const char *cstring1, const char *cstring2);


public:
	// constructor
	// 参数置空操作是为了创建""字符串
	String(const char *cstring = "");
	String(const String &string);

	// destructor
	~String();

	// operator overload
	// =
	String &operator=(const char *cstring);
	String &operator=(const String &string);
	// +=
	String &operator+=(const char *cstring);
	String &operator+=(const String &string);
	// +
	String operator+(const char *cstring);
	String operator+(const String &string);

	// comparison operator
	bool operator>(const char *cstring);
	bool operator>(const String &string);
	bool operator<(const char *cstring);
	bool operator<(const String &string);

	// index operator
	char operator[](int index);
	
	// 成员函数
	// substr
	String substr(size_t pos, const size_t length);
	size_t length();
};

