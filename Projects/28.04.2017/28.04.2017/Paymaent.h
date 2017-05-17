#ifndef PAYMENT
#define PAYMENT
#include <string>
#include "Address.h"

class Payment
{
public:
	Payment();
	Payment(const string&, const string&, const Address&);
	virtual ~Payment();

	void setType(const string&);
	void setAddress(const Address&);
	void setName(const string&);
	const Address& getAddress() const;
	const string& getName() const;
	const string& getType() const;
	void print() const;
private:
	string type;
	string name;
	Address address;
};

#endif