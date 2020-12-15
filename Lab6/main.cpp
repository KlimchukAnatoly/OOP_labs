#include"data.h"
#include "func.h"
#include "Student.h"

int main() {
	setlocale(LC_ALL, "ru");
	Student* list = new Student[N];
	listinit(list);
	showlist(list);
	cout << "\n*****************ÑÎÐÒÈÐÎÂÊÀ*****************\n\n";
	sortstudents(list);
	showlist(list);
}