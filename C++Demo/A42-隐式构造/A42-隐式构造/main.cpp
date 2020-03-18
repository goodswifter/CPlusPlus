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

	// 1. �������ֱ����һ����
	//Person person(10);
	//Person person = 10; 
	// ͬʱ�������ε��κ�����ϵͳ�Ż���һ��
	Person person = Person(10);
	
	// 2. 
	//test1(30);

	//Person person = test2();

	// 3. 
	Person person(10);
	// ��Ϊperson�Ѿ����ڣ����Ե�����������ĵ��ι��췽������ֱ�ӵ���������������
	person = 20; // person = Person(20);
	

	cout << endl;

	getchar();
	return 0;
}