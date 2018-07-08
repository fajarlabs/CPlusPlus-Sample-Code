
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>

using namespace std;

class Example4 {
	string* ptr;
public:
	// constructors:
	Example4() : ptr(new string) {}
	Example4(const string& str) : ptr(new string(str)) {}

	// cara inisialisasi destructor
	// destructor secara program dijalankan ketika
	// class ini tidak digunakan lagi atau dihapus
	// destructor:
	~Example4() { delete ptr; }

	// access content:
	const string& content() const { return *ptr; }
};

int main() {
	Example4 foo;
	Example4 bar("Example");

	cout << "bar's content: " << bar.content() << '\n';
	_getche();
	return EXIT_SUCCESS;
}

