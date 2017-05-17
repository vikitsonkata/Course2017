#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

inline int cube(int num)
{
	return num*num*num;
}

int boxVolume(int length, int width = 1, int height = 1)
{
	return length*width*height;
} // parametric arguments

int number = 7;

int sum(int i, int j)
{
	return i + j;
}
double sum(double i, double j)
{
	return i + j;
}

template <class T>
T maxValue(T i, T j)
{
	T ret;
	if (i > j)
		ret = i;
	else
		ret = j;
		return ret;
}

template <typename T> T cube(T num)
{
	return num*num*num;
}

//exercises
inline double distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}
inline int distance(int x1, int y1, int x2, int y2)
{
	return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}
template <typename T> inline T distance(T x1, T y1, T x2, T y2)
{
	return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}

inline double areaCircle(int radius)
{
	return M_PI*radius*radius;
}

template <typename T> inline T min(T i, T j)
{
	return i < j? i : j;
}

int main()
{
	{
		int x = 5;
		int &y = x;
		cout << x << y << endl;
		x = 10;
		cout << x << y << endl;
		y = 15;
		cout << x << y << endl;

		cout << boxVolume(4) << endl << boxVolume(4, 4)
			<< endl << boxVolume(4, 4, 4) << endl;

		int number = 17;
		cout << "Local: " << number << endl;
		cout << "Global: " << ::number << endl;

		cout << maxValue(15, 100) << endl
			<< maxValue(2.2, 200.1) << endl;

		cout << cube(4) << endl
			<< cube<int>(4) << endl
			<< cube<double>(1.5) << endl;
	}
// exercises
	cout << distance(0.0, 0.0, 1.0, 1.0) << endl;
	cout << distance(0, 0, 1, 1) << endl;
	cout << distance<double>(0, 0, 1, 1) << endl;

	cout << areaCircle(1) << endl;

	cout << min<int>(3, 5) << endl
		<< min<double>(4.7, 4.6) << endl;
}