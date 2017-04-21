#ifndef ADMIN_H
#define ADMIN_H
#include "Person.h"

class Admin : public Person
{
private:
	
public:
	Admin(string uName, string password);
	string getUName();
	string getPassword();
	void showMenu();

};
#endif
