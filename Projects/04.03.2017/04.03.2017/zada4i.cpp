#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double average(int arr[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; ++i)
		sum += arr[i];
	return sum / n;
}
double linear(int a, int b)
{
	return a ? ((double)(-b) / a) : b ? 42 : -42;
}
double parkingHours(int hours)
{
	double fee = 2;
	if (hours <= 0 || hours > 24)
	{
		cout << "Wrong input" << endl;
		return 0;
	}
	else if (hours <= 3)
		return fee;
	else if ((hours - 3) / 2.0 < 8)
		return 2 + ((hours - 3) / 2.0);
	else
		return 10;
}
string* palindrom(string senance)
{

}
string firstWord(string sentance)
{
	int pos = 0;
	if (sentance[0] == ' ')
		pos++;
	int i = sentance.find_first_of(" ");
	string word = "";

}

int main()
{
	int n;
	cout << "Enter size of array:";
	cin >> n;
	int* arr = new int[n];
/*	for (int i = 0; i < n; ++i)
	{
		cout << "Enter element of array:";
		cin >> arr[i];
	}
*/	

	string s1 = "asd", s2, s3;
	cin >> s2;
	s3 = s1.append(s2);
	cout << endl << s1 << endl << s2 << endl << s3 << endl;
	
	
//	cout << average(arr, n) << endl;
//	cout << linear(3, -4) << endl
//		<< linear(0, 1) << endl
//		<< linear(3, 0) << endl
//		<< linear(0, 0) << endl;
	delete[]arr;

}