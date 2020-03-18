#include <iostream>
using namespace std;

class Point {
	// 2. 友元函数
	friend Point add2(const Point &, const Point &);

	// 3. 友元类
	friend class Math;
private:
	int m_x;
	int m_y;

public:
	int getX() const { return this->m_x; };
	int getY() const { return this->m_y; };
	Point(int x = 0, int y= 0) :m_x(x), m_y(y) {}

	void display() {
		cout << "(" << m_x << ", " << m_y << ")" << endl;
	}
};

// 1. 普通函数
Point add1(const Point &p1, const Point &p2) {
	return Point(p1.getX() + p2.getX(), p1.getY() + p2.getY());
}

// 2. 友元函数
Point add2(const Point &p1, const Point &p2) {
	return Point(p1.m_x + p2.m_x, p1.m_y + p2.m_y);
}

// 3. 友元类
class Math {
public:
	Point add3(const Point &p1, const Point &p2) {
		return Point(p1.m_x + p2.m_x, p1.m_y + p2.m_y);
	}
};

int main() {

	Point p1(10, 20);
	Point p2(20, 40);
	Point p = Math().add3(p1, p2);

	p.display();

	getchar();
	return 0;
}
