#include "Shapes.h"
#include <iostream>
using std::cout;


Shapes::Shapes()
{
}

Shapes::Shapes(int a, int b, const string& color)
{
	setA(a);
	setB(b);
	setColor(color);
}
void Shapes::setA(int a) { this->a = a; }
void Shapes::setB(int b) { this->b = b; }
void Shapes::setColor(const string& color) { this->color = color; }
int Shapes::getA() const { return a; }
int Shapes::getB() const { return b; }
const string& Shapes::getColor() const { return color; }
int Shapes::perimeter() const { return 0; }
double Shapes::area() const { return 0; }

void Shapes::print() const
{
	cout << "a: " << a << " b: " << b << " color: " << color << '\n';
}

Shapes::~Shapes()
{
}
