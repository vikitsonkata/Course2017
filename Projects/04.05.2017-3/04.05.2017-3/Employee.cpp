#include "Employee.h"
#include <string>
using namespace std;


Employee::Employee()
{
	this->firstName = "No name";
	this->lastName = "No name";
	this->calary = 0;
}
Employee::Employee(string fn, string ln, double c)
{
	this->firstName = fn;
	this->lastName = ln;
	this->calary = c;
}

void Employee::setFirstName(string fn)
{
	this->firstName = fn;
}
void Employee::setLastName(string ln)
{
	this->lastName = ln;
}
void Employee::setCalary(double c)
{
	this->calary = c;
}
string Employee::getFirstName()
{
	return this->firstName;
}
string Employee::getLastName()
{
	return this->lastName;
}
double Employee::getCalary()
{
	return this->calary;
}

Employee::~Employee()
{
}
