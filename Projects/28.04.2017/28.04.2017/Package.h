#ifndef PACKAGE
#define PACKAGE
#include "Client.h"
#include "Sender.h"

class Package
{
public:
	Package();
	Package(const Sender&, const Client&, double, double);
	virtual ~Package();

	void setSender(const Sender&);
	void setRecipient(const Client&);
	void setWeight(double);
	void setPricePerKG(double);
	const Sender& getSender() const;
	const Client& getRecipient() const;
	double getWeght() const;
	double getPricePerKG() const;
	virtual void print() const;
	virtual double calculatePrice() const;
private:
	Sender sender;
	Client recipient;
	double weight, pricePerKG;
};

#endif