#include "Manager.h"
#include <iostream>
using std::cout;


Manager::Manager()
{
}
Manager::Manager(string fn, string ln, string d, int sph)
{
	setFirstName(fn);
	setLastName(ln);
	setDepartment(d);
	setSalaryPerHour(sph);
	setHours(0);
}

void Manager::setFirstName(string firstName) { this->firstName = firstName; }
void Manager::setLastName(string lastName) { this->lastName = lastName; }
void Manager::setDepartment(string department) { this->department = department; }
void Manager::setSalaryPerHour(int salaryPerHour) { this->salaryPerHour = salaryPerHour; }
void Manager::setHours(int hours) { this->hours = hours; }

string  Manager::getFirstName() const { return this->firstName; }
string  Manager::getLastName() const { return this->lastName; }
string  Manager::getDepartment() const { return this->department; }
int  Manager::getSalaryPerHour() const { return this->salaryPerHour; }
int  Manager::getHours() const { return this->hours; }

void Manager::print() const
{
	cout << "Print()\n";
}

Manager::~Manager()
{
}
