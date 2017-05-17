#ifndef JUNIOREXPERT_H
#define JUNIOREXPERT_H

#include "Expert.h"
#include <vector>
using std::vector;

class JuniorExpert :
	public Expert
{
public:
	JuniorExpert();
	JuniorExpert(const Address&, const string&, const string& ,
		double , int , const Date& , const Date& , double , 
		const vector<string>&);
	void print() const;
	void setTechnologies(const vector<string>&);
	const vector<string>& getTechnologies() const;
	virtual ~JuniorExpert();
private:
	vector<string> technologies;
};

#endif