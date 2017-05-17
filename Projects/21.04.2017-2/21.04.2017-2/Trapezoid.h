#ifndef TRAPEZOID_H
#define TRAPEZOID_H
#include "Shapes.h"
#include <string>
using std::string;

class Trapezoid :
	public Shapes
{
public:
	Trapezoid();
	Trapezoid(int, int, int, const string&);
	void setC(int);
	void setD(int);
	void setHeight(int);
	void print() const;
	int perimeter() const;
	double area() const;
	~Trapezoid();
private:
	int height, c, d;
};

#endif