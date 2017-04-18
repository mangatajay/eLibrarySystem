#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;
class Person
{
protected:
	string FirstName;

	string LastName;

	string Email;

	string Password;

	static int PersonID;
	int numberOfPurchase;
	int numberOfRents;
public:

	void BuyBooks();
	void RentBooks();
	void ReturnBooks();
	void inputData(void);
	void Menu();
	void outputData(void);
};
#endif
