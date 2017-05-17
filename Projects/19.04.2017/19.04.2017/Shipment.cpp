#include "Shipment.h"
#include <iostream>
using std::cout;


Shipment::Shipment()
{
}

Shipment::Shipment(const Recipient& recipient, int weight, double price)
	:recipient(recipient)
{
	setWeight(weight);
	setPrice(price);
}
void Shipment::setRecipient(const Recipient& recipient) { this->recipient = recipient; }
void Shipment::setWeight(int weight) { this->weight = weight; }
void Shipment::setPrice(double price) { this->price = price; }
const Recipient& Shipment::getRecipient() const { return recipient; }
int Shipment::getWeight() { return weight; }
double Shipment::getPrice() { return price; }
void Shipment::print() const
{
	cout << "Recipient:\n";
	recipient.print();
	cout << "Weight: " << weight << "\nPrice: " << price << "\n";
}

Shipment::~Shipment()
{
}
