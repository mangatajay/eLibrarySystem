#include <string>
#include <vector>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include "Admin.h"
#include "Book.h"
#include "Global.h"
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

void Admin::showMenu()
{
	Global *global;
	global = Global::getInstance();
	for (;;)
	{
		//system("cls");
		cout << "Hi! Admin " << endl;
		cout << "Click On the following options to proceed" << endl;
		cout << "a.Add Book" << endl;
		cout << "b.Show All Book" << endl;
		cout << "c.Update Book" << endl;
		cout << "d.Add Student" << endl;
		cout << "e.Show All Students" << endl;
		cout << "f.Add Teacher" << endl;
		cout << "g.Show All Teachers" << endl;
		cout << "h.Return To Menu" << endl;
		bool willBreak = false;
		char c;
		cin >> c;

		if (c == 'a')
		{
			string aName, bTitle, pub;
			cout << "Enter Author Name" << endl;
			cin >> aName;
			cout << "Enter Book Title" << endl;
			cin >> bTitle;
			cout << "Enter Publisher" << endl;
			cin >> pub;
			double price;
			cout << "Enter Price" << endl;
			cin >> price;

			Book newBook = Book(aName, bTitle, pub, Global::getInstance()->randomInt(), price);
			global->booksArray.push_back(newBook);

		}
		else if (c == 'b') {
			cout << setw(10) << "ID" <<setw(10)<< "Author" <<setw(10)<< "Title" <<setw(10)<< "Publiser" <<setw(10)<< "Price" << setw(10)<<endl;
			for (int i = 0; i < global->booksArray.size(); i++)
			{
				cout << setw(10)<<to_string(global->booksArray[i].getID()) + "" <<setw(10)<< "" + global->booksArray[i].getAuName() + "" <<setw(10)<< "" + global->booksArray[i].getBookTitle() +"" <<setw(10)<< "" + global->booksArray[i].getPublisher() + "" <<setw(10)<< "" + to_string(global->booksArray[i].getPrice()) << endl;
			}

		}
		else if (c == 'c') {
			int iden;
			cout << "Enter the ID of the Book";
			cin >> iden;
			bool found = false;
			for (int i = 0; i < global->booksArray.size(); i++)
			{
				
				if (global->booksArray[i].getID() == iden)
				{
					found = true;
					global->booksArray[i].update();
				}
			}
			if (!found)
			{
				cout << "No Book Found, Try Again" << endl;
			}
		}
		else if (c == 'd') {
			string fName, lName, email;

			cout << "Enter the First Name of the Student";
			cin >> fName;
			cout << "Enter the Last Name of the Student";
			cin >> lName;
			cout << "Enter the Email ID of the Student";
			cin >> email;
			Student newStudent = Student(fName, lName, fName.at(0) + lName, fName.at(0) + lName + "123", time(0), 0, email, global->randomInt(), 0);
			global->studentArray.push_back(newStudent);
		}
		else if (c == 'e') {
			cout << "ID\tFirst Name" <<setw(10)<< "Last Name\tUserName\tLast Login\t Visit Count\tE-Mail" << endl;
			for (int i = 0; i < global->studentArray.size(); i++)
			{
				time_t result = global->studentArray[i].getLastLogin();
				cout << to_string(global->studentArray[i].getID()) + "\t" + global->studentArray[i].getFirstName() + "\t" + global->studentArray[i].getLastName() + "\t" + global->studentArray[i].getUserName() +"\t" + asctime(localtime(&result)) + "\t" + to_string(global->studentArray[i].getVisitCount()) + "\t" + global->studentArray[i].getEmail() << endl;
			}
		}
		else if (c == 'f') {
			string fName, lName, email;

			cout << "Enter the First Name of the Teacher";
			cin >> fName;
			cout << "Enter the Last Name of the Teacher";
			cin >> lName;
			cout << "Enter the Email ID of the Teacher";
			cin >> email;
			Teacher newStudent = Teacher(fName, lName, fName.at(0) + lName, fName.at(0) + lName + "123", time(0), 0, email, global->randomInt(), 10);
			global->teacherArray.push_back(newStudent);
		}
		else if (c == 'g') {
			cout << "ID\tFirst Name" <<setw(10)<< "Last Name\tUserName\tLast Login\t Visit Count\tE-Mail" << endl;
			for (int i = 0; i < global->teacherArray.size(); i++)
			{
				time_t result = global->teacherArray[i].getLastLogin();
				cout << to_string(global->teacherArray[i].getID()) + "\t" + global->teacherArray[i].getFirstName() + "\t" + global->teacherArray[i].getLastName() + "\t" + global->teacherArray[i].getUserName() + "\t" + asctime(localtime(&result)) + "\t" + to_string(global->teacherArray[i].getVisitCount()) + "\t" + global->teacherArray[i].getEmail() << endl;
			}
		}
		else if (c == 'h') {
			break;
		}
		else
		{
			cout << "Wroing Input";
		}

	}

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
