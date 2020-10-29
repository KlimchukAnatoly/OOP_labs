#include "data.h"

int main() {
	setlocale(LC_ALL, "ru");
	B1 b1(1);
	B1 b2(2);
	B1 b3(3);
	D1 d1(6, 7, 8, 9);
	D2 d2(10, 11, 12, 13, 14);
	b1.show();
	b2.show();
	b3.show();
	d1.show();
	d2.show();
}