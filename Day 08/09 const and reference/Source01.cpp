int main() {
	int a = 1;
	const int b = 1;

	int &ra = a;
	int &rb = b;

	const int &cra = a;
	const int &crb = b;
}

/*
- non-const reference can refer to non-const referent only.
- const reference can refer to const as well as non-const referent.
*/