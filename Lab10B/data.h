#pragma once

#include<iostream>

class Sum
{
public:
	Sum();//Конструктор по умолчанию
	Sum(int x, int y);//Конструктор с параметрами

	void init();
	void show();
	void sum();

private:
	int x;//Первая переменная
	int y;//Вторая переменная
	int s;//Сумма
};
