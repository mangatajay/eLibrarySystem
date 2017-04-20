#include <string>
#include <vector>
#include <iostream>

#ifndef PERSON_H
#define PERSON_H

using namespace std;
class Person
{	
public:
	virtual void showMenu() = 0;

protected:
	string firstName;
	string lastName;
	string eMail;
	string password;
	string userName;
	int lastLogin;
	int visitCount;
	int ID;
	int numberOfPurchase;
	Person(string fName, string lName, int lLogin, int vCount, string email, int id);
	Person(string uName, string pass);
private:
	string createPassword();
	

	/*virtual void BuyBooks() ;
    virtual	void RentBooks() ;
	virtual void ReturnBooks() ;
	virtual void inputData(void) ;
	virtual void Menu();
	virtual void outputData(void) ;
	virtual void IssueBooks();*/
	/*virtual void SetPenalty();
	virtual void GiveDiscount();*/
};
#endif
