#include "data.h"

Sum::Sum()
{
	x = 0;
	y = 0;
	s = 0;
}

Sum::Sum(int x, int y)
{
	this->x = x;
	this->y = y;
	s = 0;
}

void Sum::init()
{
	printf("Enter X and Y\n");
	scanf("%d %d", &x, &y);
}

void Sum::show()
{
	printf("x:\t%d\ny:\t%d\nsum:\t%d\n", x, y, s);
}

void Sum::sum()
{
	s = x + y;
	printf("SUM: %d\n", s);
}

