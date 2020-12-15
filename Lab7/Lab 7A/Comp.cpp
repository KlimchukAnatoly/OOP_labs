#include "Comp.h"

ostream& operator<<(ostream& os, const Comp& obj)
{
	os << obj.a <<" + "<< obj.b << " i";
	return os;
}

istream& operator>>(istream& is, Comp& obj)
{
	is >> obj.a >> obj.b;
	return is;
}
