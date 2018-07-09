
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>
#include <typeinfo>
#include <stdio.h>

using namespace std;
/**
--------------------------------------------------------------------------------------------------------------------------------
NAMA MACRO         |       value
--------------------------------------------------------------------------------------------------------------------------------
__LINE__               Integer value representing the current line in the source code file being compiled.
__FILE__               A string literal containing the presumed name of the source file being compiled.
__DATE__               A string literal in the form "Mmm dd yyyy" containing the date in which the compilation process began.
__TIME__               A string literal in the form "hh:mm:ss" containing the time at which the compilation process began.
__cplusplus            An integer value.All C++ compilers have this constant defined to some value.If the compiler is fully
                       compliant with the C++ standard
---------------------------------------------------------------------------------------------------------------------------------
*/
int main()
{
	cout << "This is the line number " << __LINE__;
	cout << " of file " << __FILE__ << ".\n";
	cout << "Its compilation began " << __DATE__;
	cout << " at " << __TIME__ << ".\n";
	cout << "The compiler gives a __cplusplus value of ";
	cout << __cplusplus;

	_getche();
	return EXIT_SUCCESS;
}


