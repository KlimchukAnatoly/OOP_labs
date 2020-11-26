#pragma once
#include <iostream>

using namespace std;

class B1 {
	int a;
public: 
	B1(int _a);
	int GetA();
	virtual void show();
};

class B2 {
	int b;
public: 
	B2(int _b);
	int GetB();
	virtual void show();
};

class B3 {
	int c;
public: 
	B3(int _c);
	int GetC();
	virtual void show();
};

class D1 : public B1, public B2, private B3
{
	int d;
public:
	D1 (int _a, int _b, int _c, int _d);
	int GetD();
	void show() override;
};

class D2 : public D1
{
	int e;
public:
	D2(int _a, int _b, int _c, int _d, int _e);
	int GetE();
	void show() override;
};