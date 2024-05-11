/*************************************************
* Program    : Lab #12
* File       : Dog.h
* ================================================
* Programmer : Cameron Abo
* Class      : CS 1C M/W 10:30a
*************************************************/
#include "Dog.h"

Dog::Dog(string name, float weight, int age) : 
	name(name), 
	weight(weight), 
	age(age)
{}

Dog::~Dog() {}

void Dog::displayDog()
{
	cout << "NAME: " << name << endl;
	cout << "WEIGHT: " << weight << " pounds\n";
	cout << "AGE: " << age << " year(s) old.\n";
}

bool Dog::operator>=(int age2)
{
	if (age >= age2)
		return true;
	return false;
}

bool Dog::operator<(Dog& dog2)
{
	if (weight < dog2.weight)
		return true;
	return false;
}

bool Dog::operator==(Dog& dog2)
{
	if (name == dog2.name)
		return true;
	return false;
}

ostream& operator<<(ostream& stream, Dog& dog)
{
	stream << "NAME: " << dog.name << endl;
	stream << "WEIGHT: " << dog.weight << " pounds\n";
	stream << "AGE: " << dog.age << " year(s) old.\n";

	return stream;
}
