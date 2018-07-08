
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>

using namespace std;

namespace first
{
	int x = 5;
	int y = 10;
}
namespace second
{
	double x = 3.1416;
	double y = 2.7183;
}
int main() {
	// penggunakan using seperti berikut ini
	using first::x;
	using second::y;

	// variable yang dipanggil dari namespace
	cout << x << endl;
	cout << y << endl;
	cout << first::y << endl;
	cout << second::x << endl;

	_getche();
	return EXIT_SUCCESS;
}

