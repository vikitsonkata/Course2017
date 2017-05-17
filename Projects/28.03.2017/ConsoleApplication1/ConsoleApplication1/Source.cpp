#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cout << "Rows of array: ";
	cin >> n;
	cout << "Coloms of array: ";
	cin >> m;
	int** A = new int*[n];
	for (int i = 0; i < n; ++i)
		A[i] = new int[m];



/*	for (int i = 0; i<n; ++i)
		for (int j = 0; j < m; ++j)
		{
			cout << "A[" << i << "][" << j << "]=";
			cin >> A[i][j];
		}
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			A[i][j] = pow(A[i][j], 2);
	for (int i = 0; i<n; ++i)
	{
		for (int j = 0; j<m; ++j)
			cout << A[i][j] << " ";
		cout << endl;
	}
*/
/*	for (int i = 0; i<n; ++i)
		for (int j = 0; j < m; ++j)
		{
			cout << "A[" << i << "][" << j << "]=";
			cin >> A[i][j];
		}
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			A[i][j] = pow(A[i][j], 3);
	for (int i = 0; i<n; ++i)
	{
		for (int j = 0; j<m; ++j)
			cout << A[i][j] << " ";
		cout << endl;
	}
*/
/*	for (int i = 0; i<n; ++i)
		for (int j = 0; j < m; ++j)
		{
			cout << "A[" << i << "][" << j << "]=";
			cin >> A[i][j];
		}
	int K;
	bool isK = false;
	cout << "Enter number to find int array: ";
	cin >> K;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			if (A[i][j] == K && isK==false)
			{
				isK = true;
				cout << K << " is in the array" << endl;
			}
*/

/*	for (int i = 0; i<n; ++i)
		for (int j = 0; j < m; ++j)
		{
			cout << "A[" << i << "][" << j << "]=";
			cin >> A[i][j];
		}
	int K;
	int count = 0;
	cout << "Enter number to find int array: ";
	cin >> K;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			if (A[i][j] == K)
				count++;
	cout << K << " is " << count << " times in array" << endl;
	*/

/*	for (int i = 0; i<n; ++i)
	for (int j = 0; j < m; ++j)
	{
	cout << "A[" << i << "][" << j << "]=";
	cin >> A[i][j];
	}
	int K, count = 0;
	bool isK2 = false;
	cout << "Enter numbers to find int array's row: ";
	cin >> K ;
	for (int i = 0; i < n and !isK2; ++i)
	for (int j = 0; j < m - 1; ++j)
	if (A[i][j] == K)
	count++;
	if(count==2)
	{
	isK2 = true;
	cout << "K is twice in same row" << endl;
	break;
	}
	if (j==m-2)
	count=0;
	*/
	
/*	for (int i = 0; i<n; ++i)
		for (int j = 0; j < m; ++j)
		{
			cout << "A[" << i << "][" << j << "]=";
			cin >> A[i][j];
		}
	int K, P;
	bool KP = true;
	cout << "Enter numbers to find int array's row: ";
	cin >> K >> P;
	for (int i = 0; i < n && KP; ++i)
		for (int j = 0; j < m - 1; ++j)
			if (A[i][j] == K && A[i][j + 1] == P)
			{
				cout << "K and P are in same row" << endl;
				KP=false;
			}
*/

/*	for (int i = 0; i<n; ++i)
		for (int j = 0; j < m; ++j)
		{
			cout << "A[" << i << "][" << j << "]=";
			cin >> A[i][j];
		}
	int K, P;
	bool isK = true, isP = true;
	cout << "Enter numbers to find int array's row: ";
	cin >> K >> P;
	for (int i = 0; i < n && isK && isP; ++i)
		for (int j = 0; j < m ; ++j)
		{
			if (A[i][j] == K)
				isK = false;
			if (A[i][j] == P)
				isP = false;
			if (!isK && !isP && j==m-1)
				cout << "K and P are in same row" << endl;
			else
				isK == isP == true;
		}
*/

