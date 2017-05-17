#ifndef STUDENT_H_
#define STUDENT_H_
#include "Address.h"
#include <string>
using std::string;

class Student
{
public:
	Student();
	Student(const string&, const string&, const Address&);
	void setName(const string&);
	void setSpeciality(const string&);
	void setAddress(const Address&);
	const string& getName() const;
	const string& getSpeciality() const;
	const Address& getAddress() const;
	void print() const;
	~Student();
private:
	string name;
	string speciality;
	Address address;
};

#endif