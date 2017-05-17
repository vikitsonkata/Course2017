#include "Truck.h"



Truck::Truck()
{
	this->km = 0;
	this->model = "Can't show";
}
Truck::Truck(string model, int km, int fc)
{
	this->model = model;
	this->km = km;
	this->fuelConsumtion = fc;
}
int Truck::getKM()
{
	return this->km;
}
int Truck::getFuelConsumtion()
{
	return this->fuelConsumtion;
}
void Truck::setFuelConsumtion(int FC)
{
	this->fuelConsumtion = FC;
}
string Truck::getModel()
{
	return this->model;
}
void Truck::setKM(int km)
{
	this->km = km;
}
void Truck::setModel(string model)
{
	this->model = model;
}
void Truck::showInfo()
{
	cout << "Info: " << endl
		<< "Model: " << this->model << endl
		<< "KM: " << this->km << endl
		<< "Fuel consumtion: " << fuelConsumtion << endl;
}
int Truck::distance(int fuel)
{
	return fuel / fuelConsumtion * 100;
}


Truck::~Truck()
{
}
