
#ifndef TRUCK_H_
#define TRUCK_H_
#include <string>
#include <iostream>
using namespace std;

class Truck
{
private:
	string model;
	int km;
	int fuelConsumtion;
public:
	Truck();
	Truck(string, int, int );
	string getModel();
	int getKM();
	int getFuelConsumtion();
	void setFuelConsumtion(int);
	void setModel(string);
	void setKM(int);
	void showInfo();
	int distance(int);
	~Truck();
};

#endif