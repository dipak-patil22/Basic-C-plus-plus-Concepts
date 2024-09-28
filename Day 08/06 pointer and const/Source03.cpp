int main() {
	int u = 1;				// Y

	const int* p = &u;		// Y

	u = u + 1;				// Y

	*p = *p + 1;			// Y

	int v = 2;				// Y

	p = &v;					// Y
}