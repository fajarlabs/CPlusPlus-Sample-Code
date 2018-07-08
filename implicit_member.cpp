
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>

using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle(int x, int y) : width(x), height(y) { }

	// implicit member default
	Rectangle() = default;

    // implicit member default
	// It could, however, be made explicitly valid by defining its copy constructor as:
	Rectangle(const Rectangle& other) = delete;
	int area() { return width * height; }
};

int main() {
	Rectangle foo;
	Rectangle bar(10, 20);

	cout << "bar's area: " << bar.area() << '\n';

	_getche();
	return EXIT_SUCCESS;
}

