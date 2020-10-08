#pragma once
#include <iostream>

using namespace std;

class Signal
{
	int year;
	string name;
	int height;
	int freq;
public:
	//Кострукторы
	Signal();
	Signal(int _year, string _name, int _height, int _freq);
	//Геттеры
	int getYear() { return year; }
	string getName() { return name; }
	int getHeight() { return height; }
	int getFreq() { return freq; }
	//Сеттеры
	void setYear(int _year) { year = _year; }
	void setName(string _name) { name = _name; }
	void setHeight(int _height) { height = _height; }
	void setFreq(int _freq) { freq = _freq; }
	//Перегрузки матем. операторов
	Signal operator = (const Signal& obj);
	friend bool operator == (const Signal& obj1, const Signal& obj2);
	friend Signal operator + (Signal& obj1, const Signal& obj2);
	//перегрузки операторов ввода и вывода
	friend ostream& operator<<(ostream& S, Signal& obj);
	friend istream& operator>>(istream& S, Signal& obj);
	//перегрузка оператора сравнения (ДЛЯ СОРТИРОВКИ)
};

