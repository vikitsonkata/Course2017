#include "Employee.h"



Employee::Employee(const string& name, int salary, const Date& birthDay, const Date& hireDay)
	:birthDay(birthDay), hireDay(hireDay) //does not have a difalt constructor for Date objects
	//^ this type initialization is also for const arguments
{
	this->setName(name);
	this->setSalary(salary);
}
void Employee::print() const
{
	cout << this->getName() << " have $" << this->getSalary() << " salary." << endl;
	cout << "Birthday on ";
	this->birthDay.print();
	cout << "Hireday on ";
	hireDay.print();
	cout << endl;
}
void Employee::setName(const string& name) { this->name = name; }
void Employee::setSalary(int salary) { this->salary = salary; }
void Employee::setBirthDay(const Date& birthDay) { this->birthDay = birthDay; }
void Employee::setHireDay(const Date& hireDay) { this->hireDay = hireDay; }
const string& Employee::getName() const { return this->name; }
int Employee::getSalary() const { return this->salary; }
const Date& Employee::getBirthDay() const {	return this->birthDay; }
const Date& Employee::getHireDay() const { return this->hireDay; }
Employee::~Employee()
{
}
