#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

ostream& operator<< (ostream& os, Student& Pesho)
{
	//for
	//os << p[i] << " ";
	return os << Pesho[0] << " " << Pesho[1] << " " << Pesho[2] << endl;
}

int main()
{
	int myMarks[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "My mark N" << i << " is: ";
		cin >> myMarks[i];
	}
	Student Az, Pesho("Pesho","Peshov",27, 2, myMarks);
	cout << Az.getAge() << endl
		<< Az[2] << endl;
	int i;
	cout << "What number of mark do you wanna see?" << endl;
	cin >> i;
	cout << Pesho.getAge() << endl
		<< "Pesho's mark N"<<i<<Pesho[i] << endl;

	cout << Az << endl << Az.maxMark() << endl;

}
// <<(cout, az) << p
//  cout << p