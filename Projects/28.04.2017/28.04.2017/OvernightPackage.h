#ifndef OVERNIGHTPACKAGE
#define OVERNIGHTPACKAGE
#include "Package.h"

class OvernightPackage :
	public Package
{
public:
	OvernightPackage();
	virtual ~OvernightPackage();
	OvernightPackage(const Sender&, const Client&,
		double, double, double);

	void setTax(double);
	double getTax() const;
	void print() const;
	double calculatePrice() const;
private:
	double taxPerKG;
};

#endif