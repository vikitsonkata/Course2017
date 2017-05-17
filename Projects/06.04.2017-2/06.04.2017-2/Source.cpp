#include <iostream>
#include "QA_game.h"
using namespace std;

int main()
{
	string da[4] = { "da", " ", "ne", "maybe" };
	QA_game game("da?", da, 0);
	game.ask();
	cout << (bool)(game.guess(3)) << endl;

}