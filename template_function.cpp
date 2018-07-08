
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>

using namespace std;

template <class T>
T GetMax(T a, T b) {
	T result;
	result = (a>b) ? a : b;
	return (result);
}
int main() {
	int i = 5, j = 6, k;
	long l = 10, m = 5, n;
	k = GetMax<int>(i, j);
	n = GetMax<long>(l, m);
	cout << k << endl;
	cout << n << endl;

	_getche();
	return EXIT_SUCCESS;
}

