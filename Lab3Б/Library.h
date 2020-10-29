#pragma once
#include "Book.h"
class Library: public Book
{
	int index;
	bool IsAvaliable;
public: 
	Library();
	void show() override;
	void ChangeBook();
	int GetIndex();
	bool IsBookAvaliable();
};

