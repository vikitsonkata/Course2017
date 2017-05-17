#ifndef SALESPERSON_H_
#define SALESPERSON_H_

#include <iostream>
#include <string>
using namespace std;

class SalesPerson
{
private:
	string firstName;
	string lastName;
	int department;
	int countSold;
	float money;

public:
	SalesPerson();

	SalesPerson(string, string, int, int, float);
	void setFirstName(const string&);
	void setLastName(const string&);
	void setDepartment(const int&);
	void setCountSold(const int&);
	void setMoney(const float&);
	string getFirstName() const;
	string getLastName() const;
	int getDepartment() const;
	int getCountSold() const;
	float getMoney() const;
	void Info() const;

	float payment() const;

	~SalesPerson();
};

#endif