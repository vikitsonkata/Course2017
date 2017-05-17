#ifndef SENIOREXPERT_H
#define SENIOREXPERT_H
#include "Expert.h"

class SeniorExpert :
	public Expert
{
public:
	SeniorExpert();
	SeniorExpert(const Address&, const string&, const string&,
			double, int, const Date&, const Date&, double, int, const string&);
	void setAssesment(int);
	void setDegree(const string&);
	int getAssesment() const;
	const string& getDegree() const;
	double calculateSalary() const;
	virtual ~SeniorExpert();
private:
	int assesment; //1-10
	string degree;
};

#endif