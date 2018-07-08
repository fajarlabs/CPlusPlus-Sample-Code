
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>

using namespace std;

// namespace ibarat sebuah loker memory 
// dimana loker bisa dengan nama-nama berbeda

namespace first
{
	int var = 5;
}
namespace second
{
	double var = 3.1416;
}
int main() {
	cout << first::var << endl;
	cout << second::var << endl;

	_getche();
	return EXIT_SUCCESS;
}

