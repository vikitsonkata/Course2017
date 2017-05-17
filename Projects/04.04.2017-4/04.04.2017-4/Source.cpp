#include <iostream>
#include <string>
#include "Truck.h"
#include "C:\\Users\\Viktor\\Documents\\Visual Studio 2015\\Projects\\04.04.2017-2\\04.04.2017-2\\Student.h"
using namespace std;

int main()
{
	Truck pesho("heavy", 10000, 20);
	Student st1;
	cout << pesho.getModel() << endl;
	pesho.showInfo();
	cout << pesho.distance(300) << endl;
	for (int i = 0; i < 10; ++i)
		cout << st1.getMarksArr()[i] << endl;
}