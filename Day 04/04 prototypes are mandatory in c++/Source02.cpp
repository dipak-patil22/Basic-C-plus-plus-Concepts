#include <iostream>
using namespace std;

void main() {
	int i = 0;
	cout << "Enter first number: ";
	cin >> i;

	int j = 0;
	cout << "Enter second number: ";
	cin >> j;

	int k = Add(i, j);

	cout << "Sum of first and second number is " << k << endl;
}

int Add(int u, int v) {
	int w = 0;
	w = u + v;
	return w;
}
