#include <iostream>
using namespace std;

void display() {
	cout << "display()" << endl;
}

void display(int a) {
	cout << "display(int)" << endl;
}

void display(long a) {
	cout << "display(long)" << endl;
}

void display(double a) {
	cout << "display(double)" << endl;
}

int main() {

	display();
	display(3);
	display(10l);
	display(10.2);

	getchar();
	return 0;
}