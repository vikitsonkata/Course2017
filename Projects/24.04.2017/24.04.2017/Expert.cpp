#include "Expert.h"



Expert::Expert()
{
}
Expert::Expert(const Address& address, const string& name, const string& department,
	double salary, int hours, const Date& birthDay, const Date& hireDay, double bonus)
	:Employee(address, name, department, salary, hours, birthDay, hireDay)
{
	setBonus(bonus);
}
void Expert::setBonus(double bonus) { this->bonus = bonus; }
double Expert::getBonus() const { return bonus; }
void Expert::print() const
{
	Employee::print();
	cout << "Bonus " << bonus << "%\n";
}
double Expert::calculateSalary() const 
{
	return Employee::calculateSalary()*(1 + bonus);
}

Expert::~Expert()
{
}
