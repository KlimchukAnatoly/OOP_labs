#include "Library.h"

Library::Library() : Book()
{
	index = rand() % 100;
	IsAvaliable = rand() % 2;
}

void Library::show()
{
	Book::show();
	cout << "Номер записи: " << index;
	if (IsAvaliable) cout << ", Книга в наличии\n";
	else cout << ", Книга на руках\n";
}

void Library::ChangeBook()
{
	IsAvaliable = !IsAvaliable;
}

int Library::GetIndex()
{
	return index;
}

bool Library::IsBookAvaliable()
{
	return IsAvaliable;
}
