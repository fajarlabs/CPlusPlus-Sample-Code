
#include "stdafx.h"
#include <iostream>
using namespace std;
#include <conio.h>
#include <iomanip> //setiosflags

/**
------------------------------------------------------------------
operator yang diboleh untuk di overload
------------------------------------------------------------------
+    -    *    /    =    <    >    +=   -=   *=   /=   <<   >>
<<=  >>=  ==   !=   <=   >=   ++   --   %    &    ^    !    |
~    &=   ^=   |=   &&   ||   %=   []   ()   ,    ->*  ->   new
delete    new[]     delete[]
------------------------------------------------------------------
*/

class CVector {
public:
	int x, y;
	CVector() {}
	// inisialisasi nilai constructor
	CVector(int a, int b) : x(a), y(b) {}
};

// implementasi untuk overload operator
CVector operator + (const CVector& lhs, const CVector& rhs) {
	CVector temp;
	temp.x = lhs.x + rhs.x;
	temp.y = lhs.y + rhs.y;
	return temp;
}

int main() {
	CVector foo(3, 1);
	CVector bar(1, 2);
	CVector result;

	// ini adalah implementasi cara untuk menggunakan
	// operator setelah di overload tersebut
	result = foo + bar;
	cout << result.x << ',' << result.y << '\n';

	_getche();
	return EXIT_SUCCESS;
}

