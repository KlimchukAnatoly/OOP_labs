#pragma once

#include "data.h"

template<typename T>
class Myclass
{
	T val;
public:
	Myclass();
	Myclass(T _value);

	inline T Get() { return val; };

	void show();
	Myclass<T> operator + (Myclass _obj);
};