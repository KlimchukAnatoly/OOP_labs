#include "Spaniel.h"

Spaniel::Spaniel()
{
	cout << "����������� ������ Spaniel" << endl;
}

Spaniel::~Spaniel()
{
	cout << "���������� ������ Spaniel" << endl;
}

void Spaniel::init()
{
	cout << "������� ���, ������� � ���� ��������:" << endl;
	cin>> weight>> age>>color;
}

void Spaniel::show()
{
	cout << "���: " << weight << '\t' << "�������: " << age <<'\t' << "����: " << color << endl;
}

void Spaniel::golos()
{
	if (weight <= 10)cout << "���" << endl;
	else cout << "���" << endl;
}