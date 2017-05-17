//#pragma once

#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
using namespace std;

class Student
{
private:
	string firstName;
	string lastName;
	int age;
	int course;
	int marksArr[10];
public:
	friend ostream& operator<< (ostream& os, Student& Pesho);

	Student();
	Student(string, string, int, int, int []);
	void setFirstName(string);
	void setLastName(string);
	void setAge(int);
	void setCourse(int);
	void setMarksArr(int[]);
	const int maxMark() const;
	const int minMark() const;
	const int Student::maxMarkCount() const;
	const int Student::minMarkCount() const;
	const string getFirstName() const;
	const string getLastName() const;
	const int getAge()const;
	const int getCourse() const;
	const int* getMarksArr()const;
	void showInfo();
	const int operator[](int) const;
	~Student();
};

#endif /* STUDENT_H_ */