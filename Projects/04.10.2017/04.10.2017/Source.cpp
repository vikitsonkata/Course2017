//#include <iostream>
//#include <vector>
//#include <algorithm> //sort; in class -> insertion sort
//using namespace std;
//
//void counters(const int*, const int);
//
//int main()
//{
//	int n;
//	cout << "Enter number salesman" << endl;
//	cin >> n;
//	int* calaries = new int[n];
//	cout << "Enter grosses" << endl;
//	for (int i = 0; i < n; i++)
//		cin >> calaries[i];
//	for (int i = 0; i < n; i++)
//		calaries[i] = (int)(calaries[i] * 0.9 + 200);
//	int counters[9];
//	for (int i = 0; i < 11; i++)
//		counters[i] = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (calaries[i] / 100 > 1000)
//			counters[10]++;
//		else
//			counters[calaries[i] / 100] ++;
//	}
//	for (int i = 2; i < 11; i++)
//		cout << "Counters[i] = " << counters[i] << endl;
//
//	delete[]calaries;
//	return 0;
//}
//
//void counters(const int* calaries, const int n)
//{
//}

#include <iostream>
#include <vector>
using namespace std;

int range(int);

int main()
{
	int n;
	cout << "Enter number salesman" << endl;
	cin >> n;
	vector<int> calaries(n), counts(10);
	for (int i = 0; i < n; i++)
	{
		cout << "Enter gross N" << i << " ";
		cin >> calaries[i];
		calaries[i] *= 0.9;
		calaries[i] += 200;
	}
	for (int i = 0; i < n; i++)
	{
		counts[range(calaries[i])]++;
	}
	for (int i = 2; i < 10; i++)
		cout << "Count of calaries in range "
		<< i * 100 << ' ' << i * 100 + 99 << " is " << counts[i] << endl;	
	cout << "Count of calaries over 1000 is " << counts[1] << endl;

}

int range(int calary)
{
	if (calary >= 1000)
		return 1;
	else
		return calary / 100;
}