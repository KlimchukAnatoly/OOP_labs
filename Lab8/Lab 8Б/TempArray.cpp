#include "TempArray.h"

template<typename T>
inline TempArray<T>::TempArray()
{
	size = 100;
	ind = 10;
	mas = new T[size];
	for (int i = 0; i < size; i++)
	{
		mas[i] = (T)0;
	}
}

template<typename T>
TempArray<T>::~TempArray()
{
	delete[] mas;
}

template<typename T>
void TempArray<T>::initOne(unsigned int _index, T _val)
{
	try
	{
		if (_index<0 || _index>size)throw 0;
		mas[_index] = _val;
	}
	catch (const exception& _ex)
	{
		cout << "Ошибка - Неверный индекс" << endl;
	}
}

template<typename T>
T TempArray<T>::sum()
{
	int n = 0;
	T temp = mas[n];
	for (int i = 1; i < ind; i++)
	{
		temp += mas[i];
	}
	return temp;
}

template<typename T>
T TempArray<T>::average()
{
	int n = 0;
	T temp = mas[n];
	for (int i = 1; i < ind; i++)
	{
		temp += mas[i];
	}
	return (temp / ind);
}

template<typename T>
void TempArray<T>::show()
{
	for (int i = 0; i < ind; i++)
	{
		for (int j = 0; j < 10, i < ind; j++, i++)
		{
			cout << mas[i] << ' ';
		}
		cout << endl;
	}
}

template<typename T>
T TempArray<T>::operator[](unsigned int i)
{
	try
	{
		if (i < 0 || i > ind) throw 0;
		T temp = mas[0];
		for (int i = 0; i < ind; i++)
		{
			if (mas[i] > temp) { temp = mas[i]; }
		}
		return temp;
	}
	catch (const std::exception&)
	{
		return T(0);
	}
}

