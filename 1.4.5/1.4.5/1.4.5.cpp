// 1.4.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int doubleNumber(int n)
{
	return n * n;
}


int main()
{
	std::cout << "Enter a number: ";
	int x = 0;
	std::cin >> x;
	std::cout << doubleNumber(x) << std::endl;
	std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cin.get();
    return 0;
}

