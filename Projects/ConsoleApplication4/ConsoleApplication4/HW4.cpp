#include <iostream>
using namespace std;
int main()
{
	int start, end, counter=0;
	cout << "Enter range" << endl;
	cin >> start >> end;
	if (start > end)
	{
		cout << "Incorrect input" << endl;
		return 1;
	}
	while (start <= end)
	{
		if (start % 5 == 0)
		{
			counter++;
			start += 5;
		}
		else
			start++;
	}
	cout << counter << " numbers are divided by 5 in the range" << endl;
	return 0;
}
