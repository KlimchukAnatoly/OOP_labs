#pragma once
#include <iostream>
#include <time.h>

using namespace std;

class Time
{
	int hours;
	int minutes;
	int seconds;

	void fixtime();
public:
	Time();

	int getHours();
	int getMinutes();
	int getSeconds();
	
	void setHours(int quan);
	void setMinutes(int quan);
	void setSeconds(int quan);

	void addHours(int quan);
	void addMinutes(int quan);
	void addSeconds(int quan);
	
	void showHours();
	void showMinutes();
	void showSeconds();

	void show();
	void difference(Time obj);
	bool compare(Time obj);
	int arrowAngle();
};

