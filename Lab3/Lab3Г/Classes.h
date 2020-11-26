#pragma once

#include <iostream>

using namespace std;
//Базовый абстрактный класс
class Figure {
public:
	int a = 0;
	int b = 0;
	virtual void show() = 0;
	virtual void set(int _a, int _b = 1);
};
//Треугольник
class P1 : public Figure {
public:
	void show() override;
};
//Прямоугольник
class P2 : public Figure {
public:
	void show() override;
};
//Круг
class P3 : public Figure {
public:
	void show() override;
};