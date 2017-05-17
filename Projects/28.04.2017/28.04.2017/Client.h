#ifndef CLIENT
#define CLIENT
#include "Address.h"
#include <string>
using std::string;

class Client
{
public:
	Client();
	Client(const Address&, const string&);
	virtual ~Client();

	void setAddress(const Address&);
	void setName(const string&);
	const Address& getAddress() const;
	const string& getName() const;
	void print() const;
private:
	Address address;
	string name;
};

#endif