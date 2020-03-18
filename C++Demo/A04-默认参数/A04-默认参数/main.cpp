#include <iostream>
using namespace std;

void display(int a = 10, int b = 20) {
	cout << "a is " << a << endl;
	cout << "b is " << b << endl;
}

int main() {
	display(12);
	display(5);
	display(20);
	display(30);

	getchar();
	return 0;
}