#include <iostream>
using namespace std;
int main()
{
	int n, max, index = 0;
	cout << "Size of array: " << endl;
	cin >> n;
	int* A = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cout << "Enter array[" << i << "]: ";
		cin >> A[i];
	}
	max = A[0];
	for (int i = 0; i < n; ++i)
		if (A[i] > max)
		{
			max = A[i];
			index = i;
		}
	cout << "Max element " << max 
		<< " in possision " << index << endl;
	delete[]A;
	return 0;
}