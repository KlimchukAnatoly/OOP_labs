#pragma once
#include "Train.h"
#include <iostream>

#define N 5

using namespace std;

void const showtrains(Train* list);
void sortByNum(Train* list);
void sortByPlace(Train* list);
void sortByTimeInRange(Train* list, int start, int end);
void searshbynum(Train* list);