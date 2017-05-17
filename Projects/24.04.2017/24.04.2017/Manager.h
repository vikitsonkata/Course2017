#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"

class Manager
	:public Employee
{
public:
	Manager();
	Manager(const Address&, const string&, const string&,
		double, int, const Date&, const Date&, int);
	void setYearsOfExperience(int);
	int getYearsOfExperience() const;
	void print() const;
	~Manager();
private:
	int yearsOfExperience;
};

#endif