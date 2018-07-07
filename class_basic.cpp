
#include "stdafx.h"
#include <iostream>
using namespace std;
#include <conio.h>
#include <iomanip> //setiosflags

class Rectangle {
	int width, height;
public:
	void set_values(int, int);
	int area(void);
} rect; // inisialisasi juga bisa dilakukan langsung ke variable

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
	rect.set_values(5, 5);
	cout << rect.area() << endl;

	_getche();
	return EXIT_SUCCESS;
}

