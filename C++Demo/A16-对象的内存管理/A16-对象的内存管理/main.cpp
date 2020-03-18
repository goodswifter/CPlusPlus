#include <iostream>
using namespace std;

struct Car {
	int m_price;
	Car() {
		cout << "Car()" << endl;
	}

	~Car() {
		cout << "~Car()" << endl;
	}
};

struct Person {
	int m_age; // 4
	Car *m_car; // 4

	// 初始化工作
	Person() {
		cout << "Person()" << endl;

		this->m_car = new Car();

		/*Car car;
		this->m_car = &car;*/
	}

	// 内存回收、清理工作(回收Person对象内部申请的堆空间)
	~Person() {
		cout << "~Person()" << endl;

		delete this->m_car;
	}
};

void test() {
	Person *p = new Person();
	delete(p);
}

struct Person2 {
private:
	char *m_name;

public:
	void setName(const char *name) {
		if (this->m_name == name) return;
		
		if (this->m_name != NULL) {
			delete[] this->m_name;
			this->m_name = NULL;
		}

		if (name != NULL) {
			this->m_name = new char(strlen(name) + 1);
			strcpy(this->m_name, name);
		}
	}

	const char *getName() {
		return this->m_name;
	}

	Person2() {
		memset(this, 0, sizeof(Person2));
	}

	~Person2() {
		this->setName(NULL);
	}
};

int main() {
	Person2 *p = new Person2();
	p->setName("haha");
	
	cout << p->getName() << endl;

	delete(p);

	getchar();
	return 0;
}
