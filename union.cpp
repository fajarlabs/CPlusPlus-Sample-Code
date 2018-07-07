
#include "stdafx.h"
#include <iostream>
using namespace std;
#include <conio.h>
#include <iomanip> //setiosflags

/**
union digunakan untuk menyatakan suatu memori dengan nama 
lebih dari satu. Artinya, variabel-variabel yang ada di dalam 
union menempati alamat memori yang sama.
*/
union MyUnion
{
	//unsigned (tak bertanda) -> hanya bilangan positif saja
	unsigned int x;
	unsigned char y[2];
	unsigned int z;
};

int main()
{
	// inisialisasi parameter pertama yaitu x
	union MyUnion init = { 0x1441 };

	cout << "Berbagi memori dengan union" << endl;
	cout << "---------------------------" << endl;
	//ios::showbase -> menunjukkan basis bilangannnya
	//hex -> basis 16 (heksadesimal)
	cout << setiosflags(ios::showbase);
	cout << hex << "x    : " << init.x << endl;
	cout << hex << "y[0] : " << (int)init.y[0] << endl;
	cout << hex << "y[1] : " << (int)init.y[1] << endl;

	// perhatikan bahwa x dan z berisi nilai yang sama
	cout << hex << init.z << endl;

	_getche();
	return EXIT_SUCCESS;
}

