#include "Sender.h"



Sender::Sender()
{
}

Sender::Sender(const string& nameSender, const Address& addressSender,
	const string& typePayment, const string& namePayment, const Address& addressPayment)
{
	setName(nameSender);
	setAddress(addressSender);
	payment.setType(typePayment);
	payment.setName(namePayment);
	payment.setAddress(addressPayment);
}

Sender::~Sender()
{
}

void Sender::setPayment(const Payment& payment) { this->payment = payment; }
const Payment& Sender::getPayment() const { return payment; }
void Sender::print() const
{
	Client::print();
	payment.print();
}