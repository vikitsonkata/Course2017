#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student()
{
	int marksArr[10] = { 1,2,3,4,5,1,2,3,4,5 };
	this->firstName = "Ivan";
	this->lastName = "Ivanov";
	this->age = 18;
	for (int i = 0; i < 10; i++)
		this->marksArr[i] = marksArr[i];
}

Student::Student(string firstName, string lastName,
	int age, int course, int marksArr[])
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->age = age;
	this->course = course;
	for (int i = 0; i < 10; ++i)
		this->marksArr[i] = marksArr[i];
}
void Student::setAge(int age)
{
	this->age = age;
}
void Student::setCourse(int age)
{
	this->course = course;
}
void Student::setFirstName(string firstName)
{
	this->firstName = firstName;
}
void Student::setLastName(string lastName)
{
	this->lastName = lastName;
}
void Student::setMarksArr(int markArr[])
{
	for (int i = 0; i < 10; ++i)
		this->marksArr[i] = marksArr[i];
}
const int* Student::getMarksArr()const
{
	return this->marksArr;
}
const int Student::getAge()const
{
	return this->age;
}
const int Student::getCourse()const
{
	return this->course;
}
const string Student::getFirstName()const
{
	return this->firstName;
}
const string Student::getLastName()const
{
	return this->lastName;
}
void Student::showInfo()
{
	cout << "Info: "
		<< "First name: " << firstName << endl
		<< "age: " << age << endl;
}
const int Student::operator[](int i) const
{
	return this->marksArr[i];
}
Student::~Student()
{
}

const int Student::maxMark() const
{
	int maxMark = this->marksArr[0];
	for (int i = 1; i < 10; ++i)
		if (this->marksArr[i]>maxMark)
			maxMark = this->marksArr[i];
	return maxMark;
}
const int Student::minMark() const
{
	int minMark = this->marksArr[0];
	for (int i = 1; i < 10; ++i)
		if (this->marksArr[i]<minMark)
			minMark = this->marksArr[i];
	return minMark;
}

const int Student::maxMarkCount() const
{
	int maxMark = this->marksArr[0];
	for (int i = 1; i < 10; ++i)
		if (this->marksArr[i]>maxMark)
			maxMark = this->marksArr[i];
	return maxMark;
}
const int Student::minMarkCount() const
{
	int minMark = this->marksArr[0];
	for (int i = 1; i < 10; ++i)
		if (this->marksArr[i]<minMark)
			minMark = this->marksArr[i];
	return minMark;
}

