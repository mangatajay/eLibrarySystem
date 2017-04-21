#include <string>
#include <vector>
#include <iostream>

#include "Person.h"

Person::Person(string fName, string lName, string uName, string pass, int lLogin, int vCount, string email, int id)
{
	firstName = fName;
	lastName = lName;
	password = pass;
	userName = uName;
	lastLogin = lLogin;
	visitCount = vCount;
	eMail = email;
	ID = id;
}

Person::Person(string uName, string pass)
{
	firstName = "admin";
	lastName = "admin";
	password = pass;
	userName = uName;
	lastLogin = 0;
	visitCount = 0;
	eMail = "admin@admin.com";
	ID = 007;
}

string Person::getFirstName()
{
	return firstName;
}

string Person::getLastName()
{
	return lastName;
}

string Person::getEmail()
{
	return eMail;
}

string Person::getPassword()
{
	return password;
}

string Person::getUserName()
{
	return userName;
}

int Person::getLastLogin()
{
	return lastLogin;
}

int Person::getVisitCount()
{
	return visitCount;
}

int Person::getID()
{
	return ID;
}
