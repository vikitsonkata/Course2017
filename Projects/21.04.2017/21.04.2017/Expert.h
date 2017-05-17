#ifndef MANAGER_H
#define MANAGER_H
#include <string>
using std::string;

class Expert
{
public:
	Expert();
	Expert(const string&, const string&, const string&, int);
	void setFirstName(const string&);
	void setLastName(const string&);
	void setDepartment(const string&);
	void setSalaryPerHour(int);
	void setHours(int);
	void setBonus(int);
	void print() const;
	virtual ~Expert(); 
private:
	string firstName, lastName, department;
	int salaryPerHour, hours, bonus;
};

#endif