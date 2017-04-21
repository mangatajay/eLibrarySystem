#pragma once
#include "Book.h"
#include "Student.h"
#include "Teacher.h"
#include "Admin.h"
#include <iostream>

class Global
{
private:

	static bool instanceFlag;
	static Global *single;
	Global();

public:
	vector<Book> booksArray;
	vector<Student> studentArray;
	vector<Teacher> teacherArray;
	Admin *admin;
	static Global* getInstance();

	void getStudent();
	void getBook();
	void getAdmin();
	void getTeacher();
	void saveBook();
	void saveAllValues();
	int randomInt();

	void saveTeacher();
	void saveStudent();

	vector<string> split(const string &s, char delim);
};

