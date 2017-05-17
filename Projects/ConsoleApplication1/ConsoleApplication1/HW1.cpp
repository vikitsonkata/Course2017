#include <iostream>
using namespace std;
int main()
{
	int number;
	short hundreds, tens, ones;
	cout << "Enter number in range: 100-999" << endl;
	cin >> number;
	if (number > 999 || number < 100)
	{
		cout << "Incorrect input" << endl;
		return 1;
	}
	hundreds = number / 100;
	tens = number / 10 % 10;
	ones = number % 10;
	cout << hundreds << " " << tens << " " << ones << endl;
	return 0;
}
