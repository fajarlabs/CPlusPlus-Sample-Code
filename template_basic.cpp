
#include "stdafx.h"
#include <iostream>
using namespace std;
#include <conio.h>
#include <iomanip> //setiosflags

// membuat class templat	
template <class T>
class mypair {
	T a, b;
	public:
		// constructor
		mypair(T first, T second)
		{
			a = first; b = second;
		}

		T getmax();
};

// implementasi kelas diluar
template <class T>
T mypair<T>::getmax()
{
	T retval;
	retval = a>b ? a : b;
	return retval;
}

int main() {
	// cara menggunakan template dengan contoh integer
	mypair <int> myobject(100, 75);
	cout << myobject.getmax() << endl;

	// cara menggunakan template dengan contoh double
	mypair <double> myobject2(10.10, 75.0);
	cout << myobject2.getmax() << endl;

	_getche();
	return EXIT_SUCCESS;
}

