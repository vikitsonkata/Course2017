#include <iostream>
using namespace std;
int main()
{
	int n, K, i, count = 0;
	cout << "Size of array: " << endl;
	cin >> n;
	int* A = new int[n];
	for (i=0; i < n; ++i)
	{
		cout << "Enter array[" << i << "]: ";
		cin >> A[i];
	}
	cout << "Enter number K for searching in the array:";
	cin >> K;
	for (i=0; i < n; ++i)
		if (A[i] == K)
			count++;
	cout << count << "number of times of "
		<< K << " in array" << endl;
	delete[]A;
	return 0;
}