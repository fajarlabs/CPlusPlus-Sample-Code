
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

	// ini adalah interface / blueprint sebagai abstract method
	// dimana fungsi ini oleh turunannya harus di implementasikan
	// jika tidak akan menghasilkan exception / error
	virtual int area(void) = 0;
};


class CRectangle : public CPolygon {
public:
	// function turunan telah di implementasikan 
	// oleh turunannya
	int area(void)
	{
		return (width * height);
	}
};


class CTriangle : public CPolygon {
public:
	// function turunan telah di implementasikan 
	// oleh turunannya
	int area(void)
	{
		return (width * height / 2);
	}
};


int main() {
	CRectangle rect;
	CTriangle trgl;
	CPolygon * ppoly1 = &rect;
	CPolygon * ppoly2 = &trgl;
	ppoly1->set_values(4, 5);
	ppoly2->set_values(4, 5);
	cout << ppoly1->area() << endl;
	cout << ppoly2->area() << endl;

	_getche();
	return EXIT_SUCCESS;
}

