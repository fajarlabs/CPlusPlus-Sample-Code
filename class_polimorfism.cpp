
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>

using namespace std;

// polimorfisme adalah class dengan banyak bentuk dengan syarat-syarat
// seperti berikut, class yang digunakan merupakan class turunan
// orang tua / parent.

class CPolygon {
protected:
	int width, height;
public:
	void set_values(int a, int b)
	{
		width = a; height = b;
	}
};
class CRectangle : public CPolygon {
public:
	int area()
	{
		return (width * height);
	}
};
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

	// contoh berikut, inisialisasi menggunakan kelas CPolygon
	// tetapi di isi dengan kelas CRectangle
	// dengan asumsi bahwa CRectangle adalah turunan dari CPolygon
	CPolygon * ppoly1 = &rect;
	CPolygon * ppoly2 = &trgl;
	// mengeset nilai dengan fungsi bawaan dari CPolygon
	ppoly1->set_values(4, 5);
	ppoly2->set_values(4, 5);

	// menampilkan nilai dengan menggunakan fungsi dari rectangle
	cout << rect.area() << endl;
	// menampilkan nilai dengan menggunakan fungsi dari triangle
	cout << trgl.area() << endl;

	_getche();
	return EXIT_SUCCESS;
}

