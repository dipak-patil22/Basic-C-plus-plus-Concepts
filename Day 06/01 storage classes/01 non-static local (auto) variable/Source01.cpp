void f() {
	int i = 1;
}

int main() {
	f();
	i = 5; // attempting to access 'i' of 'f' here, but it is not possible.
}

/*
- A local variable is a variable defined within the block.
- 'i' is a local variable of function 'f'.
- 'i' is a non-static local variable.
- Non-static local variable are also called as automatic variables.
- The scope of local variable is limited to the block in which it is defined.
- 'i' is a local variable of 'f' hence its scope is limited to the 'f'.
- It cannot be accessed in any other function.
*/