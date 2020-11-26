#pragma once
#include "People.h"
#define K 6

class VUZ
{
protected:
public:
	Persona** Shtat;
	VUZ();
	Persona* GetPerson(int _i);
	void printPrepodsUnder50();
	void printDolzhniki();
	void printall();
	~VUZ();
};

