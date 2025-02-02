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

bool Signal::operator==(const Signal& obj)
{
	if (year == obj.year && name == obj.name
		&&height == obj.height && freq == obj.freq) return true;
	else return false;
}

Signal Signal::operator+(const Signal& obj)
{
	year += obj.year;
	name = name + obj.name;
	height += obj.height;
	freq += obj.freq;
	return *this;
}