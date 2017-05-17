#include "Address.h"
#include <iostream>
using std::cout;


Address::Address()
{
	setCode(0);
	setCountry("a");
	setCity("b");
	setStreet("c");
	setNumber(1);
}
Address::Address(int code, const string& country, const string& city, const string& street, int number)
{
	setCode(code);
	setCountry(country);
	setCity(city);
	setStreet(street);
	setNumber(number);
}
void Address::setCode(int code) { this->code = code; }
void Address::setCountry(const string& country) { this->country = country; }
void Address::setCity(const string& city) { this->city = city; }
void Address::setStreet(const string& street) { this->street = street; }
void Address::setNumber(int number) { this->number = number; }
int Address::getCode() const { return this->code; }
const string& Address::getCountry() const { return this->country; }
const string& Address::getCity() const { return this->city; }
const string& Address::getStreet() const { return this->street; }
int Address::getNumber() const { return this->number; }
void Address::print() const 
{
	cout << "Code: " << code << "\nCountry: " << country << "\nCity: " << city
		<< "\nStreet: " << street << "\nNumber: " << number << "\n";
}
Address::~Address()
{
}
