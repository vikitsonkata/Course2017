#include "Expert.h"
#include <iostream>
using std::cout;


Expert::Expert()
{
}

Expert::Expert(const string& fn, const string& ln, const string& d, int sph)
{
	setFirstName(fn);
	setLastName(ln);
	setDepartment(d);
	setSalaryPerHour(sph);
	setHours(0);
	setBonus(0);
}

void Expert::setFirstName(const string& firstName) { this->firstName = firstName; }
void Expert::setLastName(const string& lastName) { this->lastName = lastName; }
void Expert::setDepartment(const string& department) { this->department = department; }
void Expert::setSalaryPerHour(int salaryPerHour) { this->salaryPerHour = salaryPerHour; }
void Expert::setHours(int hours) { this->hours = hours; }
void Expert::setBonus(int bonus) { this->bonus = bonus; }

void Expert::print() const
{
	cout << "Print()\n";
}

Expert::~Expert()
{
}
