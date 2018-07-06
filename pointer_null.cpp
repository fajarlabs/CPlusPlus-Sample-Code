// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int m, *n;
	m = 0;
	n = &m;

	int * p = 0;
	cout << &p << '\n';
	int * q = nullptr;
	cout << &q << '\n';

	// old
	int * r = NULL;

	cin >> *n;
	return 0;
}
	

