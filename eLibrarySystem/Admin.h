#ifndef ADMIN_H
#define ADMIN_H

#include "Person.h"

class Admin : public Person
{
public:
	void Menu();
	void IssueBooks();

	void SetPenalty();

	void GiveDiscount();

};
#endif
