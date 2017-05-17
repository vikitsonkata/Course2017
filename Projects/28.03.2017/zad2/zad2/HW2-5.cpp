#include <iostream>
using namespace std;
int main()
{
	int n, min;
	cout << "Size of array: " << endl;
	cin >> n;
	int* A = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cout << "Enter array[" << i << "]: ";
		cin >> A[i];
	}
	min = A[0];
	for (int i = 0; i < n; ++i)
		if (A[i] < min)
			min = A[i];
	for (int i = 0; i < n; ++i)
		if (A[i] == min)
			cout << "Min element " << min
				<< " in possision " << i << endl;
	delete[]A;
	return 0;
}