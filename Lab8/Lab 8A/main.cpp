#include "data.h"
#include "Myclass.cpp"

int main() {
	setlocale(LC_ALL, "ru");
	Myclass<int> I1;
	Myclass<int> I2(2);
	Myclass<char> C('A');
	Myclass<float> F;
	I1.show();
	I2.show();
	(I1 + I2 + I2).show();
	C.show();
	F.show();
	system("pause");
}