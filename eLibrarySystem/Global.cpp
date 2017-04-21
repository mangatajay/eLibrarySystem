#include "Global.h"

#include <iterator>
#include <fstream>

#include <sstream>
#include <iterator>
#include <set>
#include <fstream>
#include "Book.h"
#include <vector>
#include "Global.h"
#include <time.h>

using namespace std;

bool Global::instanceFlag = false;
Global* Global::single = NULL;

template<typename Out>
void Split(const string &s, char delim, Out result) {
	stringstream ss;
	ss.str(s);
	string item;
	while (std::getline(ss, item, delim)) {
		*(result++) = item;
	}
}

vector<string> Global::split(const string &s, char delim) {
	vector<string> elems;
	Split(s, delim, back_inserter(elems));
	return elems;
}

Global* Global::getInstance()
{
	if (!instanceFlag)
	{
		single = new Global();
		instanceFlag = true;
		return single;
	}
	else
	{
		return single;
	}
}

Global::Global() {

}

void Global::getStudent() {
	string file = "Student";

	ifstream in(file.c_str());
	string e;
	while (in.good())
	{
		in >> e;
		vector<string> splitString = split(e, ':');
		string::size_type sz;
		if (splitString.size() > 0)
		{
			Student newStudent = Student(splitString[0], splitString[1], splitString[2], splitString[3], stoi(splitString[4], &sz), stoi(splitString[5], &sz), splitString[6], stoi(splitString[7], &sz), 0);
			studentArray.push_back(newStudent);
		}
	}

	in.close();
}

void Global::getBook() {
	string file = "Book";

	ifstream in(file.c_str());
	string temp;
	while (in.good())
	{
		in >> temp;
		vector<string> splitString = split(temp, ':');
		string::size_type sz;
		if (splitString.size() > 0)
		{
			Book newBook = Book(splitString[0], splitString[1], splitString[2], stoi(splitString[3]), stod(splitString[4]));

			booksArray.push_back(newBook);
		}

	}

	in.close();
}

void Global::getAdmin() {
	string file = "Admin";

	ifstream in(file.c_str());
	string e;
	in >> e;
	vector<string> splittedString = split(e, ':');

	in.close();
	admin = new Admin(splittedString[0], splittedString[1]);
}

void Global::getTeacher() {
	string file = "Teacher";

	ifstream in(file.c_str());
	string e;

	while (in.good())
	{
		in >> e;
		vector<string> splitString = split(e, ':');
		string::size_type sz;
		if (splitString.size() > 0)
		{
			Teacher newTeacher = Teacher(splitString[0], splitString[1], splitString[2], splitString[3], stoi(splitString[4], &sz), stoi(splitString[5], &sz), splitString[6], stoi(splitString[7], &sz), 10);

			teacherArray.push_back(newTeacher);
		}

	}

	in.close();
}

int Global::randomInt() {
	srand(time(NULL));
	int y = rand() % 10;;
	for (int i = 1; i < 6; ++i) {
		int x = rand() % 10;
		switch (i)
		{
		case 1:
			x = x * 10;
			break;
		case 2:
			x = x * 100;
			break;
		case 3:
			x = x * 1000;
			break;
		case 4:
			x = x * 10000;
			break;
		case 5:
			x = x * 100000;
			break;
		default:
			break;
		}

		y += x;
	}


	return y;
}

void Global::saveTeacher() {
	string fileStringTeacher = "";
	for (int i = 0; i < teacherArray.size(); i++)
	{
		if (i == teacherArray.size() - 1)
		{
			fileStringTeacher += teacherArray[i].getFirstName() + ":" + teacherArray[i].getLastName() + ":" + teacherArray[i].getUserName() + ":" + teacherArray[i].getPassword() + ":" + to_string(teacherArray[i].getLastLogin()) + ":" + to_string(teacherArray[i].getVisitCount()) + ":" + teacherArray[i].getEmail() + ":" + to_string(teacherArray[i].getID());
		}
		else
		{
			fileStringTeacher += teacherArray[i].getFirstName() + ":" + teacherArray[i].getLastName() + ":" + teacherArray[i].getUserName() + ":" + teacherArray[i].getPassword() + ":" + to_string(teacherArray[i].getLastLogin()) + ":" + to_string(teacherArray[i].getVisitCount()) + ":" + teacherArray[i].getEmail() + ":" + to_string(teacherArray[i].getID()) + "\n";
		}

	}

	string fileTeacher = "Teacher";
	ofstream out(fileTeacher.c_str());
	out << fileStringTeacher;
}

void Global::saveStudent() {

	string fileStringStudent = "";
	for (int i = 0; i < studentArray.size(); i++)
	{
		if (i == booksArray.size() - 1)
		{
			fileStringStudent += studentArray[i].getFirstName() + ":" + studentArray[i].getLastName() + ":" + studentArray[i].getUserName() + ":" + studentArray[i].getPassword() + ":" + to_string(studentArray[i].getLastLogin()) + ":" + to_string(studentArray[i].getVisitCount()) + ":" + studentArray[i].getEmail() + ":" + to_string(studentArray[i].getID());
		}
		else
		{
			fileStringStudent += studentArray[i].getFirstName() + ":" + studentArray[i].getLastName() + ":" + studentArray[i].getUserName() + ":" + studentArray[i].getPassword() + ":" + to_string(studentArray[i].getLastLogin()) + ":" + to_string(studentArray[i].getVisitCount()) + ":" + studentArray[i].getEmail() + ":" + to_string(studentArray[i].getID()) + "\n";
		}

	}

	string fileStudent = "Student";
	ofstream out(fileStudent.c_str());
	out << fileStringStudent;
}

void Global::saveBook() {
	string fileStringbook;
	for (int i = 0; i < booksArray.size(); i++)
	{
		if (i == booksArray.size() - 1)
		{
			fileStringbook += booksArray[i].getAuName() + ":" + booksArray[i].getBookTitle() + ":" + booksArray[i].getPublisher() + ":" + to_string(booksArray[i].getID()) + ":" + to_string(booksArray[i].getPrice());
		}
		else
		{
			fileStringbook += booksArray[i].getAuName() + ":" + booksArray[i].getBookTitle() + ":" + booksArray[i].getPublisher() + ":" + to_string(booksArray[i].getID()) + ":" + to_string(booksArray[i].getPrice()) + "\n";
		}

	}

	string fileBook = "Book";
	ofstream out(fileBook.c_str());
	out << fileStringbook;

}

void Global::saveAllValues()
{
	saveBook();
	saveTeacher();
	saveStudent();
}


