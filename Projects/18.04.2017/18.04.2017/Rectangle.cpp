#include "Rectangle.h"
#include <cmath>
using std::sqrt;

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int x1, int x2, int x3, int x4,
	int y1, int y2, int y3, int y4)
{
	setPoints(x1, x2, x3, x4, y1, y2, y3, y4);
}
void Rectangle::setPoints(int x1, int x2, int x3, int x4,
	int y1, int y2, int y3, int y4)
{
	if (validate(x1, y1) && validate(x2, y2)
		&& validate(x3, y3) && validate(x4, y4)
		&& isRectangle())
	{
		this->x1 = x1;
		this->x2 = x2;
		this->x3 = x3;
		this->x4 = x4;

		this->y1 = y1;
		this->y2 = y2;
		this->y3 = y3;
		this->y4 = y4;
	}
	else
		setPoints(0, 0, 0, 0, 0, 0, 0, 0);
}
bool Rectangle::validate(int x, int y)
{
	return (x > 0 && x < 20) && (y>0 && y < 20);
}

bool Rectangle::isRectangle()
{
	return(isPerpendicular3(x1, x2, x3, y1, y2, y3) 
		&& isPerpendicular3(x2, x3, x4, y2, y3, y4) 
		&& isPerpendicular3(x1, x3, x4, y1, y3, y4));
}
bool Rectangle::isPerpendicular3(int x1, int x2, int x3,
	int y1, int y2, int y3)
{
	return(
		(segment2(x1, x2, y1, y2) +	segment2(x1, x3, y1, y3) == segment2(x3, x2, y3, y2)) ||
		(segment2(x3, x2, y3, y2) + segment2(x1, x3, y1, y3) == segment2(x1, x2, y1, y2)) ||
		(segment2(x1, x2, y1, y2) +	segment2(x2, x3, y2, y3) ==	segment2(x3, x1, y3, y1)));
}
double Rectangle::segment2(int x1, int x2, int y1, int y2)
{
	return (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
}

double Rectangle::length()
{
	return segment2(x1, x2, y1, y2) > segment2(x1, x4, y1, y4) ?
		sqrt(segment2(x1, x2, y1, y2)) : sqrt(segment2(x1, x4, y1, y4));
}
double Rectangle::width()
{
	return segment2(x1, x2, y1, y2) < segment2(x1, x4, y1, y4) ?
		sqrt(segment2(x1, x2, y1, y2)) : sqrt(segment2(x1, x4, y1, y4));
}
bool Rectangle::square()
{
	return length() == width();
}

Rectangle::~Rectangle()
{
}
