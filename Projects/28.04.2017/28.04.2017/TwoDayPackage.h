#ifndef TWODAYPACKAGE
#define TWODAYPACKAGE
#include "Package.h"

class TwoDayPackage :
	public Package
{
public:
	TwoDayPackage();
	TwoDayPackage(const Sender&, const Client&,
		double, double, double);
	virtual ~TwoDayPackage();

	void setTax(double);
	double getTax() const;
	void print() const;
	double calculatePrice() const;
private:
	double tax;
};

#endif