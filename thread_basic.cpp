
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


void foo()
{
	// do stuff...
	cout << "foo starting ..." << endl;
}

void bar(int x)
{
	// do stuff...
	cout << "bar starting and parameter : " << x << endl;
}

int main()
{
	// thread dimulai
	std::thread first(foo);     // spawn new thread that calls foo()

	// thread dimulai dan mengisi parameter fungsi bar
	std::thread second(bar, 4);  // spawn new thread that calls bar(0)

	std::cout << "main, foo and bar now execute concurrently...\n";

	// synchronize threads:
	first.join();                // pauses until first finishes
	second.join();               // pauses until second finishes

	std::cout << "foo and bar completed.\n";
	_getche();
	return EXIT_SUCCESS;
}


