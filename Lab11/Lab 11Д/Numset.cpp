#include "Numset.h"

Numset::Numset()
{
	mas = new int[10];
	for (int i = 0; i < 10; i++)
	{
		mas[i] = rand() % 41 - 20;
		if (isInSet(mas[i], i)) i--;
	}
	length = 10;
}

Numset::Numset(int len, int start, int end)
{
	mas = new int[len];
	for (int i = 0; i < len; i++)
	{
		mas[i] = (rand() % ((end - start) + 1)) + start;
		if (isInSet(mas[i], i)) i--;
	}
	length = len;
}

Numset::Numset(Numset obj, int lim)
{
	int newlen = 0;
	for (int i = 0; i < obj.getLength(); i++)
	{
		if (obj.getElement(i) <= lim) newlen++;
	}
	mas = new int[newlen];
	length = newlen;
	// !!! newlen теперь используется как счетчик для заполнения элементов массива нового обьекта
	newlen = 0;
	for (int i = 0; i < obj.getLength(); i++)
	{
		if (obj.getElement(i) <= lim) {
			mas[newlen] = obj.getElement(i);
			newlen++;
		}
	}
}

int Numset::getmax()
{
	int temp = mas[0];
	for (int i = 0; i < length; i++)
	{
		if (temp < mas[i]) temp = mas[i];
	}
	return temp;
}

bool Numset::isInSet(int num, int end)
{
	if (end == -1) end = this->length;
	for (int i = 0; i < end; i++)
	{
		if (mas[i] == num) return true;
	}
	return false;
}

void Numset::show()
{
	for (int i = 0; i < length; i++)
	{
		printf("%-4d", mas[i]);
	}
	printf("\n");
}
