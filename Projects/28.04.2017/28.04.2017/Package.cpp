#include "Package.h"
#include <iostream>
using std::cout;


Package::Package()
{
	setWeight(0);
	setPricePerKG(0);
}
Package::Package(
	const Sender& sender, const Client& recipient,
	double weight, double price)
{
	setSender(sender);
	setRecipient(recipient);
	setWeight(weight);
	setPricePerKG(price);
}
Package::~Package()
{
}

void Package::setSender(const Sender& sender) { this->sender = sender; }
void Package::setRecipient(const Client& recipient) { this->recipient = recipient; }
void Package::setWeight(double weight) { this->weight = weight; }
void Package::setPricePerKG(double price) { this->pricePerKG = price; }
const Sender& Package::getSender() const { return sender; }
const Client& Package::getRecipient() const { return recipient; }
double Package::getWeght() const { return weight; }
double Package::getPricePerKG() const { return pricePerKG; }
void Package::print() const 
{
	sender.print(); recipient.print(); 
	cout << calculatePrice() << endl; 
}
double Package::calculatePrice() const { return pricePerKG * weight; }