#pragma once
#include "data.h"

class Matrix
{
	int** matrix;
public:
	Matrix();
	void randomize();
	void show();
	void searchmin();
	int getElement(int x, int y);
	void setElement(int x, int y, int cur);
	void getSubMatrix(int startx, int starty, int lenx, int leny);
};

