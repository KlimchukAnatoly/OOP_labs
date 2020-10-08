#pragma once
#include <iostream>
#include <time.h>

using namespace std;

class Train
{
public:
	string  Getnumber() { return number; }
	string  Getplace() { return place; }
	string  Gettime () { return time; }

	Train();
	Train operator = (const Train& obj);
private:
	string place;
	string number;
	string time;
};

