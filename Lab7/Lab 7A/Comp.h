#pragma once
#include "data.h"

class Comp
{
	float a;
	float b;
public:
	friend	ostream& operator << (ostream& os, const Comp& obj);
	friend	istream& operator >> (istream& os, Comp& obj);
};

