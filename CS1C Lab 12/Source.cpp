/*************************************************
* Program    : Lab #12
* File       : Source.cpp
* ================================================
* Programmer : Cameron Abo
* Class      : CS 1C M/W 10:30a
*************************************************/
#include "Dog.h"

int main()
{
	Dog myDog("Spot", 5.5, 3);
	Dog yourDog("Jack", 4.5, 3);

	yourDog.displayDog();

	cout << endl;

	if (myDog >= 2)
		cout << "The dog is at least 2 years old.\n";
	else
		cout << "The dog is younger than 2 years old\n";

	cout << endl;

	if (yourDog < myDog)
		cout << "Your dog weighs less than my dog.\n";
	else
		cout << "Your dog weighs the same or more than my dog\n";

	cout << endl;

	if (yourDog == myDog)
		cout << "They have the same name.\n";
	else
		cout << "They do not have the same name.\n";

	cout << endl;

	cout << yourDog;

	return 0;
}

/* OUTPUT
NAME: Jack
WEIGHT: 4.5 pounds
AGE: 3 year(s) old.

The dog is at least 2 years old.

Your dog weighs less than my dog.

They do not have the same name.

NAME: Jack
WEIGHT: 4.5 pounds
AGE: 3 year(s) old.
*/