#include "OvernightPackage.h"
#include <iostream>
using std::cout;


OvernightPackage::OvernightPackage()
{
	setTax(0);
}
OvernightPackage::OvernightPackage(
	const Sender& sender, const Client& recipient,
	double weight, double price, double tax)
	:Package(sender, recipient, weight, price)
{
	setTax(tax);
}
OvernightPackage::~OvernightPackage()
{
}

void OvernightPackage::setTax(double tax)
{
	if(tax>0 && tax<100) this->taxPerKG = tax; 
	else tax = 0;
}
double OvernightPackage::getTax() const { return taxPerKG; }
void OvernightPackage::print() const 
{
	Package::print(); cout << taxPerKG << endl; 
}
double OvernightPackage::calculatePrice() const 
{
	return getWeght() * (getPricePerKG() + taxPerKG); 
}