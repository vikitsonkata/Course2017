#include <iostream>
#include <string>
using namespace std;

void printSign(int number)
{
	if (number > 0)
		cout << "Possitive" << endl;
	else if (number < 0)
		cout << "Negative" << endl;
	else
		cout << "Zero" << endl;
}
void printMin(float num1, float num2)
{
	if (num1 < num2)
		cout << "Minimal is " << num1 << endl;
	else if (num2 < num1)
		cout << "Minimal is " << num2 << endl;
	else
		cout << "They are equal" << endl;
}
int multiply(float num1, float num2)
{
	return num1*num2;
}
string lastDigit(int number)
{
	switch (number%10)
	{
	case 1:
		return "one";
	case 2:
		return "two";
	case 3:
		return "three";
	case 4:
		return "four";
	case 5:
		return "five";
	case 6:
		return "six";
	case 7:
		return "seven";
	case 8:
		return "eight";
	case 9:
		return "nine";
	case 0:
		return "zero";
	default:
		return "NotExpexted";
		break;
	}
}
int reverse(int num)
{
	int rev = 0;
	while (num)
	{
		rev *= 10;
		rev += num % 10;
		num /= 10;
	}
	return rev;
}
double average(double* numbers, int size)
{
	double sum=0;
	for (int i = 0; i<size; ++i)
	{
		sum += numbers[i];
	}
	return (sum / size);
}
double linear(int a, int b)
{
	return (-(double)b / a);
}

int main()
{
	int n1, n2, size;
	double* arr;
	cout << "Enter 2 numbers:";
	cin >> n1 >> n2;
	printMin(n1, n2);
	//printMin(5.3, 5);
	cout << "Multiply of them is " << multiply(n1, n2) << endl;
	cout << "Last digit of first number is " << lastDigit(n1) << endl;
	cout << "Reverse of first number is " << reverse(n1) << endl;
	cout << "Size of array: ";
	cin >> size;
	arr = new double[size];
	cout << "Enter " << size << " numbers" << endl;
	for (int i = 0; i < size; ++i)
		cin >> arr[i];
	cout <<"Average of numbers in array is " << average(arr, size) << endl;
	cout << "Solve of equation Ax+B=0 is " << linear(n1, n2) << endl;
	delete[]arr;
}