#include "Classes.h"

void Figure::set(int _a, int _b)
{
	a = _a;
	b = _b;
}

void P1::show()
{
	cout << "Площадь треугольника: " << a * b / 2 << endl;
}

void P2::show()
{
	cout << "Площадь прямоугольника: " << a * b << endl;
}

void P3::show()
{
	cout << "Площадь круга: " << (a * a) << "Pi" <<  endl;
}