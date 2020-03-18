﻿#pragma once

#include <iostream>
using namespace std;

template <class Item>
class Array {
	friend ostream &operator<<<>(ostream &, const Array<Item> &);
private:
	int m_size = 0;
	int m_capacity = 0;
	Item *m_data = NULL;

public:
	Array(int capacity);
	~Array();
	void add(Item value);
	Item get(int index);
	int size();
	Item operator[](int index);
};

template <class Item>
Array<Item>::Array(int capacity) {
	if (capacity <= 0) return;

	m_data = new Item[capacity]{};
	m_capacity = capacity;
}

template <class Item>
Array<Item>::~Array() {
	if (!m_data) return;

	delete[] m_data;
	m_data = NULL;
}

template <class Item>
void Array<Item>::add(Item value) {
	if (m_size == m_capacity) {
		cout << "数组已满" << endl;
		return;
	}
	m_data[m_size++] = value;
}

template <class Item>
Item Array<Item>::get(int index) {
	if (index < 0 || index >= this->m_size) return 0;
	return this->m_data[index];
}

template <class Item>
int Array<Item>::size() {
	return this->m_size;
}

template <class Item>
Item Array<Item>::operator[](int index) {
	return get(index);
}

template <class Item>
ostream &operator<<<>(ostream &cout, const Array<Item> &array) {
	cout << "[";
	for (int i = 0; i < array.m_size; i++) {
		cout << array.m_data[i];
		if (i != array.m_size - 1) {
			cout << ", ";
		}
	}
	return cout << "]";
}