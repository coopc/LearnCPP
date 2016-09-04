// 1.4.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int doubleNumber(int x)
{
	return x * x;
}


int main()
{
	std::cout << doubleNumber(2) << std::endl;

	std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cin.get();
    return 0;
}

