#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
#include "Date.h"
#include "Address.h"
#include "C:\\Users\\Viktor\\Documents\\Visual Studio 2015\\Projects\\24.04.2017\\24.04.2017\\Address.h"
using std::string;
using std::cout;
using std::endl; 

class Employee
{
public:
	Employee();
	Employee(const Address&, const string&, const string&,
		double, int, const Date&, const Date&);
	virtual void print() const;
	void setAddress(const Address&);
	void setDepartment(const string&);
	void setName(const string&);
	void setSalaryPerHour(double);
	void setHours(int);
	void setBirthDay(const Date&);
	void setHireDay(const Date&);
	const Address& getAddress() const;
	const string& getDepartment() const;
	const string& getName() const;
	double getSalaryPerHour() const;
	const Date& getBirthDay() const;
	const Date& getHireDay() const;
	int getHours() const;
	virtual double calculateSalary() const;
	virtual ~Employee();
private:
	Address address;
	string name;
	string department;
	double salaryPerHour;
	int hours;
	Date birthDay;
	Date hireDay;
};

#endif