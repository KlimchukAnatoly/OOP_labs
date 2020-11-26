#pragma once
#include "data.h"
class RandomReader
{
	string* s;
public:
	RandomReader();
	void operator [] (unsigned int& _num);
	friend std::ostream& operator<< (std::ostream& out, const RandomReader& point);
};