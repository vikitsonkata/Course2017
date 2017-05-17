#ifndef _E_
#define _E_
#include <string>
#include <iostream>
#include "Date.h"
using std::string;
using std::cout;
using std::endl;

class Employee
{
public:
	Employee(const string&, int, const Date&, const Date&);
	void print() const;
	void setName(const string&);
	void setSalary(int);
	void setBirthDay(const Date&);
	void setHireDay(const Date&);
	const string& getName() const;
	int getSalary() const;
	const Date& getBirthDay() const;
	const Date& getHireDay() const;
	virtual ~Employee();
private:
	string name;
	int salary;
	Date birthDay;
	Date hireDay;
};

#endif