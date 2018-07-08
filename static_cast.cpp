
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>

using namespace std;

class CBase {

};
class CDerived : public CBase {};


int main()
{
	// init first
	CBase * a = new CBase;

	// konversi turunan anak dari orang tuanya
	CDerived * b = static_cast<CDerived*>(a);
	

	// static_cast juga dapat digunakan untuk melakukan konversi non-pointer 
	// lain yang juga dapat dilakukan secara implisit,
	// seperti misalnya konversi standar antara jenis - jenis mendasar :
	double d = 3.14159265;
	cout << "memory : " << &d << endl;
	int i = static_cast<int>(d);
	cout << "memory : " << &i << endl;

	cout << i;
	_getche();
	return EXIT_SUCCESS;
}

