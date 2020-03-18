#pragma once
#include <iostream>
using namespace std;

class String {
	friend ostream &operator<<(ostream &, const String &);
private:
	char *m_cstring;
	String &assign(const char *cstring);
public:
	String(const char *cstring);
	String(const String &string);
	String &operator=(const char *cstring);
	String &operator=(const String &string);
	~String();
};

