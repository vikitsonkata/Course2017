#include "Trapezoid.h"
#include <iostream>


Trapezoid::Trapezoid()
{
}

Trapezoid::Trapezoid(int a, int b, int height, const string& color)
	:Shapes(a, b, color)
{
	setHeight(height);
	std::cout << "\n			Trapezod is creating!\n"
		<<"Please press \'1\' to enter leteral sides c and d OR press \'0\'	";
	bool sides;
	std::cin >> sides;
	if (sides)
	{
		int x;
		std::cout << "Enter c: ";
		std::cin >> x;
		setC(x);
		std::cout << "Enter d: ";
		std::cin >> x;
		setD(x);
	}
	else
	{
		setC(0);
		setD(0);
	}
}
void Trapezoid::setHeight(int height) { this->height = height; }
void Trapezoid::setC(int c) { this->c = c; }
void Trapezoid::setD(int d) { this->d = d; }
void Trapezoid::print() const
{
	std::cout << "		TRAPEZOID\n";
	Shapes::print();
	if (c==d==0)
		std::cout<< "Area: " << area() << '\n';
	else
		std::cout<<"Perimeter: "<<perimeter()<<" Area: "<<area()<<'\n';
}
int Trapezoid::perimeter() const { return c == 0 && d == 0 ? 0 : getA() + getB() + c + d;}
double Trapezoid::area() const { return (getA() + getB())*height / 2.0; }


Trapezoid::~Trapezoid()
{
}
