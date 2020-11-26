#pragma once
#include <iostream>
#include <time.h>
#include "Numset.h"
using namespace std;

Numset grouping(Numset& obj1, Numset& obj2);
Numset intersection(Numset& obj1, Numset& obj2);
Numset difference(Numset& obj1, Numset& obj2);
Numset disjunc(Numset& obj1, Numset& obj2);