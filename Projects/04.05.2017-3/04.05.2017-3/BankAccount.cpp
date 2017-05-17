#include "BankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount()
{
	this->balance = 0;
}
BankAccount::BankAccount(int balance)
{
	if (balance < 0)
	{
		cout << "Invalic initial balance" << endl;
		this->balance = 0;
	}
	else
		this->balance = balance;
}
int BankAccount::getBalance()
{
	return this->balance;
}
void BankAccount::credit(int credit)
{
	if (credit < 0)
		cout << "Don't cheat" << endl;
	else
		this->balance += credit;
}
void BankAccount::debit(int debit)
{
	if (debit > this->balance)
		cout << "Debit amount exeeded amount balance" << endl;
	else
		this->balance -= debit;
}
BankAccount::~BankAccount()
{
}
