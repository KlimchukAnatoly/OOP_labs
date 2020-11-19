#pragma once
#include <iostream>
#include "Signal.h"
#include <windows.h>
#include <fstream>

#define FILEPATH "text.txt"

using namespace std;

void getFromFile(Signal*& _sig, int& _len);
void sortsignals(Signal*& _sig, int& _len);
void showlist(Signal*& _sig, int& _len);
void add_rec(Signal*& _sig, int& _len);
void del_rec(Signal*& _sig, int& _len);