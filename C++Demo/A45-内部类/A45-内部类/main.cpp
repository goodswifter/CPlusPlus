#include <iostream>
using namespace std;

class Person {
	int m_age;
	static int m_legs;

	void walk() {
		cout << "Person - walk()" << endl;
	}

	static void talk() {

	}

public:

	class Car {
	public:
		int m_price;

		void run() {
			Person().walk();

			Person person;
			person.m_age = 10;

			m_legs = 2;

			talk();
		}
	};
};

class Point {
	class Math {
		void test();
	};
};

void Point::Math::test() {

}

int Person::m_legs = 2;

int main() {

	cout << sizeof(Person) << endl;

	Person::Car car;
	car.m_price = 100;

	getchar();
	return 0;
}
