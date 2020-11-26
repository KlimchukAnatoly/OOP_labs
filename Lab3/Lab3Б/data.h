#pragma once
#include "Book.h"
#include "Library.h"
#include <windows.h>

#define N 3

void IsInLibrary(Library* _lib, string _name) {
	cout << "Поиск книги с названием " << _name << endl;
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		if (_lib[i].GetName() == _name) {
			if (_lib[i].IsBookAvaliable()) cout << "Книга в наличии";
			else cout << "Книга на руках";
			cout << ", " << ++i <<" в списке"<< endl;
			count++;
		}
	}
	if (count == 0)cout << "Книги с таким названием нет" << endl;
}