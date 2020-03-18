#include "String.h"


// constructor
String::String(const char *cstring) :m_length(strlen(cstring)) {
	assign(cstring);
}

String::String(const String &string) :m_length(strlen(string.m_cstring)) {
	assign(string.m_cstring);
}


// destructor
String::~String() {
	assign(NULL);
}

// pirvate func
// 深拷贝
String &String::assign(const char *cstring) {
	// 如果两个对象的指针指向一样的堆空间
	if (m_cstring == cstring) return *this;

	// 释放旧的字符串
	if (m_cstring) {
		cout << "delete[] - " << m_cstring << endl;
		delete[] m_cstring;
		m_cstring = NULL;
	}

	// 指向新的字符串
	if (cstring) {
		cout << "new[] - " << cstring << endl;
		m_cstring = new char[strlen(cstring) + 1]{};
		strcpy(m_cstring, cstring);
	}

	return *this;
}

// 两个C语言字符串相加
char *String::join(const char *cstring1, const char *cstring2) {
	if (!(cstring1 && cstring2)) return NULL;

	char *newCString = new char[strlen(cstring1) + strlen(cstring2) + 1]{};
	strcat(newCString, cstring1);
	strcat(newCString, cstring2);
	cout << "new[] - " << newCString << endl;
	return newCString;
}

// operator overload
// =
String &String::operator=(const char *cstring) {
	return assign(cstring);
}
String &String::operator=(const String &string) {
	return assign(string.m_cstring);
}

// +
String String::operator+(const char *cstring) {
	String str;
	char *newCString = join(m_cstring, cstring);
	if (newCString) {
		// 释放旧的堆空间
		str.assign(NULL);
		// 直接指向新开辟的堆空间
		str.m_cstring = newCString;
	}
	return str;
}
String String::operator+(const String &string) {
	return operator+(string.m_cstring);
}

// +=
String &String::operator+=(const char *cstring) {
	char *newCString = join(m_cstring, cstring);
	if (newCString) {
		// 释放旧的堆空间
		assign(NULL);
		// 直接指向新开辟的堆空间
		m_cstring = newCString;
	}
	return *this;
}
String &String::operator+=(const String &string) {
	return operator+=(string.m_cstring);
}

// comparison operator
// >
bool String::operator>(const char *cstring) {
	if (!(m_cstring && cstring)) return 0;
	return strcmp(m_cstring, cstring) > 0;
}
bool String::operator>(const String &string) {
	return operator>(string.m_cstring);
}
// <
bool String::operator<(const char *cstring) {
	if (!(m_cstring && cstring)) return 0;
	return strcmp(m_cstring, cstring) < 0;
}
bool String::operator<(const String &string) {
	return operator<(string.m_cstring);
}

// []
char String::operator[](int index) {
	if (!this->m_cstring || index < 0 || index >= strlen(this->m_cstring)) return '\0';
	return m_cstring[index];
}

// member func 
// substr
String String::substr(size_t pos, const size_t length) {
	if (pos + length >= m_length) return NULL;
	String str;
	char *newCString = new char[length + 1]{};
	for (int i = 0; i < length; i++) {
		newCString[i] = (*this)[pos + i];
	}
	cout << "new[] - " << newCString << endl;
	if (newCString) {
		str.assign(NULL);
		str.m_cstring = newCString;
	}
	return str;
}

// length
size_t String::length() {
	return m_length;
}

// global func
ostream &operator<<(ostream &cout, const String &str) {
	if (!str.m_cstring) return cout;

	return cout << str.m_cstring;
}
