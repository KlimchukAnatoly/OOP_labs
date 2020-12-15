#pragma once
#include "data.h"
class RandomReader
{
	string* str;
public:
	RandomReader();
	unsigned int& operator [] (unsigned int& _num);
	friend std::ostream& operator<< (std::ostream& out, const RandomReader& r);
};