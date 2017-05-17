#ifndef ADDRESS_H_
#define ADDRESS_H_
#include <string>
using namespace std;


class Address
{
public:
	Address();
	Address(int, const string&, const string&, const string&, int);
	void setCode(int);
	void setCountry(const string&);
	void setCity(const string&);
	void setStreet(const string&);
	void setNumber(int);
	int getCode() const;
	const string& getCountry() const;
	const string& getCity() const;
	const string& getStreet() const;
	int getNumber() const;
	void print() const;
	~Address();
private:
	int code;
	string country;
	string city;
	string street;
	int number;
};

#endif