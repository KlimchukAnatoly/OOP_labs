#pragma once
#include "data.h"
class Mystring
{
	string text;
public:
	Mystring(string _text = "NaN") { text = _text; };
	friend ofstream& operator << (ofstream& s, Mystring obj);
	void show();
};