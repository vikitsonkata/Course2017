#include "Date.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

Date::Date(){this->day=1; this->month=1; this->year=2000;}
Date::Date(int day, int month, int year)
{
	this->setDay(day);
	this->setMonth(month);
	this->setYear(year);
}
void Date::setDay(int day) { this->day = day; }
void Date::setMonth(int month) { this->month = month; }
void Date::setYear(int year) { this->year = year; }
int Date::getDay() const { return this->day; }
int Date::getMonth() const { return this->month; }
int Date::getYear() const { return this->year; }
void Date::print() const 
{
	cout << this->day << '.' << this->month << '.' << this->year << endl; 
}
bool Date::operator<(const Date& date)
{
	if (year < date.year)
		return true;
	if (month < date.month)
		return true;
	if (day < date.day)
		return true;
	return false;
}

Date::~Date()
{
}
