#pragma once

template <class T> void swapValues(T &t1, T &t2) {
	T tmp = t1;
	t1 = t2;
	t2 = tmp;
}