#include "Classes.h"
#include <time.h>

int main() {
	setlocale(LC_ALL, "ru");
	cout << "Создание обьекты производных класов" << endl;
	P1 triangle;
	P2 rectangle;
	P3 circle;
	triangle.Figure::set(3, 6);
	rectangle.Figure::set(5, 5);
	circle.Figure::set(4);
	triangle.show(); 
	rectangle.show();
	circle.show();
}