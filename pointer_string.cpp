#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int m, *n;
	m = 0;
	n = &m;

	const char * foo = "hello";
	// using pointer to showing the value
	cout << *(foo + 4);
	// same way to showed the value
	cout << foo[4];

	cin >> *n;
	return 0;
}
	

