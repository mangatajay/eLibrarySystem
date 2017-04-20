#include <string>
#include <vector>
#include <iostream>

#include "Admin.h"

//void Admin::Menu()
//{
//	cout << "HERE WE PRESENTS THE MENU FOR YOU" << endl;
//	cout<<"\n" << endl;
//	cout << "1.See Todays Overall Record" << endl;
//	cout << "2.Access To The Accounts" << endl;
//	cout << "3.Set Penalty " << endl;
//	cout << "4.Remove Penalty" << endl;
//	cout << "5.Give Discount " << endl;
//	cout << "6. Issue A Book" << endl;
//	cout << "7.Return To Menu" << endl;
//
//}

void Admin::showMenu()
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
	char c;
	
	
}

Admin::Admin(string uName, string password) : Person(uName, password)
{
}



string Admin::getUName()
{
	return userName;
}

string Admin::getPassword()
{
	return password;
}
