#include <iostream>
using namespace std;

#include "Point.h"

int main() {
	// 运算符重载：最好保留运算符以前的语义
	Point p1(10, 20);
	Point p2(20, 20);
	//Point p3 = p1++ + ++p2;
	++p2 = p1;
	//p3.display();
	//p2.display();
	cout << p2 << endl;
	cout << p1 << endl;

	//Point p1(10, 20);
	//Point p2(20, 20);
	//int a = p1 != p2;
	//cout << a << endl; 

	//int a = 1;
	//-(-a);

	//p1 += p2;
	//p1.display();

	//p1++;
	//p1.display();

	//int a = 5;
	//int b = (++a) + (a++) + (++a) + (a++) + (a++);
	//cout << b << endl;
	//cout << a << endl;

	//int a = 10;
	////a++ = 20;
	////++a = 30;

	//int b;
	//b = ++a + 5;
	//b = a++ + 5;

	//int a = 10, b = 0, c = 0, d = 0;
	//b = ++a;
	//c = a++;
	//d = a;

	cout << endl << endl;
	getchar();
	return 0;
}
