#include "data.h"
#include "Sum.h"
#include "func.h"

int main() {
	setlocale(LC_ALL, "ru");
	vector<Sum> v1 = {Sum(1,2),Sum(2,3),Sum(5,5)};
	vector<Sum> v2 = {Sum(5,6) ,Sum(1,1) ,Sum(1,9) ,Sum(100,100) };
	showvector(v1);
	showvector(v2);
	compareVector(v1, v2);
}