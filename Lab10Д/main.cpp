#include "data.h"

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	Train list[N];
	cout << "генерация элементов\n";
	showtrains(list);
	cout << "сортировка по номеру:\n";
	sortByPlace(list);
	showtrains(list);
	cout << "сортировка по месту назначения, одинаковые позиции сорт. по времени.\n";
}