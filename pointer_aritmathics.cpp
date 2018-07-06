#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	/**
	*p++   // same as *(p++): increment pointer, and dereference unincremented address
	*++p   // same as *(++p): increment pointer, and dereference incremented address
	++*p   // same as ++(*p): dereference pointer, and increment the value it points to
	(*p)++ // dereference pointer, and post-increment the value it points to 
	*/
	int m, *n;
	m = 0;
	n = &m;

	long initvar = 5;
	long *mylong = &initvar;

	cout << "Address is : " << mylong << "& value is : " << *mylong << '\n';
	
	// if you give comment then the initvar is changing.
	//++mylong; 
	*mylong = 7;
	cout << "After increment Address is : " << mylong << " & value is : " << initvar << '\n';

	cin >> *n;
	return 0;
}
	

