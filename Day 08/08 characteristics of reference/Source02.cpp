int main() {
	int &j = nullptr;
	int &k = 1;
	int&& r = 1;
	int& arr[3];
}

/*
- Reference cannot be null.
- Lvalue reference cannot refer to constant. Such reference is called as l-value reference.
- Array of references not possible.
- What is lvalue?
  lvalue is an expression whose address is available.
*/
