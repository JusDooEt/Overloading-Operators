# Overloading Operators

## Description
Overloaded operators are a core part of a class object's architecture. Normally, a user created class cannot use comparison or arithmetic operators like '<', '==', '+', etc. This can be solved by defining class specific definitions to these operators. This program is an example/template on how to declare and define arithmetic, boolean, and streaming operators in order to make a class more generic and usable in code.

## Output
```
Here is book #1:
ISBN: 0-12345-9
Year: 1990
Price: 12.50

Here is book #2:
ISBN: 0-54321-9
Year: 2001
Price: 7.75

There are 2 books.

Book #1 has a higher price.

Not the same price.

The price is not more than $10.00.

The average book price is $10.12.

The book was published before 2000.

ISBN: 0-12345-9
Year: 1990
Price: 12.50
```

## Book Class
### Members
- isbn : string
- year : int
- price : double
- bookCount : int : static

### Methods
- Book()
  - Default constructor and increments the static bookCount variable when a new book obj is created.
- Book(string isbn, int year, double price)
  - Overloaded constructor that initializes obj members to the constructors parameters.
- ~Book()
  - Default deconstructor and decrements the static bookCount variable when a book obj is destroyed.
- void displayBook()
  - This method will display the book member's data in formatted text to the console using cout statements.
- int getCount()
  - This method will return the static int bookCount

### Overloaded Operators
- bool operator >(Book& b2), operator <(Book& b2), operator ==(Book& b2)
  - These will allow two book objects to be compared using boolean operators.
  - The operators will compare the book object's prices.
- bool operator >(double price2), operator <(double price2), operator ==(double price2)
  - These will allow a book object's price and double literal value representing a price to be compared using boolean operators.
- bool operator <(int year2), operator >(int year2), operator ==(int year2)
  - These will allow a book object's year and int literal value representing a year to be compared using boolean operators.
- double operator +(Book b2)
  - This returns the sum of the book prices.
- friend ostream& operator <<(ostream& stream, Book& book)
  - This acts the same as the displayBook() method but for any kind of ostream type.
