#include "Rectangle.h"
#include <iostream>
using std::cout;

Rectangle::Rectangle()
{
}
Rectangle::Rectangle(int a, int b, const string& color)
	:Shapes(a, b, color)
{

}
void Rectangle::print() const
{
	cout << "		RECTANGLE\n";
	Shapes::print();
	cout << "Area: " << area() << '\n';
	cout << "Perimeter: " << perimeter() << '\n';
}
double Rectangle::area() const
{
	return getA()*getB();
}
int Rectangle::perimeter() const
{
	return 2 * (getA() + getB());
}

Rectangle::~Rectangle()
{
}
