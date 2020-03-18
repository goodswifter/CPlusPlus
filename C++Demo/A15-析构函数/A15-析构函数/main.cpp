#include <iostream>
using namespace std;

class Person {
	int m_age;

public:
	// 对象创建完毕的时候调用
	Person() {
		cout << "Peroson()" << endl;
	}

	// 对象销毁(内存被回收)的时候调用
	~Person() {
		cout << "~Peroson()" << endl;
	}
};

int main() {
	{
		//Person person;
	}

	// 通过malloc分配的对象free的时候不会调用析构函数
	//Person *p = (Person *)malloc(sizeof(Person));
	//free(p);

	Person *p = new Person();
	delete p;

	getchar();
	return 0;
}
