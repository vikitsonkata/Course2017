#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shapes.h"
#include <string>
using std::string;

class Triangle :
	public Shapes
{
public:
	Triangle();
	Triangle(int, int, int, const string&);
	void print() const;
	double area() const;
	void setHeightA(int);
	void setHeightB(int);
	void setHeightC(int);
	void setC(int);
	int perimeter() const;
	~Triangle();
private:
	int c, heightA, heightB, heightC;
};

#endif