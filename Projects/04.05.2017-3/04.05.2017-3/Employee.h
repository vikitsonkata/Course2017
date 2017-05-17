#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <string>
using namespace std;

class Employee
{
private:
	string firstName;
	string lastName;
	double calary;
public:
	Employee();
	Employee(string, string, double);

	void setFirstName(string);
	void setLastName(string);
	void setCalary(double);

	string getFirstName();
	string getLastName();
	double getCalary();

	~Employee();
};

#endif