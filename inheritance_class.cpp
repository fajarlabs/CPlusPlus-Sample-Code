
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>

using namespace std;

class CPolygon {
	// modifier private berarti hanya kelas ini yang bisa menggunakan
	// modifier protected berarti hanya kelas turunan yang bisa menggunakan
	// public berarti bisa diakses public
protected:
	int width, height;
public:
	void set_values(int a, int b)
	{
		width = a; height = b;
	}
};

// menerima kelas turunan dari CPolygon
class CRectangle : public CPolygon {
public:
	int area()
	{
		return (width * height);
	}
};

// menerima kelas turunan dari CPolygon
class CTriangle : public CPolygon {
public:
	int area()
	{
		return (width * height / 2);
	}
};

int main() {
	CRectangle rect;
	CTriangle trgl;
	rect.set_values(4, 5);
	trgl.set_values(4, 5);
	cout << rect.area() << endl;
	cout << trgl.area() << endl;

	_getche();
	return EXIT_SUCCESS;
}

