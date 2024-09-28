#include <iostream>

int Add(int u, int v); // Function Decaration / Function Prototype

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

int Add(int u, int v) {
	int w = 0;
	w = u + v;
	return w;
}
