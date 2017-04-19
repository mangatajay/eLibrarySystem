// eLibrarySystem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Admin.h"
#include <sstream>
#include <iterator>
#include <set>
#include <fstream>

using namespace std;

template<typename Out>
void split(const string &s, char delim, Out result) {
	stringstream ss;
	ss.str(s);
	string item;
	while (std::getline(ss, item, delim)) {
		*(result++) = item;
	}
}

void getAdmin();
char showInitialMenu();

vector<string> split(const string &s, char delim);

Admin *admin;

int main()
{
	getAdmin();

	char uInput = showInitialMenu();

	switch (uInput)
	{
	case 'c':
		break;
	default:
		break;
	}
	//string file = "test.txt";
	///*ofstream out(file.c_str());
	//string e = "gurjit";
	//out << e;*/

	////out.close();

	//ifstream in(file.c_str());
	//string e;
	//in >> e;
	//cout << e;


	//if you want to use read: 
	//in.read(reinterpret_cast<const char*>(&e),sizeof(e));

	/*string line = "hello world";
	char * data = new char[sizeof(line)];
	copy(line.begin(), line.end(), data);


	ofstream out("test.txt", ios::app);

	out.write(data, sizeof(data));


	
	ifstream in("test.txt");
	if (!in)
	{
		cout << "File not Found";
	}
	char b;
	while (in.read((char*)&b, sizeof(b)))
	{
		cout << b;

	}*/

	//char d, proceed;
	//Person *a;
	//do
	//{
	//	cout << "Press A if your are a student, B if you are an Teacher, C if you are a Admin" << endl;
	//	cin.get(d);
	//	cin.ignore();
	//	d = tolower(d);
	//	if (d == 'a')
	//	{
	//		/*a = new Student;
	//		a->inputData();*/
	//	}
	//	else if (d == 'b')
	//	{
	//		/*a = new Teacher;
	//		a->inputData();*/
	//	}
	//	else if (d == 'c')
	//	{
	//	/*a = new Admin;
	//	a->inputData();*/
	//	}
	//	else
	//	{
	//		cout << "Wrong Input" << endl;
	//	}
	//} while (d == 'a' && d == 'b' && d == 'c');
	//
	////a->outputData();
	//
	//cout << "The Menu For You to Proceed Is :" << endl;
	//
	//a->Menu();
}

void getAdmin() {
	string file = "Admin";

	ifstream in(file.c_str());
	string e;
	in >> e;
	vector<string> splittedString = split(e, ':');
	cout << e;

	in.close();

	admin = new Admin(splittedString[0], splittedString[1]);
}

vector<string> split(const string &s, char delim) {
	vector<string> elems;
	split(s, delim, back_inserter(elems));
	return elems;
}



char showInitialMenu() {
	cout << "\n Welcome To e-Library System \n";
	cout << "Press The Following to Proceed.\n";
	cout << "a.If you are a Student\n";
	cout << "b.If you are a Teachern";
	cout << "c.If you are a admin\n";
	char c;
	cin >> c;
	return c;
}

