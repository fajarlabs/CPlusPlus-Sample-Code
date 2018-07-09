
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>
#include <typeinfo>

using namespace std;

int main()
{
	// typeid digunakan untuk memeriksa tipe dari variabel tersebut
	int * a, b;
	a = 0; b = 0;
	if (typeid(a) != typeid(b))
	{
		cout << "a and b are of different types:\n";
		cout << "a is: " << typeid(a).name() << '\n';
		cout << "b is: " << typeid(b).name() << '\n';
	}

	_getche();
	return EXIT_SUCCESS;
}

