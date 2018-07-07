
#include "stdafx.h"
#include <iostream>
using namespace std;
#include <conio.h>
#include <iomanip> //setiosflags

int main()
{
	// set january bernilai awal 1
	enum Months { january=1, february, march, april, may, june, july, august, september, october, november, desember } y2k;
	Months m = january;
	// jika dilihat lagi pada bulan february berisi nilai 2
	cout << february << endl;
	// atau cara pengaksesan lain seperti berikut, sama berisi nilai 2
	cout << Months::february << endl;

	switch (m)
	{
		case january: std::cout << "January\n";   break;
	}
	cout << 
	_getche();
	return EXIT_SUCCESS;
}

