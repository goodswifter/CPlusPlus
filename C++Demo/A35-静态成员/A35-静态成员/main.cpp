#include <iostream>
using namespace std;

class Car {
public:
	static void test();
};

void Car::test() { }



//class Car {
//	static int ms_price;
//	int m_count;
//	Car *p;
//public:
//	// 构造函数、析构函数不能是静态
//	// 构造函数用来初始化成员变量，肯定不能是静态的
//	//static Car() { 
//	//	this->m_count = 10;
//	//	p = new Car();
//	//}
//
//	// 析构函数同样可以调用成员变量
//	//static ~Car() { 
//	//	delete p;
//	//}
//
//	static void ms_run() {
//		// 原因是当使用 Car::ms_run(）调用时，对象不存在，只有对象存在，才有this指针
//		// this->m_count;
//
//		// 当通过Car::ms_run()调用时，成员变量m_count不存在，只有创建对象时，m_count才会存在
//		// m_count = 10;
//
//		// 可以访问静态成员变量
//		ms_price = 10;
//
//		// 只有存在对象，才有能通过对象地址找到对应的成员函数
//		//m_test();
//
//		// 直接通过类就可以找到对应的静态成员变量
//		ms_test1();
//	}
//
//	// 非静态成员函数内部可以访问静态成员变量\函数
//	void m_test() { 
//		ms_price = 20;
//
//		ms_test1();
//	}
//
//	static void ms_test1() {}
//
//	// 不能是虚函数，虚函数用于多态，多态要根据指向堆空间的对象类型来判断调用哪个成员函数
//	//virtual static void ms_run2() { }
//};

//class Car {
//public:
//	static int ms_price;
//};
//
//// 初始化静态成员变量
//int Car::ms_price = 0;

int main() {

	//Car car;
	//car.ms_price = 10;

	//Car *p = new Car();
	//p->ms_price = 20;

	//Car::ms_price = 30;

	//cout << p->ms_price << endl;

	getchar();
	return 0;
}
