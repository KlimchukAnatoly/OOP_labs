#pragma once
#include <iostream>

using namespace std;

class Sobaka
{
protected:
	int weight, age;
public:
	Sobaka();
	~Sobaka();
	virtual void init();
	virtual void show();
};

