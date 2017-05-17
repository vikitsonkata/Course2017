#ifndef EXPERTINHERITED_H
#define EXPERTINHERITED_H
#include "Manager.h"
#include <string>
using std::string;

class ExpertInherited :
	public Manager
{
public:
	ExpertInherited();
	ExpertInherited(string, string, string, int, int);
	virtual ~ExpertInherited();
	void setBonus(int);
	int getBonus() const;
	void print() const;
private:
	int bonus;
};

#endif