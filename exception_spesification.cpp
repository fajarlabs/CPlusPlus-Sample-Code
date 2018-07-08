
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>

using namespace std;

class myexception : public exception
{
	virtual const char* what() const throw()
	{
		return "My exception happened";
	}
} myex; // lihat initialize myex

int main() {
	try
	{
		// di lempar ke myex
		throw myex;
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}

	_getche();
	return EXIT_SUCCESS;
}

