#include <iostream>
#include "BankAccount.h"
#include "Invoice.h"
#include "Employee.h"
using namespace std;

int main()
{
	BankAccount ba1(-10), ba2(200);
	Employee e1, e2("Pesho ", " ", 10);
	Invoice invoice1;

	cout << invoice1.getInvoiceMount() << endl
		<< e1.getFirstName() << endl << e2.getLastName() << endl;
	ba1.credit(-100);
	ba1.credit(100);
	ba2.credit(200);
	ba1.debit(200);
	ba2.debit(300);
	cout << ba1.getBalance() << endl
		<< ba2.getBalance() << endl;
}