#ifndef ADMIN_H
#define ADMIN_H
#include "Person.h"

class Admin : public Person
{
private:
	char showMenu();
public:
	Admin(string uName, string password);
	string getUName();
	string getPassword();
};
#endif
