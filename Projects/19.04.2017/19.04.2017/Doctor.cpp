#include "Doctor.h"
#include <iostream>
using std::cout;


Doctor::Doctor()
{
}

Doctor::Doctor(const string& name, int age)
{
	setName(name);
	setAge(age);
}
void Doctor::setName(const string& name) { this->name = name; }
void Doctor::setAge(int age) { this->age = age; }
void Doctor::addPatient(const Patient& patient) //vector.pushback
{
	this->Patients.push_back(patient);
}
const string& Doctor::getName() const { return name; }
int Doctor::getAge() { return age; }
const vector<Patient> Doctor::getAllPatients() const { return Patients; }
const vector<Patient>* Doctor::getAllPatientsPtr() const { return &Patients; } //?
const Patient* Doctor::getPatientsPtr() const { return &Patients[0]; }//?

void Doctor::print() const
{
	cout << "Name: " << name << "\nAge: " << age << "\n";
	for (int i = 0; i < (int)Patients.size(); ++i)
		Patients[i].print();
	cout << '\n';
}

Doctor::~Doctor()
{
}
