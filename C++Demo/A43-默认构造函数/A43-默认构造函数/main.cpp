#include <iostream>
using namespace std;

class Car {
public:
	Car() {

	}
};

class Person {
public:
	Person() {

	}
};

class Student : public Person {

};


int main() {

	Student stu;

	cout << endl;

	getchar();
	return 0;
}
