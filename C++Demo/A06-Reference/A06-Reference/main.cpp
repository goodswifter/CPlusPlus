#include <iostream>
using namespace std;

enum Season {
	Spring,
	Summer,
	Fall,
	Winter
};



struct Student {
	int age;
};

// 5. ��������������ֵ
void oldSwap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// ���õķ�ʽ
void swap(int &a, int &b) {
	int temp = a;
	a = b;
    b = temp;
}

// 7. ��������ֵ���Ա���ֵ
int age = 10;

int &func() {
	// age���ֲ���
	// ��ʽһ
	//int &rAge = age;
	//return rAge;
	// ��ʽ��
	return age;
}

int main() {

	// 1. ָ������������͵�����
	//int age = 10;
	//int &rAge = age;
	//rAge = 20;

	//cout << age << endl;
	//cout << rAge << endl;

	// 2.  ָ��ö�ٵ�����
	//Season season;
	//Season &rSeason = season;
	//rSeason = Winter;
	//cout << season << endl;

	// 3. ָ��ṹ�塢�������
	//Student stu;
	//Student &rStu = stu;
	//rStu.age = 20;
	//cout << stu.age << endl;

	// 4. ָ��ָ�������
	//int a = 10;
	//int b = 20;
	//int *p = &a;
	//int *&rP = p;
	//rP = &b;

	//cout << *p << endl;

	// 5. ָ�����������
	//int array[] = { 10, 20, 30 };
	//int (&rArray)[3] = array;
	//rArray[0] = 11;

	//cout << array[0] << endl;

	// 6. �����ý�������������ֵ
	//int a = 10;
	//int b = 20;

	//// �ɷ���
	////oldSwap(&a, &b);

	//// ���õķ�ʽ
	//swap(a, b);

	//cout << "a is " << a << endl;
	//cout << "b is " << b << endl;


	// 7. ��������ֵ���Ա���ֵ
	func() = 30;
	cout << age << endl;

	// 2. ������һ�����ã��൱���Ǳ����ı���
	//int age = 10;
	//int &rAge = age;
	//int &rAge1 = rAge;
	//int &rAge2 = rAge1;

	//rAge = 11;
	//cout << age << endl;

	//rAge1 = 22;
	//cout << age << endl;

	//rAge2 = 33;
	//cout << age << endl;

	getchar();
	return 0;
}