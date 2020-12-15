#pragma once
#include "data.h"

class Sum
{
	int a;
	int b;
	int sum;
public:
	Sum() { a = 0; b = 0; sum = a + b; };
	Sum(int _a, int _b) { a = _a; b = _b; sum = a + b; };
	inline int get() { return sum; };

	bool operator == (Sum _obj);
	bool operator < (Sum _obj);
	bool operator > (Sum _obj);
};

