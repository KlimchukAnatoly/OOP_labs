#pragma once
#include"data.h"

class Student //������� (���, ���������, ������, ������� ���� ������������) 
{
public:
	string fullname;//���
	string fakultet;//���������
	string group;//������
	int grade;//������� ���� ������������
	Student();//����������
	void change(string& _fullname, string& _fakultet, string& _group, int& _grade);//�������������
	friend ostream& operator << (ostream& _S, Student& _obj);//�������� ������
};