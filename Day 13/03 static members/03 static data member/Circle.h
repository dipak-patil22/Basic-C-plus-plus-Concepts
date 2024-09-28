#pragma once

class Circle {
public:
	Circle(int radius = 1);
public:
	int GetRadius() const;
	void SetRadius(int radius);
public:
	void Print() const;
	double GetArea() const;
	static double GetArea(int radius);
private:
	int m_radius;
	static const double m_PI;
};