#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;


class Book
{
private:
	string author;
	string title;
	int identifier;
	char showMenu();
	string publisher;
	double price;
public:
	Book(string authorName, string tOfBook,string publishers, int identifier, double pri);
	string getAuName();
	int getID();
	string getBookTitle();
	string getPublisher();
	void update();
	double getPrice();
};
#endif