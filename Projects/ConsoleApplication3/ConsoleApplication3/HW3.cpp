#include <iostream>
using namespace std;
int main()
{
	int number;
	cout << "Enter number in range: 1000-9999" << endl;
	cin >> number;
	if (number > 9999 || number < 1000)
	{
		cout << "Incorrect input" << endl;
		return 1;
	}
	int rnumber = 0;
	for (int i = 0; i <= 3; ++i)
	{
		rnumber += (number%10)*pow(10, 3-i);
		number /= 10;
	}
	cout << "Reverse number: " << rnumber << endl;

	return 0;
}