/*for (int i = 0; i<n; ++i)
	for (int j = 0; j < m; ++j)
	{
		cout << "A[" << i << "][" << j << "]=";
		cin >> A[i][j];
	}
int K, count = 0;
bool isK2 = false;
cout << "Enter numbers to find int array's column: ";
cin >> K;
for (int j = 0; j < m && !isK2; ++j)
	for (int i = 0; i < n - 1; ++i)
	{
		if (A[i][j] == K)
			count++;
		if (count == 2)
		{
			isK2 = true;
			cout << "K is twice in same column" << endl;
			break;
		}
		if (i == n - 2)
			count = 0;
	}
	*/

/*
	for (int i = 0; i<n; ++i)
		for (int j = 0; j < m; ++j)
		{
			cout << "A[" << i << "][" << j << "]=";
			cin >> A[i][j];
		}
	int K, count = 0;
	cout << "Enter number for dividable by it: ";
	cin >> K;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			if (!(A[i][j] % K))
				count++;
	cout << "Count: " << count << endl;
	*/

/*for (int i = 0; i<n; ++i)
	for (int j = 0; j < m; ++j)
	{
		cout << "A[" << i << "][" << j << "]=";
		cin >> A[i][j];
	}
int K, P, count = 0;
cout << "Enter numbers for dividable by it: ";
cin >> K >> P;
for (int i = 0; i < n; ++i)
	for (int j = 0; j < m; ++j)
		if ((A[i][j] % K) && (A[i][j]%P))
			count++;
cout << "Count: " << count << endl;
*/



/*for (int i = 0; i<n; ++i)
	for (int j = 0; j < m; ++j)
	{
		cout << "A[" << i << "][" << j << "]=";
		cin >> A[i][j];
	}
int K, product = 1;
cout << "Enter number for last digit: ";
cin >> K;
for (int i = 0; i < n; ++i)
	for (int j = 0; j < m; ++j)
		if (A[i][j] % 10 == K)
		{
			for (int k = 0; k < n; ++k)
				product *= A[k][j];
			cout << "Product of row "<<i<<": " << product << endl;
			product = 1;
		}
*/
/*	for (int i = 0; i<n; ++i)
		for (int j = 0; j < m; ++j)
		{
			cout << "A[" << i << "][" << j << "]=";
			cin >> A[i][j];
		}
	int K, sum = 0;
	bool isDone = false;
	cout << "Enter number for before last digit : ";
	cin >> K;
	for (int j = 0; j < m; ++j)
	{
		isDone = false;
		for (int i = 0; i < n; ++i)
			if ((A[i][j] / 10) % 10 == K && !isDone)
			{
				for (int k = 0; k < n; ++k)
					sum += A[k][j];
				cout << "Sum of column " << j << ": " << sum << endl;
				sum = 0;
				isDone = true;
			}
	}
*/

/*for (int i = 0; i<n; ++i)
	for (int j = 0; j < m; ++j)
	{
		cout << "A[" << i << "][" << j << "]=";
		cin >> A[i][j];
	}
int K;
cout << "Enter number: ";
cin >> K;
for (int i = 0; i < n; ++i)
	for (int j = 0; j < m; ++j)
		if (A[i][j] == K)
			cout << i*m + j << endl;
*/
for (int i = 0; i<n; ++i)
	for (int j = 0; j < m; ++j)
	{
		cout << "A[" << i << "][" << j << "]=";
		cin >> A[i][j];
	}
int K;
cout << "Enter number: ";
cin >> K;
double sum = 0;
bool isK = false;
for (int i = 0; i < n; ++i)
	for (int j = 0; j < m && !isK ; ++j)
		if (A[i][j] == K)
		{
			for (int k = 0; k < n; ++k)
				for (int l = 0; l < m; ++l)
					sum += A[k][l];
			isK = true;
		}
cout << sum / (n * m) << endl;


	for (int i = 0; i < n; ++i)
		delete[]A[i];
	delete[]A;
}