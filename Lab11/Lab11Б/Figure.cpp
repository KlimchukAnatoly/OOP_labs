#include "data.h"

Figure::Figure(double rad, double a, double b, double c) {
	this->rad = rad;
	this->a = a;
	this->b = b;
	this->c = c;
}

double Figure::CircleArea() {
	return (PI * (rad * rad));
}

double Figure::TriangleArea() {
	double p=(a+b+c)/2;//Полупериметр
	return sqrt(p*(p-a)*(p-b)*(p-c));
}