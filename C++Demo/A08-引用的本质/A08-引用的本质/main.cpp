#include <iostream>
using namespace std;

int main() {

	//int a = 1;
	//int b = 2;
	//int c = a + b;

	//int age = 5;
	//int *p = &age;
	//*p = 6;

	int age = 5;
	int &rAge = age;
	rAge = 6;

	getchar();
	return 0;
}
