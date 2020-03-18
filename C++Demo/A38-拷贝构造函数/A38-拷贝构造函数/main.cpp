#include <iostream>
using namespace std;

//class Car {
//	int m_price;
//	int m_length;
//
//public:
//	Car(int price = 0, int length = 0) :m_price(price), m_length(length) {
//		cout << "Car(int, int)" << endl;
//	}
//
//	// 拷贝构造函数的格式是固定的
//	Car(const Car &car) :m_price(car.m_price), m_length(car.m_length) {
//		cout << "Car(const Car &)" << endl;
//	}
//
//	void display() {
//		cout << "price is " << this->m_price << " length is " << this->m_length << endl;
//	}
//};

// 调用父类的构造函数
class Person {
	int m_age;
public:
	Person(int age = 0) :m_age(age) { }
	Person(const Person &person) :m_age(person.m_age) { }
};

class Student : public Person {
	int m_score;
public:
	Student(int age = 0, int score = 0) :Person(age), m_score(score) { }
	Student(const Student &student) :Person(student), m_score(student.m_score) { }
};

int main() {
	Student stu;
	//Student *stu = new Student();

	cout << endl;
	//Student stu1(20);

	//Student sut2 = stu1;

	//Car car1(10);

	//Car car2(car1);
	//car2.display();

	//Car car3 = car1;
	//car3.display();

	//Car car4;
	//car4 = car1;

	//Car car1(100, 5);

	//Car car2 = car1;
	//car2.display();

	getchar();
	return 0;
}
