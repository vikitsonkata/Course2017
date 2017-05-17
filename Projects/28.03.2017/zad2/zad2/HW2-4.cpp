#include <iostream>
using namespace std;
int main()
{
	int n, max, min;
	cout << "Size of array: " << endl;
	cin >> n;
	int* A = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cout << "Enter array[" << i << "]: ";
		cin >> A[i];
	}
	max = min = A[0];
	for (int i = 0; i < n; ++i)
	{
		if (A[i] > max)
			max = A[i];
		if (A[i] < min)
			min = A[i];
	}
	cout << "Max element: " << max << endl
		<<"Min element: " << min << endl;
	delete[]A;
	return 0;
}