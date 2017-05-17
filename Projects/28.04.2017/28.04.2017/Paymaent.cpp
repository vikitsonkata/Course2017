#include "Paymaent.h"
#include <iostream>
using std::cout;


Payment::Payment()
{
}
Payment::Payment(const string& type, const string& name, const Address& address)
{
	setType(type);
	setName(name);
	setAddress(address);
}

Payment::~Payment()
{
}

void Payment::setType(const string& type) { this->type = type; }
void Payment::setAddress(const Address& address) { this->address = address; }
void Payment::setName(const string& name) { this->name = name; }
const Address& Payment::getAddress() const { return address; }
const string& Payment::getName() const { return name; }
const string& Payment::getType() const { return type; }
void Payment::print() const
{
	cout << type << endl;
	cout << name << endl;
	address.print();
	cout << endl;
}
