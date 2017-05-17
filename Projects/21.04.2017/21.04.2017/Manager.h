#ifndef MANAGER_H
#define MANAGER_H
#include <string>
using std::string;


class Manager
{
public:
	Manager();
	Manager( string, string, string, int);
	void setFirstName(string);
	void setLastName(string);
	void setDepartment(string);
	void setSalaryPerHour(int);
	void setHours(int);
	string getFirstName() const;
	string getLastName() const;
	string getDepartment() const;
	int getSalaryPerHour() const;
	int getHours() const;
	void print() const;
	~Manager();
private:
	string firstName, lastName, department;
	int salaryPerHour, hours;
};

#endif