#include "Spaniel.h"

Spaniel::Spaniel()
{
	cout << "Конструктор класса Spaniel" << endl;
}

Spaniel::~Spaniel()
{
	cout << "Деструктор класса Spaniel" << endl;
}

void Spaniel::init()
{
	cout << "Введите вес, возраст и цвет спаниеля:" << endl;
	cin>> weight>> age>>color;
}

void Spaniel::show()
{
	cout << "Вес: " << weight << '\t' << "Возраст: " << age <<'\t' << "Цвет: " << color << endl;
}

void Spaniel::golos()
{
	if (weight <= 10)cout << "гав" << endl;
	else cout << "ГАВ" << endl;
}