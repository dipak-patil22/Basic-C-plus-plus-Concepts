int main() {
	const int u = 1;		// Y

	int const* p = &u;		// Y

	u = u + 1;				// Y

	*p = *p + 1;			// Y

	int v = 2;				// Y

	p = &v;					// Y
}