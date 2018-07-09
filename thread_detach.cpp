
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

void pause_thread(int n)
{
	std::this_thread::sleep_for(std::chrono::seconds(n));
	std::cout << "pause of " << n << " seconds ended\n";
}

int main()
{
	std::cout << "Spawning and detaching 3 threads...\n";
	std::thread(pause_thread, 1).detach();
	std::thread(pause_thread, 2).detach();
	std::thread(pause_thread, 3).detach();
	std::cout << "Done spawning threads.\n";

	std::cout << "(the main thread will now pause for 5 seconds)\n";
	// give the detached threads time to finish (but not guaranteed!):
	pause_thread(5);

	_getche();
	return EXIT_SUCCESS;
}


