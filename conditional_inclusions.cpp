
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

// penggunaan undef dipakai untuk menghapus identifier yang sudah ada sebelumnya
#undef MAX

// if harus diletakkan posisi paling atas/utama
// jika identifier MAX tidak didefinisikan maka
// buat identifier MAX dan di isi nilai 4
#if !defined MAX
#define MAX 4
#endif

// untuk memeriksa apakah identifier MAX tersedia
#ifdef MAX
#undef MAX
#define MAX 5
#endif

#ifndef MAX
#define MAX 5
#endif 

// untuk menampilkan error jika tidak terdefinisikan
#ifndef __cplusplus
#error A C++ compiler is required!
#endif 




using namespace std;

int main()
{
	// baris kode dibawah ini akan terjadi error
	// karena variable MAX sudah dihapus
	cout << "Nilai dari MAX adalah : " << MAX;

	int x = 5, y;
	y = getmax(x, 2);
	cout << y << endl;
	cout << getmax(7, x) << endl;

	_getche();
	return EXIT_SUCCESS;
}

