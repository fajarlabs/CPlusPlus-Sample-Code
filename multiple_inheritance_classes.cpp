
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>

using namespace std;

// multiple inherittance bisa diartikan sebagai class
// dengan banyak turunan dari kelas lain menjadi satu

class CPolygon {
protected:
	int width, height;
public:
	void set_values(int a, int b)
	{
		width = a; height = b;
	}
};


class COutput {
public:
	void output(int i);
};
void COutput::output(int i) {
	cout << i << endl;
}

// contoh berikut ini implementasinya
class CRectangle : public CPolygon, public COutput {
public:
	int area()
	{
		return (width * height);
	}
};
class CTriangle : public CPolygon, public COutput {
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
	rect.output(rect.area());
	trgl.output(trgl.area());


	_getche();
	return EXIT_SUCCESS;
}

