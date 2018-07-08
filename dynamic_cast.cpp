
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>

using namespace std;

class A
{
public:
	virtual void f() { cout << "A::f()" << endl; }
};

class B : public A
{
public:
	void f() { cout << "B::f()" << endl; }
};

int main()
{
	A a;
	B b;
	a.f();        // A::f()
	b.f();        // B::f()

	A *pA = &a;
	B *pB = &b;
	pA->f();      // A::f()
	pB->f();      // B::f()

	pA = &b;

	// dynamic_cast dapat digunakan hanya dengan pointer dan referensi ke objek. 
	// Tujuannya adalah untuk memastikan bahwa hasil dari
	// konversi jenis adalah objek lengkap yang valid dari kelas yang diminta.

	// kode dibawah ini tidak bisa untuk melakukan polimorfisme
	// penyebabnya adalah tidak sesuai dengan syarat ketentuan
	// pada prinsip class polimorfisme
	//pB = &a;      // not allowed

	// cara agar casting sukses seperti berikut
	pB = dynamic_cast<B*>(&a); // allowed but it returns NULL
	
	if (pB == 0) {
		cout << "null pointer on typecast but allowed" << endl;
	}

	_getche();
	return EXIT_SUCCESS;
}

