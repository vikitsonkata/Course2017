#include "Patient.h"
#include <iostream>
using std::cout;


Patient::Patient()
{
}

Patient::Patient(const string& name, int age, const string& gender)
{
	setName(name);
	setAge(age);
	setGender(gender);
}
void Patient::setName(const string& name) { this->name = name; }
void Patient::setAge(int age) { this->age = age; }
void Patient::setGender(const string& gender) { this->gender = gender; }
const string& Patient::getName() const { return name; }
int Patient::getAge() { return age; }
const string& Patient::getGender() { return gender; }
void Patient::print() const
{
	cout << "Name: " << name << "\nAge: " << age << "\nGender: " << gender << "\n";
}

Patient::~Patient()
{
}
