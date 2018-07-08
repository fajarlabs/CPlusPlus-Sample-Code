
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>

using namespace std;

class CSquare;
class CRectangle {
	int width, height;
public:
	int area()
	{
		return (width * height);
	}
	void convert(CSquare a);
};
class CSquare {
private:
	int side;
public:
	void set_side(int a)
	{
		side = a;
	}
	// implementasi interface friend class
	friend class CRectangle;
};
void CRectangle::convert(CSquare a) {
	// perhatikan disini bahwa class CRectangle
	// bisa mengakses variable private dari CSquare
	width = a.side;
	height = a.side;
}

int main() {
	CSquare sqr;
	CRectangle rect;
	sqr.set_side(4);
	rect.convert(sqr);
	cout << rect.area();

	_getche();
	return EXIT_SUCCESS;
}

