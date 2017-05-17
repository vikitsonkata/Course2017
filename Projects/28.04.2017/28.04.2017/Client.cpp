#include "Client.h"
#include <iostream>
using std::cout;


Client::Client()
{

}
Client::Client(const Address& address, const string& name)
{
	setAddress(address);
	setName(name);
}
Client::~Client()
{
}


void Client::setAddress(const Address& address) { this->address = address; }
void Client::setName(const string& name) { this->name = name; }
const Address& Client::getAddress() const { return address; }
const string& Client::getName() const { return name; }
void Client::print() const { cout << name << endl; address.print(); cout << endl; }
