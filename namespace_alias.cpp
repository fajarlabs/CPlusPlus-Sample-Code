
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>

using namespace std;

namespace foo {
	namespace bar {
		namespace baz {
			int qux = 42;
		}
	}
}

// cara membuat alias namespace
// seperti berikut ini
namespace fbz = foo::bar::baz;

int main()
{
	std::cout << fbz::qux << '\n';

	_getche();
	return EXIT_SUCCESS;
}

