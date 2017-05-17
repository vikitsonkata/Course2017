#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cout << "Enter rows: ";
	cin >> n;
	cout << "Enter columns: ";
	cin >> m;
	int** arr = new int*[n];
	for (int i = 0; i < n; ++i)
		arr[i] = new int[m];

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << "Enter arr[" << i << "][" << j << "]:";
			cin >> arr[i][j];
		}
		cout << endl;
	}
	int sumRow = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			sumRow += arr[i][j];
		}
		cout << "Sum of row " << i << " is " << sumRow << endl;
	}


	for (int i = 0; i < n; ++i)
		delete[]arr[i];
	delete[]arr;
}