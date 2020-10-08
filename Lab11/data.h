#pragma once
#include <iostream>
#include <iomanip>
#include <Windows.h>

#define N 3
using namespace std;

class List
{
public:
	List();
	~List();
	void set(unsigned int y, char* n, unsigned int d, unsigned int f);
	void get(unsigned int& y, char*& n, unsigned int& d, unsigned int& f);
	void show();
private:
	unsigned int Year;
	char* Name;
	unsigned int Diam;
	unsigned int Freq;
};
