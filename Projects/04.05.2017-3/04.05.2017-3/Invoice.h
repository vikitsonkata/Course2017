#ifndef INVOICE_H_
#define INVOICE_H_
#include <string>
#include <iostream>
using namespace std;

class Invoice
{
private:
	string partNumber;
	string partDiscription;
	int quantity;
	float pricePerItem;
public:
	Invoice();
	Invoice(string, string, int, float);

	void setPartNumber(string);
	void setPartDiscription(string);
	void setQuantity(int);
	void setPricePerItem(float);
	
	string getPartNumber();
	string getPartDiscription();
	int getQuantity();
	float getPricePerItem();

	float getInvoiceMount();

	~Invoice();
};

#endif