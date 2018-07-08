
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>

using namespace std;

class CPolygon {
protected:
	int width, height;
public:
	void set_values(int a, int b)
	{
		width = a; height = b;
	}

	// dengan menambahkan kata kunci / modifier virtual
	// fungsi dibawah ini nantinya akan di override oleh turunannya
	// dan digunakan nanti ketika melakukan polimorfisme
	virtual int area()
	{
		return (0);
	}
};


class CRectangle : public CPolygon {
public:
	// kelas telah di override
	int area()
	{
		return (width * height);
	}
};
class CTriangle : public CPolygon {
public:
	// kelas telah di override
	int area()
	{
		return (width * height / 2);
	}
};
int main() {
	CRectangle rect;
	CTriangle trgl;
	CPolygon poly;

	// metode contoh yang digunakan dengan menerapkan konsep
	// polimorfisme dimana nanti fungsi tersebut diubah oleh turunannya
	CPolygon * ppoly1 = &rect;
	CPolygon * ppoly2 = &trgl;
	CPolygon * ppoly3 = &poly;
	ppoly1->set_values(4, 5);
	ppoly2->set_values(4, 5);
	ppoly3->set_values(4, 5);

	// disini bukan lagi return (0)
	// karena telah diubah sebelumnya
	cout << ppoly1->area() << endl;
	cout << ppoly2->area() << endl;

	// disini berisi nilai 0 karena kelas aslinya
	cout << ppoly3->area() << endl;

	_getche();
	return EXIT_SUCCESS;
}

