#pragma once
#include <iostream>
#include <time.h>

using namespace std;

class Numset
{
	int* mas;
	unsigned int length;
public:
	Numset();
	Numset(int len, int start, int end);
	Numset(Numset obj, int lim);

	int getmax();
	int getElement(int index) { return mas[index]; }
	void setElement(int index, int value) { mas[index] = value; }
	unsigned int getLength() { return length; }
	bool isInSet(int num, int end = -1);
	void show();
};

