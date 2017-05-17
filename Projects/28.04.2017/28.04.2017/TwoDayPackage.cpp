#include "TwoDayPackage.h"
#include <iostream>
using std::cout;


TwoDayPackage::TwoDayPackage()
{
	setTax(0);
}
TwoDayPackage::TwoDayPackage(
	const Sender& sender, const Client& recipient,
	double weight, double pricePerKG, double tax)
	:Package(sender, recipient, weight, pricePerKG)
{
	setTax(tax);
}
TwoDayPackage::~TwoDayPackage()
{
}

void TwoDayPackage::setTax(double tax) 
{
	if(tax>0 && tax<100) this->tax = tax; 
	else tax = 0;
}
double TwoDayPackage::getTax() const { return tax; }
void TwoDayPackage::print() const 
{
	Package::print(); cout << tax << endl; 
}
double TwoDayPackage::calculatePrice() const 
{
	return Package::calculatePrice() + tax;
}