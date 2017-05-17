#ifndef SHAPES_H
#define SHAPES_H
#include <string>
using std::string;

class Shapes
{
public:
	Shapes();
	Shapes(int, int, const string&);
	void setA(int);
	void setB(int);
	void setColor(const string&);
	int getA() const;
	int getB() const;
	const string& getColor() const;
	virtual void print() const;
	virtual int perimeter() const;
	virtual double area() const;
	~Shapes();
private:
	int a, b;
	string color;
};

#endif