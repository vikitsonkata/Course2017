#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H

class SavingAccount
{
public:
	SavingAccount();
	SavingAccount(double);
	double calculateMounthlyInterest();
	double getSavingBalance() const;
	~SavingAccount();

	int getInterest();
	static void modifyInterestRate(int);
private:
	double savingBalance;
	static int annualInterestRate;
};

#endif