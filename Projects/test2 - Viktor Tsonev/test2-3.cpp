#include <iostream>
using namespace std;

int main()
{
	int N, M, product=1;
	cout << "Enter [N, M]\nN: ";
	cin >> N;
	cout << "M: ";
	cin >> M;
	for (int i = N; i <= M; ++i)
		if (i % 2 == 0 && i % 3 != 0)
			product *= i;
	if (product > 1)
		cout << "Product of numbers is " << product << endl;
	else
		cout << "No special numbers in ["<< N << ',' << M << "]" << endl;
	return 0;
}