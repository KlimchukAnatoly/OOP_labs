#include "Matrix.h"

Matrix::Matrix()
{
	matrix = new int* [K];
	for (int i = 0; i < K; i++)
	{
		matrix[i] = new int[K];
		for (int j = 0; j < K; j++)
		{
			matrix[i][j] = 0;
		}
	}
}

void Matrix::randomize()
{
	for (int i = 0; i < K; i++)
	{
		for (int j = 0; j < K; j++)
		{
			matrix[i][j] = rand() % 50;
		}
	}
}

void Matrix::show()
{
	printf("\n");
	for (int i = 0; i <K; i++)
	{
		for (int j = 0; j < K; j++)
		{
			printf("%3d", matrix[i][j]);
		}
		printf("\n");
	}
}

void Matrix::searchmin()
{
	int p = INT_MAX;
	printf("Найменьшие элементы:\n");
	for (int i = 0; i < K; i++)
	{
		for (int j = 0; j < K; j++)
		{
			if (matrix[i][j] <= p) {
				p = matrix[i][j];
			}
		}
	}
	for (int i = K - 1; i >= 0; i--)
	{
		for (int j = 0; j < K; j++)
		{
			if (matrix[i][j] == p) printf("x = %d, y = %d, Значение = %d\n", j + 1, i + 1, matrix[i][j]);
		}
	}
}

int Matrix::getElement(int x, int y) {
	return matrix[--y][--x];
}

void Matrix::setElement(int x, int y, int cur) {
	matrix[--y][--x] = cur;
}

void Matrix::getSubMatrix(int startx, int starty, int width, int height)
{
	startx--;
	starty--;
	if ((startx < 0 || starty < 0 || width < 0 || height < 0) || (width + startx > K || starty + height > K)) {
		printf("Невозможные данные!");
	}
	else {
		printf("\n");
		for (int i = starty; i < starty + height; i++)
		{
			for (int j = startx; j < startx + width; j++)
			{
				printf("%3d", matrix[i][j]);
			}
			printf("\n");
		}
	}
}