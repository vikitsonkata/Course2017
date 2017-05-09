#include <iostream>
#include "Athlete.h"
#include "Discipline.h"
using namespace std;

int main()
{
	Athlete asd, qwe;
	Discipline dis;
	asd.setBest("12.4s");
	qwe.setBest("11.3s");
	cout << boolalpha << (asd > qwe) << endl;
}