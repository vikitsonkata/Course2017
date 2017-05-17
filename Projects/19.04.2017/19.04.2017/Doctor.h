#ifndef DOCTOR_H_
#define DOCTOR_H_
#include "Patient.h"
#include <vector>
using std::vector;


class Doctor
{
public:
	Doctor();
	Doctor(const string&, int);
	void setName(const string&);
	void setAge(int);
	void addPatient(const Patient&); //pushback
	const string& getName() const;
	int getAge();
	const vector<Patient> getAllPatients() const;
	const vector<Patient>* getAllPatientsPtr() const;
	const Patient* getPatientsPtr() const;
	void print() const;
	~Doctor();
private:
	string name;
	int age;
	vector<Patient> Patients;
};

#endif