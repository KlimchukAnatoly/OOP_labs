#pragma once
#include "Book.h"
#include "Library.h"
#include <windows.h>

#define N 3

void IsInLibrary(Library* _lib, string _name) {
	cout << "����� ����� � ��������� " << _name << endl;
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		if (_lib[i].GetName() == _name) {
			if (_lib[i].IsBookAvaliable()) cout << "����� � �������";
			else cout << "����� �� �����";
			cout << ", " << ++i <<" � ������"<< endl;
			count++;
		}
	}
	if (count == 0)cout << "����� � ����� ��������� ���" << endl;
}