struct Dummy {};

int main() {
	Dummy dummy;
}

/*
- The size of empty struct is 1 byte.
- Note this byte cannot be accessed.
- It is there to indicate presense of an object.
*/
