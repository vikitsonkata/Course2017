#include "Manager.h"



Manager::Manager()
{
	setYearsOfExperience(0);
}
Manager::Manager(const Address& address, const string& name, const string& department, 
	double salaryPerHour, int hours, const Date& birthDate, const Date& hireDate,
	int yearsOfExperience)
	:Employee(address, name, department, salaryPerHour, hours, birthDate, hireDate)
{
	setYearsOfExperience(yearsOfExperience);
}
void Manager::setYearsOfExperience(int yearsOfExperience) { this->yearsOfExperience = yearsOfExperience; }
int Manager::getYearsOfExperience() const { return yearsOfExperience; }
void Manager::print() const
{
	Employee::print();
	cout << "Years of experience: " << yearsOfExperience << endl;
}

Manager::~Manager()
{
}
