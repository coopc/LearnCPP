// 1.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

// Definition of function doPrint()
void doPrint() // doPrint() is the called function in this example
{
	std::cout << "In doPrint()" << std::endl;
}

int main()
{
	std::cout << "Starting main()" << std::endl;
	doPrint(); // Interrupt main() by making a function call to doPrint(). main() is the caller
	std::cout << "Ending main()" << std::endl;

	std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cin.get();
    return 0;
}

