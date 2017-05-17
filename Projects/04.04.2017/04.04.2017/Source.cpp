#include <iostream>
#include <string>
using namespace std;

class Dog
{
private:
	string name;
	int age;
	float weight;
	string breed;
public:
	Dog()
	{
		this->name = "Lucky";
		this->age = 1;
		this->weight = 5;
		this->breed = "Street wonderful";
	}
	Dog(string dogName, int dogAge, float dogWeight, string dogBreed)
	{
		this->name = dogName;
		this->age = dogAge;
		this->weight = dogWeight;
		this->breed = dogBreed;
	}
	void setName(string newName)
	{
		this->name = newName;
	}
	void setAge(int newAge)
	{
		this->age = newAge;
	}
	void setWeight(float newWeight)
	{
		this->weight = newWeight;
	}
	void setBreed(string newBreed)
	{
		this->breed = newBreed;
	}
	string getName()
	{
		return this->name;
	}
	int getAge()
	{
		return this->age;
	}
	float getWeight()
	{
		return this->weight;
	}
	string getBreed()
	{
		return this->breed;
	}
	void showInfo()
	{
		cout << "Dog info:\nName: " << name
			<< "Age: " << age
			<< "Weight: " << weight
			<< "Breed: " << breed;
	}
};

class car
{
private:
	string name;
	string mark;
	int age;
	int km;
	float price;
public:
	car(string carName, int carAge, int carKm, float carPrice, string carMark)
	{
		this->name = carName;
		this->age = carAge;
		this->price = carPrice;
		this->mark = carMark;
		this->km = carKm;
	}
	void setName(string newName)
	{
		this->name = newName;
	}
	void setAge(int newAge)
	{
		this->age = newAge;
	}
	void setPrice(float newPrice)
	{
		this->price = newPrice;
	}
	void setMark(string newMark)
	{
		this->mark = newMark;
	}
	string getName()
	{
		return this->name;
	}
	int getAge()
	{
		return this->age;
	}
	float getPrice()
	{
		return this->price;
	}
	string getMark()
	{
		return this->mark;
	}

};

string reverse(string word)
{
	string rev = "";
//	for (int i = word.length() - 1; i >= 0; --i)
//		rev.append(word[i]);
	return rev;
}

int main()
{
	Dog dog1("Lasi", 2, 7.5, "german shepard");
	Dog dog2("Sharko", 3, 12, "pudel");
	dog2.setWeight(22);
	cout << dog1.getName() << endl;
	string rev = "";
	rev.append(dog2.getBreed());
	cout << rev[0] << endl;

}