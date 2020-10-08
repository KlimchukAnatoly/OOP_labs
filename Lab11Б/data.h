#pragma once
#include <iostream>
#define PI 3.14159

using namespace std;

class Figure {
private:
	double rad, a, b, c; //Радиус круга и стороны треугольника
public:
	Figure(double rad = 2, double a = 3, double b = 4, double c = 5); //Конструктор с аргументами по умлочанию
	double CircleArea(); //Площадь круга
	double TriangleArea(); //Площадь треугольника
};