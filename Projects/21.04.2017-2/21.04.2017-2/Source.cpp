#include <iostream>
#include <vector>
#include "Rectangle.h"
#include "Triangle.h"
#include "Trapezoid.h"
using namespace std;

int main()
{
	Rectangle rec(3, 4, "red");
	rec.print();
	Triangle tri(3, 4, 5, "green");
	tri.print();
	Trapezoid trap(4, 7, 4, "orange");
	trap.print();
	cout << endl;
	vector<Shapes*> vec;
	vec.push_back(&rec);
	vec.push_back(&tri);
	vec.push_back(&trap);

	for (unsigned int i = 0; i < vec.size(); ++i)
		vec[i]->print();
}