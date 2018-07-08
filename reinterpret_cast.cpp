
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>

using namespace std;

class A {};
class B {};


int main()
{
	// reinterpret_cast mengkonversi semua jenis pointer ke tipe pointer lain, 
	// bahkan dari kelas yang tidak terkait. Operasi
	// Hasilnya adalah salinan biner sederhana dari nilai dari satu pointer ke yang lain.
	// Semua konversi penunjuk dibolehkan :
	// baik konten yang ditunjuk maupun jenis pointer itu sendiri tidak dicentang.
	// Ini adalah kode C ++ yang valid, meskipun itu tidak masuk akal, 
	// karena sekarang kita memiliki pointer yang menunjuk ke suatu
	// objek dari kelas yang tidak kompatibel, dan dengan demikian dereferencing itu tidak aman.

	A * a = new A;
	// mengkasting yang bukan dari class tersebut(maksudnya turunannya)
	B * b = reinterpret_cast<B*>(a);

	_getche();
	return EXIT_SUCCESS;
}

