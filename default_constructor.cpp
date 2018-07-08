
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>

using namespace std;

class Example3 {
	string data;
	int other_data;
public:
	// default constructor dengan 2 parameter (string dan integer)
	Example3(const string& str,int i) : data(str),other_data(i) {}

	Example3() {}
	const string& content() const { return data; }
	int get_otherdata() { return other_data; }
};

int main() {
	Example3 foo;
	Example3 bar("Example",123);

	cout << "bar's content: " << bar.content() << '\n';
	cout << "other's content: " << bar.get_otherdata();

	_getche();
	return EXIT_SUCCESS;
}

