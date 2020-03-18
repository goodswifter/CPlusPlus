#include <iostream>
using namespace std;

class Sum {
public:
	int operator()(int a, int b) {
		return a + b;
	}
};

int main() {

	Sum sum;
	cout << sum(10, 20) << endl;

	getchar();
	return 0;
}
