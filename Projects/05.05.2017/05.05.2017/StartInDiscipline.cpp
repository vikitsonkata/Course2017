#include "StartInDiscipline.h"

StartInDiscipline::StartInDiscipline()
{
	type = qualifation;
}
StartInDiscipline::StartInDiscipline(const DateAndTime& time,
	const Discipline& discipline, const levelInCompetition& type)
{
	setDateAndTime(time);
	setDiscipline(discipline);
}
StartInDiscipline::~StartInDiscipline()
{
}

void StartInDiscipline::setDateAndTime(const DateAndTime& time)
{
	this->time = time;
}
void StartInDiscipline::setDiscipline(const Discipline& discipline)
{
	this->discipline = discipline;
}
void StartInDiscipline::setAthletes(const vector<Athlete>& athletes)
{
	this->athletes = athletes;
}
void StartInDiscipline::setType()
{
	int temp;
	cout << "Level in competition: \n"
		<< "\t0 - final\n\t1 - semifinal\n"
		<< "\t2 - quarterfinal\n\t3 - qualification\n";
	cin >> temp;
	switch (temp)
	{
	case 0: type = final; break;
	case 1: type = semifinal; break;
	case 2: type = quarterfinal; break;
	default: type = qualifation;
	}
}

const DateAndTime& StartInDiscipline::getDateAndTime() const
{
	return time;
}
const Discipline& StartInDiscipline::getDiscipline() const
{
	return discipline;
}
const vector<Athlete> StartInDiscipline::getAthletes() const
{
	return athletes;
}

void StartInDiscipline::showLevelInCompetition() const
{
	switch (type)
	{
	case 0: cout << "final" << endl; break;
	case 1: cout << "semifinal" << endl; break;
	case 2: cout << "quarterfinal" << endl; break;
	case 3: cout << "qualifation" << endl; break;
	default: cout << "no level known in the competition" << endl;
	};
}
void StartInDiscipline::addAthlete(const Athlete& athlete)
{
	athletes.push_back(athlete);
}
void StartInDiscipline::sort()
{

}

ostream& operator<< (ostream& os, const StartInDiscipline& other)
{
	os << other.time << other.discipline;
	for (unsigned int i = 0; i < other.athletes.size(); ++i)
		os << other.athletes[i];
	other.showLevelInCompetition();
	return os;
}
istream& operator>> (istream& is, StartInDiscipline& other)
{
	is >> other.time >> other.discipline;
	other.setType();	
	return is;
}