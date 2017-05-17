#include "SavingAccount.h"
#include <iostream>
using namespace std;

int main()
{
	SavingAccount save(100) ,saver1(2000), saver2(3000), saver3;
	SavingAccount::modifyInterestRate(3);
	cout << saver1.getInterest() << endl;
	saver1.calculateMounthlyInterest();
	saver2.calculateMounthlyInterest();
	cout << saver1.getSavingBalance() << endl;
	cout << saver2.getSavingBalance() << endl;
	SavingAccount::modifyInterestRate(4);
	cout << save.getInterest() << endl;
	saver1.calculateMounthlyInterest();
	saver2.calculateMounthlyInterest();
	cout << saver1.getSavingBalance() << endl;
	cout << saver2.getSavingBalance() << endl;
	save.calculateMounthlyInterest();
	cout << save.getSavingBalance() << endl;
	cout << save.getInterest() << endl;
}