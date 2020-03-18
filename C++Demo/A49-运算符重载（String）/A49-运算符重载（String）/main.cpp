#include <iostream>
#include "String.h"

using namespace std;

int main() {

	//String str;
	//cout << 1 << str << 2 << endl;

	//{
	//	String str1 = "111";
	//	String str2 = str1;
	//}
	{
		String str1 = "abcdef";
		String str2 = str1.substr(2, 3);
		cout << str2.length() << endl;
	}

	//String str1;
	//String str1 = "abc";
	//String str2 = NULL;

	//cout << (str1 > str2) << endl;

	getchar();
	return 0;
}