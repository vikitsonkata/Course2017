#ifndef QA_GAME_H_
#define QA_GAME_H_

#include <string>
using namespace std;

class QA_game
{
private:
	string question;
	string answers[4];
	int rightAnswerIndex;
	
public:
	QA_game();
	QA_game(string, string*, int);
	void ask() const;
	void list() const;
	bool guess(int);
	~QA_game();
};

#endif 