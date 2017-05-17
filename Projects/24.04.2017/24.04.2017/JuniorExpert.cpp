#include "JuniorExpert.h"



JuniorExpert::JuniorExpert()
{
}
JuniorExpert::JuniorExpert(const Address& address, const string& name, const string& department,
	double salary, int hours, const Date& birthDay, const Date& hireDay, double bonus,
	const vector<string>& technologies)
	:Expert(address,name,department,salary,hours,birthDay,hireDay,bonus)
{
	setTechnologies(technologies);
}
void JuniorExpert::print() const 
{
	Expert::print();
	for (int i = 0; i < technologies.size(); ++i)
		cout << technologies[i] << endl;
}
void JuniorExpert::setTechnologies(const vector<string>&) { this->technologies = technologies; }
const vector<string>& JuniorExpert::getTechnologies() const { return technologies; }


JuniorExpert::~JuniorExpert()
{
}
