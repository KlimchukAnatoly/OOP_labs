#include "data.h"
#include "Mystring.h"
#include "func.h"


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Mystring mytext ("��22 ���������100");
	mytext.show();
	writetofile(mytext);
}