
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>

using namespace std;

// template fungsi overload untuk memeriksa
// apakah variable tersebut berisi constanta
// atau variable biasa
template <typename T> bool isConst(T& x)
{
	return false;
}

template <typename T> bool isConst(T const& x)
{
	return true;
}

class Example5 {
	string* ptr;
	int *other_data;
public:
	// initialize constructor
	// copy value dan buat memory baru
	// tipe data konstanta, karena langsung di isi
	Example5(const string& str, const int data) : ptr(new string(str)), other_data( new int(data)) {

		// untuk testing apakah benar berisi konstanta
		cout << isConst(data) << endl;

		// alamat memory dari data
		cout << &data << endl;
		// berbeda dengan other data
		// karena telah ditempatkan kedalam memory baru
		// dengan kata kunci new pada inisialisasi
		cout << &other_data << endl;
	}

	// delete pointer yang tidak terpakai ketika di destroy
	~Example5() { delete ptr; delete other_data; }

	// copy constructor:
	Example5(const Example5& x) : ptr(new string(x.content())), other_data(new int(x.get_data())) {}

	// access content:
	// berikan modifier const agar secara implisit
	// diubah / diconvert menjadi constanta
	const string& content() const { return *ptr; }
	const int& get_data() const { return *other_data; }
};

int main() {
	Example5 foo("Example", 5);
	Example5 bar = foo; // lihat uniform initialization

	cout << "bar's content: " << bar.content() << '\n';
	cout << "other's content: " << bar.get_data() << '\n';
	_getche();
	return EXIT_SUCCESS;
}

