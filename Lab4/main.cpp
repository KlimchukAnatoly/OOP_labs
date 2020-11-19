#include "data.h"

int main() {
	int* len = new int;
	*len = 3;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Signal* sig = new Signal[*len];
	cout << "Запись с файла" << endl;
	getFromFile(sig, *len);
	showlist(sig, *len);
	cout << "Сортировка" << endl;
	sortsignals(sig, *len);
	showlist(sig, *len);
	cout << "Добавление записи" << endl;
	add_rec(sig, *len);
	showlist(sig, *len);
	cout << "Сортировка" << endl;
	sortsignals(sig, *len);
	showlist(sig, *len);
	cout << "Удаление записи" << endl;
	del_rec(sig, *len);
	showlist(sig, *len);
}