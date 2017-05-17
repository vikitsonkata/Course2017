#include "QA_game.h"
#include <string>
#include <iostream>
using namespace std;

QA_game::QA_game()
{
}
QA_game::QA_game(string q, string* a, int index)
{
	this->question = q;
	for (int i = 0; i < 4; ++i)
		this->answers[i] = a[i];
	this->rightAnswerIndex = index;
}
void QA_game::ask() const
{
	cout << this->question << endl;
}
void QA_game::list() const
{
	for (int i = 0; i < 4; ++i)
	{
		cout << i + 1 << ". " << answers[i] << endl;
	}
}
bool QA_game::guess(int index)
{
	if (index - 1 == this->rightAnswerIndex)
		return true;
	else
		return false;
}


QA_game::~QA_game()
{
}
