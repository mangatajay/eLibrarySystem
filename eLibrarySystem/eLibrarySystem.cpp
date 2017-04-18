// eLibrarySystem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Admin.h"
#include <fstream>

using namespace std;
int main()
{
	char d, proceed;
	Person *a;
	do
	{
		cout << "Press A if your are a student, B if you are an Teacher, C if you are a Admin" << endl;
		cin.get(d);
		cin.ignore();
		d = tolower(d);
		if (d == 'a')
		{
			a = new Student;
			a->inputData();
		}
		else if (d == 'b')
		{
			a = new Teacher;
			a->inputData();
		}
		else if (d == 'c')
		{
			a = new Admin;
			a->inputData();
		}
		else
		{
			cout << "Wrong Input" << endl;
		}
	} while (d == 'a' && d == 'b' && d == 'c');
	
	a->outputData();
	
	cout << "The Menu For You to Proceed Is :" << endl;
	
	a->Menu();
}

