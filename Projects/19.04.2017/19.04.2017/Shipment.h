#ifndef SHIPMNET_H_
#define SHIPMENT_H_
#include "Recipient.h"

class Shipment
{
public:
	Shipment();
	Shipment(const Recipient&, int, double);
	void setRecipient(const Recipient&);
	void setWeight(int);
	void setPrice(double);
	const Recipient& getRecipient() const;
	int getWeight();
	double getPrice();
	void print() const;
	~Shipment();
private:
	Recipient recipient;
	int weight;
	double price;
};

#endif