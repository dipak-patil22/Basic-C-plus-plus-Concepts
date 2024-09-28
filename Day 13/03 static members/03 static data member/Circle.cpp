#include <assert.h>
#include <iostream>
#include <stdexcept>
using namespace std;

#include "Circle.h"

// static data member defined here
// initialization is optional
// if not initialized, it is set to zero.
const double Circle::m_PI = 3.14;

Circle::Circle(int radius) {
	SetRadius(radius);
}

int Circle::GetRadius() const {
	assert(m_radius > 0);
	return m_radius;
}

void Circle::SetRadius(int radius) {
	if (radius <= 0)
		throw std::invalid_argument("Radius must be positive number.");
	m_radius = radius;
}

void Circle::Print() const {
	std::cout << GetRadius() << std::endl;
}

// this member function uses object's radius
double Circle::GetArea() const {
	int radius = GetRadius();
	return m_PI * radius * radius;
}

// this member function doesn't use object's radius
double Circle::GetArea(int radius) {
	return m_PI * radius * radius;
}
