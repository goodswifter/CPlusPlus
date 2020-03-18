#include <iostream>
using namespace std;

class Person {
	int m_age;
public:
	Person() {
		cout << "Person() - " << this << endl;
	}
	Person(int age) :m_age(age) {
		cout << "Person(int) - " << this << endl;
	}
	//explicit Person(int age) :m_age(age) {
	//	cout << "Person(int) - " << this << endl;
	//}
	Person(const Person &person) {
		cout << "Person(const Person &person) - " << this << endl;
	}
	~Person() {
		cout << "~Person() - " << this << endl;
	}
	void display() {
		cout << "display() - age is " << this->m_age << endl;
	}
};

void test1(Person person) {

}

Person test2() {
	return 30;
}

int main() {

	// 1. 以下三种表达是一样的
	//Person person(10);
	//Person person = 10; 
	// 同时调用两次单参函数，系统优化成一次
	Person person = Person(10);
	
	// 2. 
	//test1(30);

	//Person person = test2();

	// 3. 
	Person person(10);
	// 因为person已经存在，所以调用匿名对象的单参构造方法，并直接调用它的析构函数
	person = 20; // person = Person(20);
	

	cout << endl;

	getchar();
	return 0;
}