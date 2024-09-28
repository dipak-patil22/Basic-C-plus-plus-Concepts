int main() {
	const int u = 1;				// Y

	const int* const p = &u;		// Y

	u = u + 1;						// N

	*p = *p + 1;					// N

	int v = 2;						// Y

	p = &v;							// N
}