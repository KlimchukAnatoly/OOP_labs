#pragma once
#include "Sobaka.h"

using namespace std;

class Spaniel : private Sobaka
{
	string color;
public:
	Spaniel();
	~Spaniel();
	void init() override;
	void show() override;
	void golos();
};

