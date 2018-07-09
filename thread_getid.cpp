
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

std::thread::id main_thread_id = std::this_thread::get_id();

void is_main_thread() {
	if (main_thread_id == std::this_thread::get_id())
		std::cout << "This is the main thread.\n";
	else
		std::cout << "This is not the main thread.\n";
}

int main()
{
	// ini adalah thread utama
	is_main_thread();

	// disini ditemukan bukan thread utama
	std::thread th(is_main_thread);

	// gabung dengan thread utama
	th.join();

	_getche();
	return EXIT_SUCCESS;
}


