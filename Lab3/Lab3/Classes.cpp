#include "Classes.h"

B1::B1(int _a)
{
	a = _a;
}

int B1::GetA()
{
	return a;
}

void B1::show()
{
	cout << a << endl;
}

B2::B2(int _b)
{
	b = _b;
}

int B2::GetB()
{
	return b;
}

void B2::show()
{
	cout << b;
}


B3::B3(int _c)
{
	c = _c;
}

int B3::GetC()
{
	return c;
}

void B3::show()
{
	cout << c << endl;
}

D1::D1(int _a, int _b, int _c, int _d) : B1(_a), B2(_b), B3(_c)
{
	d = _d;
}

int D1::GetD()
{
	return d;
}

void D1::show()
{
	cout << GetA() << '\t' << GetB() << '\t' << GetC() << '\t' << d << endl;
}

D2::D2(int _a, int _b, int _c, int _d, int _e) : D1(_a, _b, _c, _d)
{
	e = _e;
}

int D2::GetE()
{
	return e;
}

void D2::show()
{
	//все методы и пол€ ¬3 дл€ D2 недоступны, т. к. они private у D1.
	D1::show();
	cout << e << endl;
}