#include <iostream>
using namespace std;

int Add(int u, int v) {
	int w = 0;
	w = u + v;
	return w;
}

void main() {
	int i = 0;
	cout << "Enter first number: ";
	cin >> i;

	int j = 0;
	cout << "Enter second number: ";
	cin >> j;

	int k = Add(i, j); // 'i' and 'j' are known as arguments

	cout << "Sum of first and second number is " << k << endl;
}

/*
* u and v of 'Add' function are called as parameters.
* i and j passed to 'Add' in 'main' function are called as arguments.
* Data type has to be given to each parameter.
*/