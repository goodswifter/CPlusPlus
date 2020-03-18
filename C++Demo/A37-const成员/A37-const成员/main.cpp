#include <iostream>
using namespace std;

int age;

class Car {
public:
	int m_price1;
	const int m_price2 = 0;
	// const 修饰的静态成员变量必须在声明的时候初始化
	static const int msc_price3 = 0;
	static int ms_price4;

	Car() :m_price1(0) { }

	Car(int price) :m_price2(price) {

	}

	void mc_test1() const {
		this->ms_price4 = 20;

		mc_test2();
		ms_test3();
		// 不能调用
		//test4();
	}

	void mc_test2() const;

	static void ms_test3() { }

	void test4() {
		this->m_price2;
		mc_test1();
	}

	//void test5() {
	//	cout << "test5()" << endl;
	//}

	//void test5() const {
	//	cout << "test5() const" << endl;
	//}

	static void test5() {
		cout << "static test5()" << endl;
	}
};

int Car::ms_price4 = 0;

void Car::mc_test2() const{ }

int main() {

	const Car *p1 = new Car();
	p1->test5();

	Car car2;
	car2.test5();

	getchar();
	return 0;
}
