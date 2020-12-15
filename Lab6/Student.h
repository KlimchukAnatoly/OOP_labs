#pragma once
#include"data.h"

class Student //Студент (ФИО, факультет, группа, средний балл успеваемости) 
{
public:
	string fullname;//ФИО
	string fakultet;//факультет
	string group;//группа
	int grade;//средний балл успеваемости
	Student();//констуктор
	void change(string& _fullname, string& _fakultet, string& _group, int& _grade);//инициализация
	friend ostream& operator << (ostream& _S, Student& _obj);//оператор вывода
};