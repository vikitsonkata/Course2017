#include <iostream>
#include <vector>
#include "Manager.h"
#include "ExpertInherited.h"
using namespace std;

int main()
{
	
	ExpertInherited ex1("Lili", "Petrova", "HR", 20, 0);
	ExpertInherited ex2("Lili1", "Petrova", "HR", 20, 0);
	ExpertInherited ex3("Lili2", "Petrova", "HR", 20, 0);
	ex1.print();
	ex1.setBonus(150);
	ex1.setHours(100);
	ex1.print();

	vector<ExpertInherited> vec;
	vec.push_back(ex1);
	vec.push_back(ex2);
	vec.push_back(ex3);
	
	Manager man("Ivan", "Ivanov", "sth", 30);
	man.print();
	man.setHours(161);
	
}