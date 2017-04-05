#ifndef ADMIN_H
#define ADMIN_H

#include <string>
#include <vector>
#include <iostream>

#include "Person.h"
#include "Student.h"

class Admin : public Person, public Student
{
public:
	void IssueBooks();

	void SetPenalty();

	void GiveDiscount();

};
#endif
