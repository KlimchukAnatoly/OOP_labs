#include "data.h"
#include "Comp.h"
#include "func.h"

int main() {
	setlocale(LC_ALL, "ru");
	Comp* list = new Comp[N];
	read(list);
	write(list);
}