#include "Book.h"
#include "Global.h"

char Book::showMenu()
{
	return 0;
}

Book::Book(string authorName, string tOfBook,string publishers, int iden, double pri)
{
	author = authorName;
	title = tOfBook;
	publisher = publishers;
	identifier = iden;
	price = pri;
}

string Book::getAuName()
{
	return author;
}

string Book::getBookTitle()
{
	return title;

}

string Book::getPublisher()
{
	return publisher;
}

void Book::update()
{
	system("cls");
	cout << "Update Book" << endl;
	cout << "a.Update Author" << endl;
	cout << "b.Update Title" << endl;
	cout << "c.Update Publisher" << endl;
	cout << "d.Return" << endl;
	char c;
	for (;;) {
		cin >> c;
		if (c == 'a')
		{
			cout << "Enter updated Author" << endl;
			string uAuthor;
			cin >> uAuthor;
			author = uAuthor;
			cout << "Author Has Been Updated " << endl;
		}
		else if (c == 'b')
		{
			cout << "Enter updated Title" << endl;
			string uTitile;
			cin >> uTitile;
			title= uTitile;
			cout << "Title Has Been Updated " << endl;
		}
		else if (c == 'c')
		{
			cout << "Enter updated Publisher" << endl;
			string uPublisher;
			cin >> uPublisher;
			publisher = uPublisher;
			cout << "Publisher Has Been Updated " << endl;
		}
		else if (c = 'd') {
			break;

		}
		else {
			cout << "Wrong Input Please Try Again." << endl;
		}
	}
}

double Book::getPrice()
{
	return price;
}

int Book::getID()
{
	return identifier;
}
