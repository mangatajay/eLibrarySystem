#include <string>
#include <vector>
#include <iostream>
#include "Global.h"
#include "Teacher.h"
#include "iomanip"



//void Teacher::Menu()
//{
//	cout << "HERE WE PRESENTS THE MENU FOR YOU" << endl;
//	cout << "\n" << endl;
//	cout << "1.See your Previous History" << endl;
//	cout << "2. Make A Purchase" << endl;
//	cout << "3.Rent anything" << endl;
//	cout << "4.Return A Book " << endl;
//	cout << "";
//}

Teacher::Teacher(string fName, string lName, string uName, string password, int lLogin, int vCount, string email, int id, int discount) : Person(fName, lName, uName, password, lLogin, vCount, email, id)
{
	this->discount = discount;
}

void Teacher::showMenu()
{
	for (;;)
	{
		Global *global;
		global = Global::getInstance();
		cout << "Press the following to proceed" << endl;
		cout << "a.Show Books" << endl;
		cout << "b.Issue a book " << endl;
		cout << "c.Update Password" << endl;
		cout << "d.Return" << endl;

		char c;
		cin >> c;
		if (c == 'a') {
			cout << "ID" << setw(10) << "Author" << setw(10) << "Title" << setw(10) << "Publiser" << setw(10) << "Price" << endl;
			for (int i = 0; i < global->booksArray.size(); i++)
			{
				cout << to_string(global->booksArray[i].getID()) + "" << setw(10) << "" + global->booksArray[i].getAuName() + "" << setw(10) << "" + global->booksArray[i].getBookTitle() + "" << setw(10) << "" + global->booksArray[i].getPublisher() + "" << setw(10) << "" + to_string(global->booksArray[i].getPrice()) << endl;
			}

		}else if (c == 'b') {

			cout << "Enter A book iD " << endl;
			int bID;
			cin >> bID;
			bool found = false;
			for (int i = 0; i < global->booksArray.size();i++)
			{
				if (global->booksArray[i].getID() == bID)
				{
					int cCard;
					cout << "Enter a Credit Card Number" << endl;
					cin >> cCard;
					if (to_string(cCard).at(0) == 4)
					{
						cout << "Purchase Succesfull \n Your credit car has been charged with" << float(global->booksArray[i].getPrice()*0.1) << endl << "Your download will start in a moment. " << endl;

					}
					else {
						cout << "Your Credit Card Number Must Start from 4 . Please Try Again With Valid Credi Card." << endl;
					}

				}
			}

			if (!found)
			{
				found = true;
				cout << "Wrong Inputs" << endl;
			}
		}
		else if (c == 'c') {
			cout << "Enter A New Password " << endl;
			string newPassword;
			cin >> newPassword;
			updatePassword(newPassword);
		}
		else if (c == 'd') {
			break;
		}
		else {
			cout << "Unknown Input" << endl;
		}
	}
}

int Teacher::getDiscount()
{
	return discount;
}

void Teacher::updatePassword(string pass)
{
	password = pass;
}
