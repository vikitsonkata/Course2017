#include "Recipient.h"
#include <iostream>
using std::cout;


Recipient::Recipient()
{
}
Recipient::Recipient(const Address& address, const string& name, int payment)
	:address(address)
{
	setName(name);
	setPayment(payment);
}
void Recipient::setAddress(const Address& address) { this->address = address; }
void Recipient::setName(const string& name) { this->name = name; }
void Recipient::setPayment(int payment) { this->payment = payment; }
const Address& Recipient::getAddress() const { return address; }
const string& Recipient::getName() const { return name; }
int Recipient::getPayment() const { return payment; }
void Recipient::print() const
{
	cout << "Address:\n";
	address.print();
	cout << "Name: " << name << " and preffered ways to pay - ";
	switch (payment)
	{
	case 0: cout << "cash"; break;
	case 1: cout << "by card"; break;
	case 2: cout << "by bank"; break;
	case 3: cout << "with friend"; break;
	default:cout << "other";
	}
	cout << "\n";
}

Recipient::~Recipient()
{
}
