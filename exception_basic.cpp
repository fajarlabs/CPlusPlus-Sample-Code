
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>

using namespace std;

double division(int a, int b) {
	if (b == 0) {
		// melempar exception dalam bentuk char / string message
		throw "Division by zero condition!";
	}
	return (a / b);
}

int main() {
	int x = 50;
	int y = 0;
	double z = 0;

	try {
		z = division(x, y);
		cout << z << endl;
	}
	catch (const char* msg) {
		cerr << msg << endl;
	}

	_getche();
	return EXIT_SUCCESS;
}

