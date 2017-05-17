#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	for (int i = 100; i < 1000; ++i)
	{
		int j = i;
		while (j != 0)
		{
			sum += j % 10;
			j /= 10;
		}
	}
	cout << "Sum of digets of three-diget numbers is " << sum << endl;
	return 0;
}