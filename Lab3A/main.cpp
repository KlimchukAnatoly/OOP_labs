#include "data.h"

int main() {
	setlocale(LC_ALL, "ru");
	Sobaka sobaka;
	sobaka.init();
	Spaniel spaniel;
	spaniel.init();
	spaniel.golos();
	sobaka.show();
	spaniel.show();
}