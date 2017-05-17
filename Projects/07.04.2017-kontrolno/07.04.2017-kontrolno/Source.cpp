#include <iostream>
#include "SalesPerson.h"
using namespace std;


int numberEven(int num1, int num2, int num3)
{
	int count = 0;
	if (num1 % 2 == 0)
		count++;
	if (num2 % 2 == 0)
		count++;
	if (num3 % 2 == 0)
		count++;
	return count;
}

int sumLastTwo(int num)
{
	return num % 10 + num % 100 / 10;
}
int numberSpecialInArr(int k, int p, int n, int m)
{
	int** A = new int*[n];
	for (int i = 0; i < n; ++i)
		A[i] = new int[m];

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
		{
			cout << "Enter A[" << i << "][" << j << "]: ";
			cin >> A[i][j];
		}

	int count = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			if (sumLastTwo(A[i][j]) == k && A[i][j] % 10 != p)
				count++;

	for (int i = 0; i < n; ++i)
		delete[]A[i];
	delete[]A;
	return count;
}

int main()
{
	int num1, num2, num3;
	cout << "Enter 3 numbers:\n";
	cin >> num1 >> num2 >> num3;
	cout << "In {" << num1 << ' ' << num2 << ' ' << num3 <<
		"} - " << numberEven(num1, num2, num3) << " numbers are even\n";

	cout << numberSpecialInArr(3, 5, 3, 3) << endl;

	SalesPerson man1("Pesho", "Petrov", 42, 233, 3333),
		man2("Gosho", "Georgiev", 13, 15, 123),
		man3("Someone", "Someone", 13, 60, 2300);
	man1.Info();
	man2.Info();
	man3.Info();
	cout << "Payment: " << man1.payment() << ' ' << man2.payment() << ' '
		<< man3.payment() << endl << endl;

	cout << man1.getFirstName() << endl
		<< man1.getLastName() << endl
		<< man1.getDepartment() << endl
		<< man1.getCountSold() << endl
		<< man1.getMoney() << endl << endl;
	cout << man2.getFirstName() << endl
		<< man2.getLastName() << endl
		<< man2.getDepartment() << endl
		<< man2.getCountSold() << endl
		<< man2.getMoney() << endl << endl;

	man1.setFirstName("asd");
	man1.setLastName("sdf");
	man1.setDepartment(1);
	man1.setCountSold(99);
	man1.setMoney(999);

	man2.setFirstName("asd");
	man2.setLastName("sdf");
	man2.setDepartment(1);
	man2.setCountSold(99);
	man2.setMoney(999);

	man1.Info();
	man2.Info();
	man3.Info();
	cout << "Payment: " << man1.payment() << ' ' << man2.payment() << ' '
		<< man3.payment() << endl << endl;
}