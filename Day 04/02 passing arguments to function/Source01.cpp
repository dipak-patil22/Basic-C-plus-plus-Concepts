#include <iostream>
using namespace std;

int Add(int u, int v) {
	int w = 0;
	w = u + v;
	cout << "Sum of first and second number is " << w << endl;
}

void main() {
	int i = 0;
	cout << "Enter first number: ";
	cin >> i;

	int j = 0;
	cout << "Enter second number: ";
	cin >> j;

	Add(i, j); // 'i' and 'j' are known as arguments
}
