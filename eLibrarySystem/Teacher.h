#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"


class Teacher : public Person
{
private:
	int discount;
public:
	Teacher(string fName, string lName, string uName, string password, int lLogin, int vCount, string email, int id, int discount);
	void showMenu();
	int getDiscount();
	void updatePassword(string pass);
};
#endif
