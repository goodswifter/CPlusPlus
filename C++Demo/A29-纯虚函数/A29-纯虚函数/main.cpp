#include <iostream>
using namespace std;

class Animal {
	virtual void speak() = 0;
	virtual void run() = 0;
};

class Cat {
public:
	void speak() {
		cout << "Cat::speak()" << endl;
	}
	void run() {
		cout << "Cat::run()" << endl;
	}
};

int main() {

	Cat *cat = new Cat();
	cat->speak();
	
	getchar();
	return 0;
}
