
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>
#include <typeinfo>
#include <stdio.h>

using namespace std;

// lokasi error pada line 14
// tampilkan informasi mengenai error tersebut
#line 14
void func_1()
{
	printf("Func_1 - the current line number is %d\n", __LINE__);
}

// lokasi error pada line 20
// tampilkan informasi mengenai error tersebut
#line 20
void func_2()
{
	printf("Func_2 - the current line number is %d\n", __LINE__);
}

int main()
{
	func_1();
	func_2();

	_getche();
	return EXIT_SUCCESS;
}


