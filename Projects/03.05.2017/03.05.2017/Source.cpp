#include <iostream>
#include "Rational.h"
using namespace std;

int main()
{
	Rational rat, rat1;
	cin >> rat;
	cin >> rat1;
	cout << rat.add(rat1); // 5/4
	cout << rat.substract(rat1); // -1/4
	cout << rat.multiply(rat1);//3/8
	cout << rat.divide(rat1);//2/3
	cout << endl;
	cout << rat+rat1; // 5/4
	cout << rat-rat1; // -1/4
	cout << rat*rat1;//3/8
	cout << rat/rat1;//2/3
	rat = rat + rat1;
	cout << rat;
}