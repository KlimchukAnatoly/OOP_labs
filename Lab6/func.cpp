#include "func.h"

void sortstudents(Student*& _list)
{
	string str;
	int n = 0;
	Student* temp = new Student;
	for (int i = 0; i < N; i++) {
		str = "€€€€€€€€€€€€€";
		for (int j = i; j < N; j++) {
			if (_list[j].fullname < str) {
				n = j;
				str = _list[j].fullname;
			}
		}
		if (n != i) {
			*temp = _list[i];
			_list[i] = _list[n];
			_list[n] = *temp;
		}
	}
}

void listinit(Student*& _list)
{
	string name, surname, patr, fakultet, group, fullname;
	int grade;
	ifstream fin(FILEPATH);
	for (int i = 0; i < N; i++)
	{
		if (!fin.eof())	fin >> name >> surname >> patr >> fakultet >> group>> grade;
		fullname = name + ' ' + surname + ' ' + patr;
		_list[i].change(fullname, fakultet, group, grade);
	}
	fin.close();
}

void showlist(Student*& _list)
{
		cout << "+=======================================================+\n"
			<< "|            ‘»ќ          ‘акультет √руппа —редний балл |\n"
			<<"+=======================================================+"<< endl;
	for (int i = 0; i < N; i++)
	{
		cout << _list[i];
	}
}