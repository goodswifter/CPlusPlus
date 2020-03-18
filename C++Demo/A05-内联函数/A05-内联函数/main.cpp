#include <iostream>
using namespace std;

#define sum(x) (x + x)

//inline int sum(int a, int b) {
//	return a + b;
//}

inline int sum1(int x) {
	return x + x;
}

int main() {
	int a = 10;
	int b = 10;
	int c = sum(++a);
	/*int f = ++a + ++a;*/
	//int e = a++ + ++a;
	int g = ++a + a++;
	//int d = sum1(++b);
	//cout << e << endl;
	cout << g << endl;
	//cout << d << endl;

	getchar();
	return 0;
}


