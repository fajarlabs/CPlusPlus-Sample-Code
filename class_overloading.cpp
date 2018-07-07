
#include "stdafx.h"
#include <iostream>
using namespace std;
#include <conio.h>
#include <iomanip> //setiosflags

// maksud dari overloading yaitu dimana method/fungsi/constructor dibuat dengan nama yang sama 
// tetapi parameter pada fungsi berbeda
// contoh sekarang dipakai pada constructor

class Rectangle {
	int width, height;
public:
	Rectangle();
	Rectangle(int, int);
	int area(void) { return (width*height); }
};

Rectangle::Rectangle() {
	width = 5;
	height = 5;
}

Rectangle::Rectangle(int a, int b) {
	width = a;
	height = b;
}

int main() {
	Rectangle rect(3, 4);
	Rectangle rectb;
	cout << "rect area: " << rect.area() << endl;
	cout << "rectb area: " << rectb.area() << endl;
	_getche();
	return EXIT_SUCCESS;
}

