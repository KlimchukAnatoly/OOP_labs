#include "data.h"

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	Time first, second;
	first.show();
	second.show();
	cout << "Действия с 1 обьектом:"
		<< "Прибавляем 200 минут и устанавливаем секунды на значение 45:\n";
	first.addMinutes(200);
	first.setSeconds(45);
	first.show();
	cout << "Получаем секунды:\t";
	first.showSeconds();
	cout << "\nУгол стрелок:\t" << first.arrowAngle() << endl;
	first.show();
	second.show();
	first.difference(second);
	cout << first.compare(second)<< " 0 - обьекты НЕ равны, 1 - обьекты РАВНЫ";
}