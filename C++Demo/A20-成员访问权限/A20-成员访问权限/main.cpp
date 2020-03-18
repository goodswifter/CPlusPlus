#include <iostream>
using namespace std;

class Person {
public:
	int m_age;
	void run() {

	}
};

class Student : public Person {
	int m_no;
	void study() {
		m_age = 10;
	}
};

class GoodStudent : public Student {
	int m_money;
	void work() {
		m_age = 10;
	}
};

int main() {



	getchar();
	return 0;
}
