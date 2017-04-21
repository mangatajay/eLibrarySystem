#ifndef STUDENT_H
#define STUDENT_H


#include "Person.h"

class Student : public Person
{
private:
	int discount;

public:
	Student(string fName, string lName, string uName, string password, int lLogin, int vCount, string email, int id, int discount);
	virtual void showMenu();
	int getDiscount();
	void updatePassword(string pass);
};
#endif
