#include <iostream>
using namespace std;

#include "calc.h"

void main() {
	int i = 0;
	std::cout << "Enter first number: ";
	std::cin >> i;

	int j = 0;
	std::cout << "Enter second number: ";
	std::cin >> j;

	int k = Add(i, j);

	std::cout << "Sum of first and second number is " << k << std::endl;
}

/*
* Enclose header file names in <> if it has to be located in standard include directories.
* Enclose header file names in "" if it has to be located in source file directory.
*/