#ifndef SENDER
#define SENDER
#include "Client.h"
#include "Paymaent.h"

class Sender :
	public Client
{
public:
	Sender();
	Sender(const string&, const Address&,
		const string&, const string&, const Address&);
	virtual ~Sender();

	void setPayment(const Payment&);
	const Payment& getPayment() const;
	virtual void print() const;
private:
	Payment payment;
};

#endif