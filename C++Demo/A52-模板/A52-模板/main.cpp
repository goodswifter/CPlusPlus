#include <iostream>
#include "Swap.hpp"
#include "Array.hpp"
using namespace std;

void test();

int main() {

	//test();

	//int a = 10;
	//int b = 20;

	//swapValues(a, b);
	//cout << "main() a = " << a << ", b = " << b << endl;
	Array<int> arr(10);
	arr.add(1);
	arr.add(2);
	arr.add(3);
	arr.add(4);

	cout << arr << endl;
	cout << arr[2] << endl;
	cout << arr.get(3) << endl;

	getchar();
	return 0;
}
