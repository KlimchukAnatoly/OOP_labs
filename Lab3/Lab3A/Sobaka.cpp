#include "Sobaka.h"

Sobaka::Sobaka()
{
	cout << "����������� ������ Sobaka" << endl;
}

Sobaka::~Sobaka()
{
	cout << "���������� ������ Sobaka" << endl;
}

void Sobaka::init()
{
	cout << "������� ��� � ������� ������:" << endl;
	cin >> weight >> age;
}

void Sobaka::show()
{
	cout << "���: " << weight <<'\t'<< "�������: " << age << endl;
}