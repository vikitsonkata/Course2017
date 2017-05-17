#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shapes.h"
#include <string>
using std::string;

class Rectangle :
	public Shapes
{
public:
	Rectangle();
	Rectangle(int, int, const string&);
	void print() const;
	int perimeter() const;
	double area() const;
	~Rectangle();
};

#endif