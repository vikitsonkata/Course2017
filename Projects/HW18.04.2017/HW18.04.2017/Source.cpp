#include "HugeInteger.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	HugeInteger num1, num2;
	num1.input();
	num1.output();
	num2.input();
	num2.output();
	//cout << boolalpha << num1.isGreaterThanOrEqualTo(num2) << endl;
	num1.divide(num2).output();
	//num1.add(num2).output();
	//num1.substract(num2).output();
	//num1.multiply(num2).output();
}