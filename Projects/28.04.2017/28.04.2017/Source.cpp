#include <iostream>
#include <vector>
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
#include "Sender.h"
using namespace std;

const Package* findByNameSender(const vector<Package*>&, const string&);
const string& findMostWantedCity(const vector<Package*>&);

int main()
{
	Address adr1(5800, "BG", "Pln", "Drujba", 124),
		adr2(5800, "BG", "Pln", "Drujba", 123),
		adr3(1000, "BG", "Sf", "Studentski grad", 18);
	Client viktor(adr3, "Viktor"),
		baba(adr2, "Didi"),
		mama(adr1, "Ani");
	Payment pay1("cash", "Viktor", adr3),
		pay2("bank", "Ani", adr1),
		pay3("card", "Didi", adr2);
	Sender viktor1("Viktor", adr3,
			pay1.getType(), pay1.getName(), pay1.getAddress()),
		baba1("Didi", adr2,
			pay3.getType(), pay3.getName(), pay3.getAddress()),
		mama1("Ani", adr1,
			pay1.getType(), pay1.getName(), pay1.getAddress());
	vector<Package*> company;
	OvernightPackage overPackage(mama1, viktor, 3, 5, 0.3);
	TwoDayPackage twoPackage(baba1, viktor, 1, 4, 2),
		twoPackage2(mama1, viktor, 1, 3, 3);
	company.push_back(&overPackage);
	company.push_back(&twoPackage);
	company.push_back(&twoPackage2);
	//company[0]->print();
	//company[1]->print();

	if(findByNameSender(company, "Ani"))
		findByNameSender(company, "Ani")->print();
 	cout << findMostWantedCity(company) << endl;
}

const Package* findByNameSender(const vector<Package*>& co, const string& name)
{
	for  (int i = 0; i < co.size(); ++i)
	{
		if (name == co[i]->getSender().getName())
			return co[i];
	}
		cout << "NaN" << endl;
		return NULL;
}

const string& findMostWantedCity(const vector<Package*>& co)
{
	vector<string> str;
	vector<int> counters;
	for (unsigned int i = 0; i < co.size(); ++i) //unsigned int, because of vector.size()
	{
		bool find = false;
		string nameCity = co[i]->getRecipient().getAddress().getCity();
		for (unsigned int j = i; j < str.size() && !find; ++j)
			if (str[j] == nameCity)
			{
				counters[j]++;
				find = true;
			}
		if (!find)
		{
			str.push_back(nameCity);
			counters.push_back(1);
		}
	}
	int maxCount = 0, maxI = -1;
	for (unsigned int i = 0; i < counters.size(); ++i)
		if (counters[i] > maxCount)
		{
			maxCount = counters[i];
			maxI = i;
		}
	return str[maxI];
}