#include "Signal.h"

Signal::Signal()
{
	year = 0;
	name = "NaN";
	height = 0;
	freq = 0;
}

Signal::Signal(int _year, string _name, int _height, int _freq)
{
	year = _year;
	name = _name;
	height = _height;
	freq = _freq;
}

Signal Signal::operator = (const Signal& obj)
{
	year = obj.year;
	name = obj.name;
	height = obj.height;
	freq = obj.freq;
	return *this;
}

int Signal::operator[](int i)
{
	return this->name.length();
}

void Signal::operator()()
{
	cin>>year>>name>>height>>freq;
}