#include <iostream>
using namespace std;

class Car {
	int m_price;

public:
	Car(int price = 0) :m_price(price) {
		cout << "Car(int) - " << this << this->m_price << endl;
	}

	Car(const Car &car) :m_price(car.m_price) {
		cout << "Car(const Car &) - " << this << this->m_price << endl;
	}
};

// 1. 相当于 car = car1,拷贝构造产生新的对象
void test1(Car car) {}

// 使用引用就不会产生新的对象
void test2(Car &car) {}

// 2
Car test3() {
	Car car(10);
	return car;
}

int main() {
	// 1. 作为参数
	Car car1(10);
	test2(car1);

	// 2. 作为返回值
	//  以下代码会有两次拷贝构造的情况，系统优化掉一次，所以只调用一次拷贝构造
	Car car2 = test3();

	Car car3;
	// 函数return的时候会产生通过拷贝构造函数创建一个新的对象，这样在外面使用就不会受函数内存的影响
	car3 = test3();

	getchar();
	return 0;
}
