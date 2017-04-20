#include "Book.h"

char Book::showMenu()
{
	return 0;
}

Book::Book(string authorName, string tOfBook, int publishDate,string publishers)
{
	author = authorName;
	title = tOfBook;
	dateOfPublish = publishDate;
	publisher = publishers;
}
string Book::getAuName()
{
	return author;

}

string Book::getBookTitle()
{
	return title;

}

int Book::getPublishDate()
{
	return dateOfPublish;

}

string Book::getPublisher()
{
	return publisher;
}
