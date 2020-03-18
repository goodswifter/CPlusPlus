#include <iostream>
using namespace std;

class Person {
public:
	Person() {
		cout << "Person()" << endl;
	}
	~Person() {
		cout << "~Person()" << endl;
	}

	void run() {
		cout << "Person::run()" << endl;
	}
};

// 1. auto_ptr智能指针
// 有缺陷，比如不能用于数组
void test1auto_ptr() {
	cout << "1" << endl;
	
	{
		// Person *p = new Person();

		auto_ptr<Person> p(new Person());
		p->run();
	}

	cout << "2" << endl;
}

// 2. 自定义智能指针
template <class T>
class SmartPointer {
	T *m_pointer;

public:
	SmartPointer(T *pointer) :m_pointer(pointer) { }
	~SmartPointer() {
		if (m_pointer == nullptr) return;
		delete m_pointer;
	}
	T *operator->() {
		return m_pointer;
	}
};

void test2customPtr() {
	cout << "1" << endl;
	{
		SmartPointer<Person> p(new Person());
		p->run();
	}
	cout << "2" << endl;
};

int main() {

	test2customPtr();

	getchar();
	return 0;
}
