#ifndef START
#define START
#include "Athlete.h"
#include "Discipline.h"
#include "DateAndTime.h"
#include <vector>
using namespace std;

enum levelInCompetition {
	final,
	semifinal,
	quarterfinal,
	qualifation
};

class StartInDiscipline
{
	friend ostream& operator<< (ostream&, const StartInDiscipline&);
	friend istream& operator>> (istream&, StartInDiscipline&);
public:
	StartInDiscipline();
	StartInDiscipline(const DateAndTime&,
		const Discipline&, const levelInCompetition&);
	~StartInDiscipline();

	void setDateAndTime(const DateAndTime&);
	void setDiscipline(const Discipline&);
	void setAthletes(const vector<Athlete>&);
	void setType();

	const DateAndTime& getDateAndTime() const;
	const Discipline& getDiscipline() const;
	const vector<Athlete> getAthletes() const;
	
	void showLevelInCompetition() const;
	void addAthlete(const Athlete&);
	void sort();

private:
	DateAndTime time;
	Discipline discipline;
	vector<Athlete> athletes;
	levelInCompetition type;
};

#endif