#include <iostream>
using namespace std;

/*
单例模式：
在程序运行过程中，可能会希望某些类的实例对象永远只有一个

1.把构造函数私有化
2.定义一个私有的静态成员变量指针，用于指向单例对象
3.提供一个公共的返回单例对象的静态成员函数
*/

class Rocket {
public:
	static Rocket *sharedRocket() {
		if (ms_rocket == NULL) {
			ms_rocket = new Rocket();
		}
		return ms_rocket;
	}

	static void deleteRocket() {
		if (ms_rocket == NULL) return;

		// 释放指针对象
		delete ms_rocket;
		// 必须清空指针，不然就造成野指针问题
		ms_rocket = NULL;
	}

private:
	// 这种方式创建,只消耗4个自己的内存,节省内存空间
	static Rocket *ms_rocket;

	// 程序一运行就会创建对象,对象占多大内存,就消耗多大的内存
	// static Rocket ms_rocket;

	// 禁止类外面创建对象
	Rocket() {
		cout << "Rocket()" << endl;
	}
	// 禁止类外面释放对象
	~Rocket() {
		cout << "~Rocket()" << endl;
	}
};

// 初始化静态成员变量ms_rocket
Rocket *Rocket::ms_rocket = NULL; 

int main() {

	int *p = new int();
	*p = 5;
	delete p;
	p = NULL;

	cout << *p << endl;

	//Rocket *p1 = Rocket::sharedRocket();
	//p1->deleteRocket();

	//Rocket *p2 = Rocket::sharedRocket();
	//p2->deleteRocket();

	//Rocket *p1 = Rocket::sharedRocket();
	//Rocket *p2 = Rocket::sharedRocket();
	//Rocket *p3 = Rocket::sharedRocket();
	//Rocket *p4 = p3->sharedRocket();

	//cout << p1 << endl;
	//cout << p2 << endl;
	//cout << p3 << endl;
	//cout << p4 << endl;

	getchar();
	return 0;
}
