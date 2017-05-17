#include <iostream>
using namespace std;
int main()
{
	double number;
	int intnumber, product = 1;
	cout << "Enter number in range 100.00-999.99, with exact 2 digits after the decimal dot" << endl;
	cin >> number;
	if (number < 100 || number>999 || (number * 100) - (int)(number * 100) != 0)
	{
		cout << "Incorrect input" << endl;
		return 1;
	}
	intnumber = number * 100;
	for (int i = 0; i < 5; ++i)
	{
		product *= intnumber % 10;
		intnumber /= 10;
	}
	cout << "Product of digits is " << product << endl;
}