#include <iostream>
using namespace std;

class Person {
public:
	Person() {
		cout << "Person() - " << this << endl;
	}
	Person(const Person &person) {
		cout << "Person(const Person &person) - " << this << endl;
	}
	~Person() {
		cout << "~Person() - " << this << endl;
	}
	void display() {
		cout << "display()" << endl;
	}
};

void test1(Person person) {

}

Person test2() {
	// Person person;
	return Person();
}

int main() {

	Person person;
	test1(person);

	//test1(Person());

	//Person person = test2();
	//cout << &person << endl;

	//Person person;
	//person = test2();

	cout << endl;

	getchar();
	return 0;
}
