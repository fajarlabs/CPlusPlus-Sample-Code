
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>
#include <typeinfo>

// Penggunaan define selalu ditempatkan pada awal program
// define tidak diakhiri dengan titik koma
// kode dibuat sebaris
// nilai tidak dapat diubah
#define MAX 3

// membuat fungsi dengan define
#define getmax(a,b) ((a)>(b)?(a):(b))

using namespace std;

int main()
{
	cout << "Nilai dari MAX adalah : " << MAX;
	int x = 5, y;
	y = getmax(x, 2);
	cout << y << endl;
	cout << getmax(7, x) << endl;

	_getche();
	return EXIT_SUCCESS;
}

