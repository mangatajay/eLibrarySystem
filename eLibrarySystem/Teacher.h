#ifndef TEACHER_H
#define TEACHER_H

#include <string>
#include <vector>
#include <iostream>

#include "Person.h"
#include "Student.h"

class Teacher : public Person, public Student
{
public:
	int GetDiscount();

};
#endif
