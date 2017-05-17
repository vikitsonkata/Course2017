#include "SeniorExpert.h"
#include "JuniorExpert.h"
#include "CompanyOperators.h"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int main()
{
	/*Address adr1(1000, "BG", "Sofiq", "bul. Bulgaria", 81),
		adr2(5800, "BG", "Pleven", "Drujba", 124),
		adr3(1000, "BG", "Sofia", "Studentski grad", 18);
	Date date1(1, 4, 2000), date2(4, 6, 2010), date3(4, 10, 2015);
	Employee emp1(adr1, "Gosho", "5", 13.4, 8, date1, date2),
		emp2(adr2, "Viktor", "10", 20, 12, date1, date2);
	Manager man1(adr2, "Viktor", "10", 20, 12, date1, date2, 8);
	Expert exp1(adr2, "Dido", "14", 13.04, 20, date1, date2, 0.1);
	vector<string> tech;
	tech.push_back("tech1");
	tech.push_back("tech2");
	SeniorExpert sen1(adr3, "Alex", "100", 6.38, 60, date1, date2, 0.1, 7, "some degree");
	JuniorExpert jun1(adr3, "Bobi", "1234", 1.01, 15, date1, date2, 0.1, tech);
	*/

	CompanyOperators co;
	co.createEmployees();
	/*
	co.addEmployee(&emp1);
	co.addEmployee(&emp2);
	co.addEmployee(&man1);
	co.addEmployee(&exp1);
	co.addEmployee(&sen1);
	co.addEmployee(&jun1);
	*/
	co.print();
}