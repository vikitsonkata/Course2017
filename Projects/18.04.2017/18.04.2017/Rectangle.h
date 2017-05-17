#ifndef _RECTANGLE_
#define _RECTANGLE_

class Rectangle
{
private:
	int x1, x2, x3, x4;
	int y1, y2, y3, y4;
	bool validate(int, int);
	bool isRectangle();
	bool isPerpendicular3(int, int, int, int, int, int);
	double segment2(int, int, int, int);
public:
	Rectangle();
	Rectangle(int, int, int, int, int, int, int, int);
	void setPoints(int, int, int, int, int, int, int, int);
	//void setPoint(int, int);
	double length();
	double width();
	bool square();
	~Rectangle();
};

#endif