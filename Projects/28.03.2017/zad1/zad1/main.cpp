#include <iostream>
using namespace std;

int main()
{
	const int n = 5;
	int max, indexOfMax=0, count=0;
//	cout << "Size of array: ";
//	cin >> n;
	int arr[n], sum=0;
	for (int i = 0; i < n; ++i)
	cout << "arr[0]" << arr[i]-1 << endl;
	double avg;
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	max = arr[0];
	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
		if (arr[i] > max)
		{
			max = arr[i];
			indexOfMax = i;
		}
	}
	cout << "Max element: " << max << " on posission: " << indexOfMax << endl;
	cout << "avg: " << (avg = (double)sum / n) << endl;
	for (int i = 0; i < n; ++i)
		if (arr[i]>avg)
			count++;
	cout << "Count above average: " << count << endl;

//	int salaries[20], count=0;
//	for (int i = 0; i < 20; ++i)
//		cin >> salaries[i];
//	for (int i = 0; i < 20; ++i)
//		if (salaries[i] == 1200)
//			count++;
//	cout << count << endl;
}