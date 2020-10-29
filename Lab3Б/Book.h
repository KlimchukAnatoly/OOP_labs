#pragma once
#include <iostream>
#include <time.h>

using namespace std;

class Book
{
	string name;
	string autor;
	unsigned int pages;
public:
	Book();
	virtual void show();
	string GetName();
	string GetAutor();
	unsigned int GetPages();
};

