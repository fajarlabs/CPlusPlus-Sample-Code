
#include "stdafx.h"
#include <iostream>
using namespace std;
#include <conio.h>
#include <iomanip> //setiosflags

// contoh uniform init
// banyak cara untuk melakukan inisialisasi constructor

// 1.) functional form (cara umum)
// 2.) assignment init (seperti mengisi variable biasa)
// 3.) uniform init (seperti mengisi enumeration)
// 4.) POD-like (seperti mengisi array);

class Circle {
	double radius;
public:
	Circle(double r) { radius = r; }
	double circum() { return 2 * radius*3.14159265; }
};

// contoh seperti berikut ini
int main() {
	Circle foo(10.0);   // functional form
	Circle bar = 20.0;   // assignment init.
	Circle baz{ 30.0 };   // uniform init.
	Circle qux = { 40.0 }; // POD-like

	cout << "foo's circumference: " << foo.circum() << '\n';

	_getche();
	return EXIT_SUCCESS;
}

