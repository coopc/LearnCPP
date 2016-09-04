// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	std::cout << "Enter a number: "; // ask user for a number
	int x = 0;
	std::cin >> x; //read number from console and store it in x
	std::cout << "You entered " << x << std::endl;

	std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cin.get();
    return 0;
}

