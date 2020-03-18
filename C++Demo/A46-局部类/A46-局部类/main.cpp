#include <iostream>
using namespace std;

int g_age = 30;

void test() {

	int m_age = 10;
	static int ms_age = 20;
	
	class Person {
	public:
		void run() {
			ms_age = 20;
			g_age = 30;
			//m_age = 10;
			cout << "void run()" << endl;
		}

		static void run1() {
			cout << "void run1()" << endl;
		}
	};
	Person().run();
	Person::run1();
}


int main() {

	test();

	getchar();
	return 0;
}
