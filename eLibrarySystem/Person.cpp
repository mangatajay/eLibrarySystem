#include <string>
#include <vector>
#include <iostream>

#include "Person.h"

int Person::PersonID;

void Person::BuyBooks()
{
	cout << "This Is For Buying a Book " << endl;
}

void Person::RentBooks()
{
	cout << "This is To Rent A Book " << endl;
}

void Person::ReturnBooks()
{
	cout << "This Is To Return A Book" << endl;

}

void Person::inputData(void)
{
	cout << "Enter Your First name" << endl;
	getline(cin, FirstName);
	cout << "Enter Your Last Name " << endl;
	getline(cin, LastName);
	cout << "Enter Your email-ID" << endl;
	getline(cin, Email);
	cout << "Enter Your Password " << endl;
	getline(cin, Password);
	PersonID++;

}

void Person::Menu()
{
	
}

void Person::outputData(void)
{
	cout << "First Name Is " << FirstName << endl;
	cout << "Last Name is " << LastName << endl;
	cout << "Your Email Id is " << Email << endl;
	cout << "Your Password is" << endl;
	string::iterator passIter;
	for (passIter = Password.begin(); passIter <= Password.begin() + 3; passIter++)
	{
		cout << *passIter;
	}
	
	cout << "******\n";
	cout << "Visit Number : " << PersonID << endl;

}



