void f(int p) {}

void f(const int q) {}

int main() {
	const int a = 1;
	f(a);
}

/*
- Results into error.
*/