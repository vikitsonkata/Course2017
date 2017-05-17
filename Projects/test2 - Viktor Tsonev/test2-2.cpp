#include <iostream>
using namespace std;

int main()
{
	short shop_money, calary;
	cout << "Enter shop's money: ";
	cin >> shop_money;
	if(shop_money < 0 || !cin)
	{
		cout << "Incorrect input!" << endl;
		return 1;
	}
	if (shop_money < 1600)
		calary = 850;
	else if (shop_money < 3000)
		calary = 1050;
	else
		calary = 1450;
	cout << "Seller have " << calary << " calary" << endl;
	return 0;
}