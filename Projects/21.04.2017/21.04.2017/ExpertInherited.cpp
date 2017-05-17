#include "ExpertInherited.h"
#include <iostream>
using std::cout;


ExpertInherited::ExpertInherited()
{
}
ExpertInherited::ExpertInherited(string firstName, string lastName,
	string department, int salaryPerHour, int bonus)
	:Manager(firstName, lastName, department, salaryPerHour)
{
	setBonus(bonus);
}

int ExpertInherited::getBonus() const { return bonus; }

void ExpertInherited::setBonus(int bonus) { this->bonus = bonus; }
void ExpertInherited::print() const
{
	Manager::print();
	cout<<getBonus()<<'\n';
}

ExpertInherited::~ExpertInherited()
{
}
