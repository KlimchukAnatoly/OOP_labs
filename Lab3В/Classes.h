#pragma once

#include <iostream>

using namespace std;

class X {
protected:
	int x;
public:
	X() { x = rand()%100; }
	virtual int get() { return x; }
};

class P7 : public X {
protected:
	int rem;
public:
	P7() { rem = x % 7; }
	virtual int get() override { return rem; }
};

class P5 : public P7 {
protected:
	int rem;
public:
	P5() { rem = x % 5; }
	int get() override { return rem; }
};