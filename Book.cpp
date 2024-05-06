/*************************************************
* Program    : Overloading operators
* File       : Book.cpp
* ================================================
* Programmer : Cameron Abo
*************************************************/
#include "Book.h"

int Book::bookCount = 0;

Book::Book() :
	isbn(""),
	year(0),
	price(0.0)
{
	bookCount++;
}

Book::Book(string isbn, int year, double price) :
	isbn(isbn),
	year(year),
	price(price)
{
	bookCount++;
}

Book::~Book()
{
	bookCount--;
}

void Book::displayBook()
{
	
	cout << "ISBN: " << isbn << endl;
	cout << "Year: " << year << endl;
	cout << setprecision(2) << fixed;
	cout << "Price: " << price << endl;
	cout << setprecision(6);
	cout.unsetf(ios::fixed);

}

int Book::getCount()
{
	return bookCount;
}

