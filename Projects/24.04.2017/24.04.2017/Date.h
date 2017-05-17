#ifndef _DATE_
#define _DATE_

class Date
{
private:
	int day, month, year;
public:
	Date();
	Date(int, int, int);
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	void print() const;
	bool operator<(const Date&);
	~Date();
};

#endif