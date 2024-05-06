/*************************************************
* Program    : Overloading operators
* File       : Book.h
* ================================================
* Programmer : Cameron Abo
*************************************************/
#pragma once

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Book
{
private: 
	string isbn;
	int	   year;
	double price;
	static int bookCount;
	
public:
	Book();
	Book(string isbn, int year, double price);
	~Book();
	
	void displayBook();
	int getCount();

	bool operator >(Book& b2)
	{
		if (price > b2.price)
			return true;

		return false;
	}

	bool operator <(Book& b2)
	{
		if (price < b2.price)
			return true;

		return false;
	}

	bool operator ==(Book& b2)
	{
		if (price == b2.price)
			return true;

		return false;
	}

	bool operator >(double price2)
	{
		if (price > price2)
			return true;

		return false;
	}

	bool operator <(double price2)
	{
		if (price < price2)
			return true;

		return false;
	}

	bool operator ==(double price2)
	{
		if (price == price2)
			return true;

		return false;
	}

	bool operator <(int year2)
	{
		if (year < year2)
			return true;

		return false;
	}

	bool operator >(int year2)
	{
		if (year > year2)
			return true;

		return false;
	}
	
	bool operator ==(int year2)
	{
		if (year < year2)
			return true;

		return false;
	}

	double operator +(Book b2)
	{
		return price + b2.price;
	}
	friend ostream& operator <<(ostream& stream, Book& book)
	{
		stream << "ISBN: " << book.isbn << endl;
		stream << "Year: " << book.year << endl;
		stream << setprecision(2) << fixed;
		stream << "Price: " << book.price << endl;
		stream << setprecision(6);
		stream.unsetf(ios::fixed);

		return stream;
	}
};

