#include "Classes.h"

void Figure::set(int _a, int _b)
{
	a = _a;
	b = _b;
}

void P1::show()
{
	cout << "������� ������������: " << a * b / 2 << endl;
}

void P2::show()
{
	cout << "������� ��������������: " << a * b << endl;
}

void P3::show()
{
	cout << "������� �����: " << (a * a) << "Pi" <<  endl;
}