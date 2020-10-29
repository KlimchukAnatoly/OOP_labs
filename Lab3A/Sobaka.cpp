#include "Sobaka.h"

Sobaka::Sobaka()
{
	cout << "Конструктор класса Sobaka" << endl;
}

Sobaka::~Sobaka()
{
	cout << "Деструктор класса Sobaka" << endl;
}

void Sobaka::init()
{
	cout << "Введите вес и возраст собаки:" << endl;
	cin >> weight >> age;
}

void Sobaka::show()
{
	cout << "Вес: " << weight <<'\t'<< "Возраст: " << age << endl;
}