#include <iostream>
using namespace std;

struct Student {
	int age;
};

int func() {
	return 10;
}

int sum(int *a, int *b) {
	return *a + *b;
}

int sum(const int *a, const int *b) {
	return *a + *b;
}

int main() {

	int v1 = 10;
	int v2 = 20;
	sum(&v1, &v2);

	const int v3 = 10;
	const int v4 = 20;
	sum(&v3, &v4);

	//sum(50, 60);


	// 5. �����ÿ���ָ����ʱ����(���������ʽ����������ֵ��)
	//int a = 20;
	//int b = 30;
	//int age = 10; // 4
	//const double &ref = age; // 8
	//const int &rAge = func();
	//const int &rAge = 40;
	//const int &rAge = a + b;

	//// 4. ���õı��ʾ���ָ��
	//int age = 10;
	// // rAge��ָ�����Ͳ��ܸģ�constֻ��ǿ������
	// int & const rAge = age;

	// // ����ͨ�������޸���ָ�������
	//const int &rAge1 = age;
	//rAge1 = 30;


	// // ����ͨ��ָ���޸���ָ�������
	// int const *pAge1 = &age;
	// // �����޸�ָ���ָ�򣬵��ǿ���ͨ��ָ���޸���ָ�������
	// int * const pAge2 = &age;


	// 2. ���νṹ��
	//Student stu1 = { 10 };
	//Student stu2 = { 20 };

	//const Student stu = { 20 };
	//Student stu2 = { 40 };
	//stu = stu2; // ���ܱ���ֵ
	//stu.age = 50; // �ṹ��ĳ�Ա�������ܱ���ֵ

	// 3. ���νṹ���ָ��
	//Student stu = { 20 };
	//stu.age = 40;

	//const Student *pStu = &stu;
	//pStu->age = 50;

	//const Student *pStu = &stu1;
	////*pStu = stu2; // *pStu�ǳ���
	//// ������ε����ࡢ�ṹ��(��ָ��)�����ԱҲ�����Ը���
	////(*pStu).age = 30;
	////pStu->age = 40;
	//pStu = &stu2; // pStu���ǳ���

	// 1. ����5��ָ��ֱ���ʲô����
	//int age = 10;
	//// *p0�ǳ�����p0���ǳ���
	//const int *p0 = &age;
	//// *p1�ǳ�����p1���ǳ���
	//int const *p1 = &age;
	//// p2�ǳ�����*p2���ǳ���
	//int * const p2 = &age;
	//// *p3�ǳ�����p3�ǳ���
	//const int * const p3 = &age;
	//// *p4�ǳ�����p4�ǳ���
	//int const * const p4 = &age;

	getchar();
	return 0;
}
