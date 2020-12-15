#pragma once
#include "data.h"

template<typename T>
class TempArray
{
	T* mas;
	unsigned int size;
	unsigned int ind;
public:
	TempArray();
	~TempArray();

	void initOne(unsigned int _index, T _val);
	void show();

	T sum();
	T average();
	T operator [](unsigned int i);
};

