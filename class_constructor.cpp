
#include "stdafx.h"
#include <iostream>
using namespace std;
#include <conio.h>
#include <iomanip> //setiosflags

class Rectangle {
	int width, height;
public:
	Rectangle(int, int); // constructor
	void set_values(int, int);
	int area(void);
} rect(5,5); // inisialisasi juga bisa dilakukan langsung ke variable, maupun set nilai constructor

// implementasi constructor
Rectangle::Rectangle(int a, int b) {
	width = a;
	height = b;
}

// implementasi dari blueprint / interface class rectangle
void Rectangle::set_values(int w, int h) {
	width = w;
	height = h;
}
int Rectangle::area() {
	return width * height;
}

int main()
{
	cout << rect.area() << endl;

	_getche();
	return EXIT_SUCCESS;
}

