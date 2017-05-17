#pragma once
#include "Employee.h"
class Expert :
	public Employee
{
public:
	Expert();
	Expert(const Address&, const string&, const string&,
		double, int, const Date&, const Date&, double);
	void setBonus(double);
	double getBonus() const;
	void print() const;
	double calculateSalary() const;
	~Expert();
private:
	double bonus;
};

