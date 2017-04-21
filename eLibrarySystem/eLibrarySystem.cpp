// eLibrarySystem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Admin.h"
#include <sstream>
#include <iterator>
#include <set>
#include <fstream>
#include "Book.h"
#include <vector>
#include "Global.h"
#include <iomanip>

using namespace std;

char showInitialMenu() {
	cout<<"\n Welcome To e-Library System \n";
	cout << "Press The Following to Proceed.\n";
	cout << "a.If you are a Student\n";
	cout << "b.If you are a Teacher\n";
	cout << "c.If you are a admin\n";
	cout << "d.Exit\n";
	char c;
	cin >> c;
	return tolower(c);
}




void readData() {
	Global *global;
	global = Global::getInstance();
	global->getAdmin();
	global->getBook();
	global->getStudent();
	global->getTeacher();
}

string showLoginMenu() {
	string userName, pass;
	cout << "Enter the username" << endl;
	cin >> userName;
	cout << "Enter Password" << endl;
	cin >> pass;
	return userName + ":" + pass;
}

int main()
{

	Global *global;
	global = Global::getInstance();
	readData();

	vector<string> splittedString;
	for (; ; )
	{

		char uInput = showInitialMenu();

		if (uInput == 'a') {

			cout << "Yo've chosed to logged in as a Student " << endl;
			cout << "Enter username " << endl;
			string uName;
			cin >> uName;
			cout << "Enter Password" << endl;
			string uPass;
			cin >> uPass;
			bool found = false;
			for (int i = 0; i < global->studentArray.size();i++)
			{
				if (global->studentArray[i].getUserName() == uName&&global->studentArray[i].getPassword() == uPass)
				{
					found = true;
					global->studentArray[i].showMenu();
				}
			}
			if (!found) {
				cout << "User No Found" << endl;
			}
		}
		else if (uInput == 'b') {

			cout << "Yo've chosed to logged in as a Student " << endl;
			cout << "Enter username " << endl;
			string uName;
			cin >> uName;
			cout << "Enter Password" << endl;
			string uPass;
			cin >> uPass;
			bool found = false;
			for (int i = 0; i < global->teacherArray.size();i++)
			{
				if (global->teacherArray[i].getUserName() == uName&&global->teacherArray[i].getPassword() == uPass)
				{
					found = true;
					global->teacherArray[i].showMenu();
				}
			}
			if (!found) {
				cout << "User No Found" << endl;
			}
		}

		else if (uInput == 'c') {
			splittedString = global->split(showLoginMenu(), ':');
			if (splittedString[0] == global->admin->getUName() && splittedString[1] == global->admin->getPassword())
			{
				global->admin->showMenu();
			}
			else
			{
				cout << "Wrtong Username or Password, Try Again!!";
			}
		}
		else if (uInput == 'd') {
			break;
		} else {
			cout << "Error!! Wrong Inputs.......!!! \n";
		}
	
	}

	global->saveAllValues();

	
}