#include "Invoice.h"

using namespace std;


Invoice::Invoice()
{
	this->partNumber = "000";
	this->partDiscription = "...";
	this->quantity = 0;
	this->pricePerItem = 0.0;
}
Invoice::Invoice(string number, string discription,
	int quantity, float price)
{
	this->partNumber = number;
	this->partDiscription = discription;
	if (quantity < 0)
		this->quantity = 0;
	else
		this->quantity = quantity;
	if (price < 0)
		this->pricePerItem = 0;
	else
		this->pricePerItem = price;
}
void Invoice::setPartNumber(string number)
{
	this->partNumber = number;
}
void Invoice::setPartDiscription(string discription)
{
	this->partDiscription = discription;
}
void Invoice::setQuantity(int quantity)
{
	if (quantity < 0)
		this->quantity = 0;
	else
		this->quantity = quantity;
}
void Invoice::setPricePerItem(float price)
{
	if (price < 0)
		this->pricePerItem = 0;
	else
		this->pricePerItem = price;
}

string Invoice::getPartNumber()
{
	return this->partNumber;
}
string Invoice::getPartDiscription()
{
	return this->partDiscription;
}
int Invoice::getQuantity()
{
	return this->quantity;
}
float Invoice::getPricePerItem()
{
	return this->pricePerItem;
}

float Invoice::getInvoiceMount()
{
	return this->quantity*this->pricePerItem;
}

Invoice::~Invoice()
{
}
