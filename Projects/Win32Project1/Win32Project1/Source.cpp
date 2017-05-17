#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	for (int i = 0; i < 10; ++i)
	{
		x += y;
		y += x;
	}
	cout << x << endl << y << endl;
}