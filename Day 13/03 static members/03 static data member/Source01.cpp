#include "Circle.h"

int main() {
	Circle a(10);
	Circle b(20);

	double area = a.GetArea();
	// area = Circle::GetArea(); // It's a error to call non-static member function using only class name

	area = a.GetArea(20);
	area = Circle::GetArea(30);

}

/*
- If a data member is declared as static data member then
  it needs to be defined in the implementation soure file of
  respective class.
- If not defined, it results into linking error.
- Static data members are stored in static space.
  Non-static data members are stored in object space.
- Static data members need to be implemented in implementation
  file. If not implemented it results into linking error.
- Static data members are also known as class variables.
- Non-static data members are also known as instance variables.
*/
