#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;


class Book
{


private:
	string author;
	int dateOfPublish;
	string title;
	char showMenu();
	string publisher;
public:
	Book(string authorName, string tOfBook,int publishDate,string publishers);
	string getAuName();
	string getBookTitle();
	int getPublishDate();
	string getPublisher();


};
#endif