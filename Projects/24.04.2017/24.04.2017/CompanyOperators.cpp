#include "CompanyOperators.h"



CompanyOperators::CompanyOperators()
{
}

void CompanyOperators::addEmployee(Employee* employee) { staff.push_back(employee); }
const vector<Employee*>& CompanyOperators::getStaff() const { return staff; }
void CompanyOperators::setStaff(const vector<Employee*>& staff) { this->staff = staff; }
void CompanyOperators::createEmployees()
{
	Address *adr1 = new Address(1000, "BG", "Sofiq", "bul. Bulgaria", 81),
		*adr2 = new Address(5800, "BG", "Pleven", "Drujba", 124),
		*adr3 = new Address(1000, "BG", "Sofia", "Studentski grad", 18);
	Date *date1 = new Date(1, 4, 2000),
		*date2 = new Date(4, 6, 2010),
		*date3 = new Date(4, 10, 2015);
	Employee *emp1 = new Employee(*adr1, "Gosho", "5", 13.4, 8, *date1, *date2),
		*emp2 = new Employee(*adr2, "Viktor",  "10", 20, 12, *date1, *date2);
	Manager *man1 = new Manager(*adr2, "Viktor", "10", 20, 12, *date1, *date2, 8);
	Expert *exp1 = new Expert(*adr2, "Dido", "14", 13.04, 20, *date1, *date2, 0.1);
	vector<string> tech;
	tech.push_back("tech1");
	tech.push_back("tech2");
	SeniorExpert *sen1 = new SeniorExpert(*adr3, "Alex", "100",  6.38, 60 , *date1, *date2, 0.1, 7, "some degree");
	JuniorExpert *jun1 = new JuniorExpert(*adr3, "Bobi", "1234", 1.01, 15 , *date1, *date2, 0.1, tech);

	addEmployee(emp1);
	addEmployee(emp2);
	cout << staff.size() << endl;
	addEmployee(man1);
	addEmployee(exp1);
	addEmployee(sen1);
	addEmployee(jun1);
	cout << staff.size() << endl;
}
void CompanyOperators::print() const
{
	cout << "			Company staff:\n\n";
	for (unsigned int i = 0; i < staff.size(); i++)
	{
		staff[i]->print();
		cout << endl;
	}
}

CompanyOperators::~CompanyOperators()
{
	if(staff.size()!=0)
	{
		cout << "\n(...)\n";
	}
}
//search Empl by name, by salary
//sum of salary
//