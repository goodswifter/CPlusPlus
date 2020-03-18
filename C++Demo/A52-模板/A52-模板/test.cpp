#include <iostream>
#include "Swap.hpp"
using namespace std;

void test() {
	int a = 20;
	int b = 30;
	swapValues(a, b);
	cout << "test() a = " << a << ", b = " << b << endl;
}