
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //setiosflags
#include <string>
#include <typeinfo>
#include <stdio.h>
#include <fstream>
#include <thread>         // std::thread
#include <chrono>         // std::chrono::seconds

using namespace std;

// maksud dari joinable adalah apakah thread tersebut bisa digabung

void mythread()
{
	// do stuff...
}

int main()
{
	std::thread foo;
	std::thread bar(mythread);

	std::cout << "Joinable after construction:\n" << std::boolalpha;
	std::cout << "foo: " << foo.joinable() << '\n';
	std::cout << "bar: " << bar.joinable() << '\n';

	// contoh dibawah ini untuk memeriksa apakah thread ini bisa digabung
	if (foo.joinable()) foo.join();
	if (bar.joinable()) bar.join();

	std::cout << "Joinable after joining:\n" << std::boolalpha;

	// ketika sudah bergabung maka dibawah ini hasil akan false
	std::cout << "foo: " << foo.joinable() << '\n';
	std::cout << "bar: " << bar.joinable() << '\n';

	_getche();
	return EXIT_SUCCESS;
}


