class Dummy {
public:
	void F();
	static void G();
public:
	void H();
	static void K();
};

void Dummy::F() {}

void Dummy::G() {}

void Dummy::H() {
	F();
	G();
}

void Dummy::K() {
	F();
	G();
}

/*
- A non static member function can call both static and non-static member functions.
- A static member function can call only static member function.
*/
