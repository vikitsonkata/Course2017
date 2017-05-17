#ifndef PATIENT_H_
#define PATIENT_H_
#include <string>
using std::string;

class Patient
{
public:
	Patient();
	Patient(const string&, int, const string&);
	void setName(const string&);
	void setAge(int);
	void setGender(const string&);
	const string& getName() const;
	int getAge();
	const string& getGender();
	void print() const;
	~Patient();
private:
	string name;
	int age;
	string gender;
};

#endif