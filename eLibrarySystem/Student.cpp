#include <string>
#include <vector>
#include <iostream>

#include "Student.h"

//void Student::Menu()
//{
//
//	cout << "HERE WE PRESENTS THE MENU FOR YOU" << endl;
//	cout << "\n" << endl;
//	cout << "1.See your Previous History" << endl;
//	cout << "2. Make A Purchase" << endl;
//	cout << "3.Rent anything" << endl;
//	cout << "4.Return A Book " << endl;
//	cout << "" << endl;
//
//}

//Student::Student() : Person()
//{
//	this->firstName = "";
//}

void Student::showMenu()
{
	cout << "Hi! " << firstName << lastName;
	cout << "\nEnter your Login details\n";
	cout << "Enter your User Name :\n";
	cin >> userName;
	cout << "Enter your Password :\n";
	cin >> password;
	cout << "You're Succesfully logged In ! \n Now You're working as an Admin\n";
	cout << "1.Add a Book\n";
	cout << "2.Renmove a Book\n";
	cout << "3.Update a Book\n";
	cout << "4.\n";
	cout << "Press The Following Options To Proceed!\n";
	cout << "Press The Following Options To Proceed!\n";
}
