#include "Triangle.h"
#include <cmath>
#include <iostream>


Triangle::Triangle()
{
}

Triangle::Triangle(int a, int b, int c, const string& color)
	:Shapes(a, b, color)
{
	setC(c);
	setHeightA(0);
	setHeightB(0);
	setHeightC(0);
}
void Triangle::print() const
{
	std::cout << "		TRIANGLE\n";
	Shapes::print();
	std::cout << "and c: " << c << '\n';
	std::cout << "perimeter: " << perimeter() << " area: " << area() << '\n';
}
double Triangle::area() const
{
	double p = perimeter() / 2.0;
	if (heightA == heightB == heightC == 0)
		return std::sqrt(p*(p - getA())*(p - getB())*(p - c));
	else
		if (heightA != 0)
			return getA()*heightA;
		else
			if (heightB != 0)
				return getB()*heightB;
			else
				return c*heightC;
}
int Triangle::perimeter() const
{
	return getA() + getB() + c;
}
void Triangle::setHeightA(int ha) { this->heightA = ha; }
void Triangle::setHeightB(int hb) { this->heightB = hb; }
void Triangle::setHeightC(int hc) { this->heightC = hc; }
void Triangle::setC(int c) { this->c = c; }
Triangle::~Triangle()
{
}
