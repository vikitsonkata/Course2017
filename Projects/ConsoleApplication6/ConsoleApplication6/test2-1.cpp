#include <iostream>
using namespace std;

int main()
{
	short number;
	cout << "Enter 3-digit number: " << endl;
	cin >> number;
	if (number < 100 || number>999)
	{
		cout << "Incorrect input!" << endl;
		return 1;
	}
	if (number % 10 == number / 100)
		cout << "First digit equal to last" << endl;
	else
		cout << "First digit not equal to last" << endl;
	return 0;
}