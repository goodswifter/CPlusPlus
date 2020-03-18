#pragma once
#include <iostream>

using namespace std;

class Point {
	friend ostream &operator<<(ostream &, const Point &);
	int m_x;
	int m_y;

public:
	Point();
	Point(int x = 0, int y = 0);

	Point operator+(const Point &point) const;

	Point operator-(const Point &point) const;

	// 前++
	Point &operator++();

	// 后++
	const Point operator++(int);

	Point &operator+=(const Point &point);

	const Point operator-() const;
	
	~Point();
};