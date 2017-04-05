#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include <iostream>

#include "Person.h"

class Student : public Person
{
public:
	void BuyBooks();

	void RentBooks();

	void ReturnBooks();

};
#endif
