#include "Circle.h"

int main() {
	Circle a(10);
	double area = a.GetArea();
	// area = Circle::GetArea(); // It's a error to call non-static member function using only class name

	area = a.GetArea(20);
	area = Circle::GetArea(30);
}

/*
- Non-static member function cannot be called using only class name
  It can be called using instance only.
- Static member function can be called using both instance and class name.
- Static member function lack presence of 'this' pointer.
  Hence static member function cannot be constant member function.
- Note 'static' is to be mentioned in the member function declaration only.
  Mentioning same in the definition throws syntax error.
- Non-static methods are also called as instance methods.
- Static methods are also called as class methods.
*/
