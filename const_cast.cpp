
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>

using namespace std;

void print(char * str)
{
	cout << str << endl;
}

int main()
{
	// Jenis casting ini memanipulasi konstanta suatu objek, 
	// baik untuk disetel atau dihapus.Misalnya, dalam menyampaikan argumen const ke fungsi 
	// yang mengharapkan parameter non - konstan, seperti berikut ini
	const char * c = "sample text";
	
	// konversi dari const dijadikan non-const
	print(const_cast<char *> (c));

	_getche();
	return EXIT_SUCCESS;
}

