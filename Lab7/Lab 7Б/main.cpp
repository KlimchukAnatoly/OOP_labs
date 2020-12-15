#include "data.h"
#include "Mystring.h"
#include "func.h"


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Mystring mytext ("Моё22 Сообщение100");
	mytext.show();
	writetofile(mytext);
}