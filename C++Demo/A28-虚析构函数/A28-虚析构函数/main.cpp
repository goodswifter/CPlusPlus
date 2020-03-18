#include <iostream>
using namespace std;

class Animal {
public:
	int m_age;
	virtual void speak() {
		cout << "Animal::speak()" << endl;
	}
	virtual ~Animal() {
		cout << "~Animal()" << endl;
	}
};

class Cat : public Animal {
public:
	int m_life;
	Cat() :m_life(0) {}
	void speak() {
		cout << "Cat::speak()" << endl;
	}
	~Cat() {
		cout << "~Cat()" << endl;
	}
};

int main() {

	Cat *cat = new Cat();
	cat->speak();

	delete(cat);

	getchar();
	return 0;
}