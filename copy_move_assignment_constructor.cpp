
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>

using namespace std;

/**
MyClass fn();            // function returning a MyClass object
MyClass foo;             // default constructor
MyClass bar = foo;       // copy constructor
MyClass baz = fn();      // move constructor
foo = bar;               // copy assignment
baz = MyClass();         // move assignment
*/

class Example6 {
	string* ptr;
public:
	Example6(const string& str) : ptr(new string(str)) {}
	~Example6() { delete ptr; }
	// move constructor
	Example6(Example6&& x) : ptr(x.ptr) { x.ptr = nullptr; }

	// overload operator =
	// move assignment
	Example6& operator= (Example6&& x) {
		delete ptr;
		ptr = x.ptr;
		x.ptr = nullptr;
		return *this;
	}
	// access content:
	const string& content() const { return *ptr; }

	// overload operator +
	// addition:
	Example6 operator+(const Example6& rhs) {
		return Example6(content() + rhs.content());
	}
};


int main() {
	Example6 foo("Exam");
	Example6 bar = Example6("ple");   // move-construction

	foo = foo + bar;                  // move-assignment

	cout << "foo's content: " << foo.content() << '\n';
	_getche();
	return EXIT_SUCCESS;
}

