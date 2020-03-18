#include "Point.h"

Point::Point() {}

Point::~Point() {}

Point::Point(int x, int y) : m_x(x), m_y(y) {};


// +
Point Point::operator+(const Point &point) const {
	return Point(this->m_x + point.m_x, this->m_y + point.m_y);
}

// 减号-
Point Point::operator-(const Point &point) const {
	return Point(this->m_x - point.m_x, this->m_y - point.m_y);
}

// 前++
Point &Point::operator++() {
	++m_x;
	++m_y;
	return *this;
}

// 后++
const Point Point::operator++(int) {
	return Point(m_x++, m_y++);
}

// +=
Point &Point::operator+=(const Point &point) {
	this->m_x = point.m_x;
	this->m_y = point.m_y;
	return *this;
}

// 负号-
const Point Point::operator-() const {
	return Point(-this->m_x, -this->m_y);
}

ostream &operator<<(ostream &cout, const Point &point) {
	return cout << "(" << point.m_x << ", " << point.m_y << ")";
}