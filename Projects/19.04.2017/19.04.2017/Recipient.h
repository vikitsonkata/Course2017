#ifndef RECIPIENT_H_
#define RECIPIENT_H_
#include "Address.h"

class Recipient
{
public:
	Recipient();
	Recipient(const Address&, const string&, int);
	void setAddress(const Address&);
	void setName(const string&);
	void setPayment(int);
	const Address& getAddress() const;
	const string& getName() const;
	int getPayment() const;
	void print() const;
	~Recipient();
private:
	Address address;
	string name;
	int payment;
};

#endif