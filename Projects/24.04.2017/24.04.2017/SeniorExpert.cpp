#include "SeniorExpert.h"



SeniorExpert::SeniorExpert()
{
	setAssesment(0);
}
SeniorExpert::SeniorExpert(const Address& address, const string& name, const string& department,
	double salary, int hours, const Date& birthDay, const Date& hireDay, double bonus,
	int assesment, const string& degree)
	:Expert(address, name, department, salary, hours, birthDay, hireDay, bonus)
{
	setAssesment(assesment);
	setDegree(degree);
}
void SeniorExpert::setAssesment(int assesment) { this->assesment = assesment; }
void SeniorExpert::setDegree(const string& degree) { this->degree = degree; }
int SeniorExpert::getAssesment() const 
{
	switch (assesment)
	{
	case 0: cout << "No assesment" << endl; break;
	case 1: case 2:  cout << "poorly" << endl; break;
	case 3: case 4: cout << "not good enough" << endl; break;
	case 5: case 6: cout << "good" << endl; break;
	case 7: case 8: cout << "very good" << endl; break;
	case 9: case 10: cout << "excelent" << endl; break;
	default: cout << "something wrong" << endl;
	}
	return assesment; 
}
const string& SeniorExpert::getDegree() const { return degree; }
double SeniorExpert::calculateSalary() const
{
	if (assesment <= 5)
		return Employee::calculateSalary();
	else
		return Expert::calculateSalary();
}

SeniorExpert::~SeniorExpert()
{
}