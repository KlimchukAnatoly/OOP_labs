#include "Book.h"

Book::Book()
{
	cout << "Введите Автора, Название и кол-во страниц:" << endl;
	cin >> autor >> name >> pages;
}

void Book::show()
{
	cout << autor << "\t" << name << "\t" << pages << endl;
}

string Book::GetName()
{
	return name;
}

string Book::GetAutor()
{
	return autor;
}

unsigned int Book::GetPages()
{
	return pages;
}
