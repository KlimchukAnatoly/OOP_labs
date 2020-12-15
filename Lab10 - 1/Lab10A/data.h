#pragma once
#include <iostream>
using  namespace std;

class Area {
public:
	double area(double a, double b = -1) {
		if(b==-1) return a * a;
		else return a * b;
	}
};

