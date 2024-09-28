void f() {
	int i = 1;
}

int main() {
	int i = 5;
	f();
}

/*
- Can two functions have local variables with same name?
- Yes. Both 'f' and 'main' can have their own local varibale 'i'.
- Both 'i's are treated as different.
- Non-static local variables are located in stack frame.
*/
