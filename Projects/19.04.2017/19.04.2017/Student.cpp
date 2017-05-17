#include "Student.h"
#include <iostream>
using std::cout;


Student::Student()
{
	setName("a");
	setSpeciality("b");
}

Student::Student(const string& name, const string& speciality, const Address& address)
	:address(address)
{
	setName(name);
	setSpeciality(speciality);
}
void Student::setName(const string& name) { this->name = name; }
void Student::setSpeciality(const string& speciality) { this->speciality = speciality; }
//void Student::setAddress(const Address& address){}
const string& Student::getName() const { return name; }
const string& Student::getSpeciality() const { return speciality; }
const Address& Student::getAddress() const { return address; }
void Student::print() const
{
	cout << "Name: " << name << "\nSpeciality: " << speciality << "\nAddress:\n";
	address.print();
}

Student::~Student()
{
}
