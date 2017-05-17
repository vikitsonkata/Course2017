#include "SavingAccount.h"

int SavingAccount::annualInterestRate = 0;

SavingAccount::SavingAccount()
{
	savingBalance = 0;
}

SavingAccount::SavingAccount(double money)
{
	savingBalance = money;
}
double SavingAccount::calculateMounthlyInterest()
{
	double interest = savingBalance*annualInterestRate / 100 / 12;
	savingBalance += interest;
	return interest;
}
double SavingAccount::getSavingBalance() const
{
	return savingBalance;
}

int SavingAccount::getInterest()
{
	return annualInterestRate;
}
void  SavingAccount::modifyInterestRate(int interest)
{
	annualInterestRate = interest;
}

SavingAccount::~SavingAccount(){}
