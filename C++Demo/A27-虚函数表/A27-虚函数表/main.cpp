#include <iostream>
using namespace std;

class Animal {
public:
	int m_age;
	virtual void speak() {
		cout << "Animal::speak()" << endl;
	}
	virtual void run() {
		cout << "Animal::run()" << endl;
	}
};

class Cat : public Animal {
public:
	int m_life;
	Cat() :m_life(0) {}
	void run() {
		cout << "Cat::run()" << endl;
	}
};

int main() {

	Animal *cat = new Cat();
	cat->speak();
	cat->run();

	getchar();
	return 0;
}
