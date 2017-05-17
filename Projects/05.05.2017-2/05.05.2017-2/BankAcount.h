#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_

class BankAccount
{
private:
	int balance;
public:
	BankAccount();
	BankAccount(int);
	~BankAccount();
	int getBalance();

	void credit(int);
	int debit();
};

#endif