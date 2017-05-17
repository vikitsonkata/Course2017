#ifndef COMPANYOPERATORS_H
#define COMPANYOPERATORS_H
#include "Manager.h"
#include "JuniorExpert.h"
#include "SeniorExpert.h"

class CompanyOperators
{
public:
	CompanyOperators();
	~CompanyOperators();
	void addEmployee(Employee*);
	const vector<Employee*>& getStaff() const;
	void setStaff(const vector<Employee*>&);
	void createEmployees();
	void print() const;
private:
	vector<Employee*> staff;
};

#endif