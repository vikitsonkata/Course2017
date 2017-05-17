#include "SalesPerson.h"
#include <iostream>
#include <string>
using namespace std;


SalesPerson::SalesPerson()
{
}


SalesPerson::SalesPerson(string firstName, string lastName, int department, int countSold, float money)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->department = department;
	this->countSold = countSold;
	this->money = money;
}
void SalesPerson::setFirstName(const string& firstName)
{
	this->firstName = firstName;
}
void SalesPerson::setLastName(const string& lastName)
{
	this->lastName = lastName; 
}
void SalesPerson::setDepartment(const int& department)
{
	this->department = department;
}
void SalesPerson::setCountSold(const int& countSold)
{
	this->countSold = countSold;
}
void SalesPerson::setMoney(const float& money)
{
	this->money = money;
}
string SalesPerson::getFirstName() const
{
	return this->firstName;
}
string SalesPerson::getLastName() const
{
	return this->lastName;
}
int SalesPerson::getDepartment() const
{
	return this->department;
}
int SalesPerson::getCountSold() const
{
	return this->countSold;
}
float SalesPerson::getMoney() const
{
	return this->money;
}
void SalesPerson::Info() const
{
	cout << "The salesperson " << this->firstName << ' ' << this->lastName
		<< "\nWorks in department N" << this->department
		<< "\nand for last month has sold " << this->countSold
		<< " items for " << this->money << '$' << endl << endl;
}

float SalesPerson::payment() const
{
	if (this->countSold > 200 && this->money > 3000)
		return 0.3*money;
	if (this->countSold < 100 && this->money < 1000)
		return 0.2*money;
	return 700;

}


SalesPerson::~SalesPerson()
{
}
