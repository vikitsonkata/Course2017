#include "Employee.h"

Employee::Employee()
{
	setSalaryPerHour(0);
	setHours(0);
}
Employee::Employee(const Address& address, const string& name, const string& department, 
	double salary, int hours, const Date& birthDay, const Date& hireDay)
	:address(address), birthDay(birthDay), hireDay(hireDay) //does not have a difalt constructor for Date objects
	//^ this type initialization is also for const arguments
{
	setName(name);
	setDepartment(department);
	setSalaryPerHour(salary);
	setHours(hours);
}
void Employee::print() const
{
	cout << getName() << " have $" << calculateSalary() << " salary." << endl;
	cout << "Address: \n";
	address.print();
	cout << "And works in department " << getDepartment() << endl;
	cout << "Birthday on ";
	birthDay.print();
	cout << "Hireday on ";
	hireDay.print();
}
void Employee::setName(const string& name) { this->name = name; }
void Employee::setSalaryPerHour(double salary) { this->salaryPerHour = salary; }
void Employee::setBirthDay(const Date& birthDay) { this->birthDay = birthDay; }
void Employee::setHireDay(const Date& hireDay) { this->hireDay = hireDay; }
void Employee::setAddress(const Address& address) { this->address = address; }
void Employee::setDepartment(const string& department) { this->department = department; }
void Employee::setHours(int hours) { this->hours = hours; }
const Address& Employee::getAddress() const {return this->address;}
const string& Employee::getDepartment() const { return this->department; }
const string& Employee::getName() const { return this->name; }
double Employee::getSalaryPerHour() const { return this->salaryPerHour; }
const Date& Employee::getBirthDay() const {	return this->birthDay; }
const Date& Employee::getHireDay() const { return this->hireDay; }
int Employee::getHours() const { return this->hours; }
double Employee::calculateSalary() const { return getSalaryPerHour()*getHours(); }
Employee::~Employee()
{
}
