#include <iostream>
#include "Employee.h"
#include "Student.h"
#include "Shipment.h"
#include "Doctor.h"
using std::cin;

int main()
{
	Date hDate(10, 3, 2017), bDate(11, 11, 2000);
	Employee emp1("Ivan", 3200, hDate, bDate);
	emp1.print();

	Address address;
	address.print();
	cout << endl;

	Student student;
	student.print();
	cout << endl;

	Recipient rec(address, "Gosho", 2);
	rec.print();
	cout << endl;

	Shipment shipment(rec, 4, 12.3);
	shipment.print();
	cout << endl;

	Patient pat1("asa", 12, "female"), pat2("zoro", 22, "male"), pat3("weee", 3, "male");
	Doctor doc("Doctor", 42);
	doc.print();
	doc.addPatient(pat1);
	doc.addPatient(pat2);
	doc.print();
	doc.addPatient(pat3);
	doc.print();

	doc.getAllPatients()[1].print();
	//	doc.getAllPatientsPtr()->push_back(pat3);
	doc.getPatientsPtr()->print(); // 	doc.getPatientsPtr()[0].print();
//	doc.getAllPatients().push_back(pat1);
	cout << doc.getAllPatients().size() << endl;
}