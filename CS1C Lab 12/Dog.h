/*************************************************
* Program    : Lab #12
* File       : Dog.h
* ================================================
* Programmer : Cameron Abo
* Class      : CS 1C M/W 10:30a
*************************************************/
#pragma once
#include <string>
#include <iostream>

using namespace std;
class Dog
{
private:
	string name;
	float  weight;
	int	   age;

public: 
	Dog(string name, float weight, int age);
	~Dog();
	void displayDog();

	bool operator>=(int age2);
	bool operator<(Dog& dog2);
	bool operator==(Dog& dog2);
	friend ostream& operator <<(ostream& stream, Dog& dog);
};

