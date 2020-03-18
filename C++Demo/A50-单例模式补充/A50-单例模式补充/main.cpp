#include <iostream>
using namespace std;

class Rocket {
public:
	static Rocket *sharedRocket() {
		if (ms_rocket) return ms_rocket;
		return ms_rocket = new Rocket();
	}
	
	void deleteRocket() {
		if (!ms_rocket) return;
		delete ms_rocket;
		ms_rocket = NULL;
	}

private:
	static Rocket *ms_rocket;
	// 不能通过这种方式创建
	Rocket();
	// 不能被拷贝
	Rocket(const Rocket &rocket) {}
	// 不能被赋值
	void operator=(const Rocket &rocket) {}
};

Rocket *Rocket::ms_rocket = NULL;

int main() {



	getchar();
	return 0;
}
