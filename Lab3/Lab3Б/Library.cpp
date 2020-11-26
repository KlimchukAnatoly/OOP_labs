#include "Library.h"

Library::Library() : Book()
{
	index = rand() % 100;
	IsAvaliable = rand() % 2;
}

void Library::show()
{
	Book::show();
	cout << "����� ������: " << index;
	if (IsAvaliable) cout << ", ����� � �������\n";
	else cout << ", ����� �� �����\n";
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
