#include <iostream>
//#include "Car.h"
//#include "Person.h"

//using namespace AD;
using namespace std;

void test() {
	cout << "test()" << endl;
}

//namespace FX {
//	int g_no;
//
//	class Person {
//	public:
//		int m_age;
//	};
//
//	void test() {
//		cout << "FX::test()" << endl;
//	}
//}
//
//namespace AD {
//	int g_no;
//
//	class Person {
//	public:
//		int m_height;
//	};
//
//	void test() {
//		cout << "AD::test()" << endl;
//	}
//}
//
//void test1() {
//	FX::g_no = 1;
//	AD::g_no = 2;
//
//	FX::Person *p1 = new FX::Person();
//	p1->m_age = 10;
//
//	AD::Person *p2 = new AD::Person();
//	p2->m_height = 180;
//
//	test();
//	FX::test();
//	AD::test();
//}

//namespace AD {
//	int g_no;
//
//	class Person {
//	public:
//		int m_height;
//	};
//
//	void test() {
//		cout << "AD::test()" << endl;
//	}
//}

void test2() {
	/*using namespace AD;
	g_no = 10;
	Person person;
	test();*/

	/*using AD::g_no;
	using AD::Person;
	g_no = 10;
	Person person;*/
}

//namespace AD {
//	namespace SS {
//		int g_no;
//		class Person {
//
//		};
//
//		void test() {
//
//		}
//	}
//
//	void test() {
//
//	}
//}

//void test() {
//
//}

//void test3() {
//	test();
//	// 默认的命名空间，没有名字
//	::test();
//
//	::AD::SS::g_no = 30;
//
//	AD::SS::g_no = 20;
//
//	using namespace AD;
//	SS::g_no = 30;
//
//	using namespace AD::SS;
//	g_no = 10;
//}

namespace AD {
	int g_age;
}

namespace FX {
	int g_age;
}


int main() {
	//AD::Car car;
	//AD::Person person;

	using namespace AD;
	using namespace FX;

	FX::g_age = 10;
	
	cout << FX::g_age << endl;


	getchar();
	return 0;
}
