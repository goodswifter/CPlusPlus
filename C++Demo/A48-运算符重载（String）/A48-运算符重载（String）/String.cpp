#include "String.h"



String::String(const char *cstring) {
	//if (!cstring) return;
	//cout << "String(const char *) - new[] - " << cstring << endl;

	//m_cstring = new char[strlen(cstring) + 1]{};
	//strcpy(m_cstring, cstring);
	assign(cstring);
}

String::String(const String &string) {
	//*this = string.m_cstring; // operator=(const char *)
	//*this = string; // operator=(const String &)
	assign(string.m_cstring);
}

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

String &String::operator=(const char *cstring) {
	return assign(cstring);
}

String &String::operator=(const String &string) {
	//return operator=(string.m_cstring);
	//return *this = string.m_cstring;
	return assign(string.m_cstring);
}

String::~String() {
	//if (!m_cstring) return;
	//cout << "~String() - delete[] - " << m_cstring << endl;

	//delete[] m_cstring;
	//m_cstring = NULL;

	//*this = NULL;
	//(*this).operator=(NULL);
	//this->operator=(NULL);
	//operator=(NULL);
	assign(NULL);
}

ostream &operator<<(ostream &cout, const String &str) {
	if (!str.m_cstring) return cout;
	
	return cout << str.m_cstring;
}