#include "data.h"

int main() {
	int* len = new int;
	*len = 3;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Signal* sig = new Signal[*len];
	cout << "������ � �����" << endl;
	getFromFile(sig, *len);
	showlist(sig, *len);
	cout << "����������" << endl;
	sortsignals(sig, *len);
	showlist(sig, *len);
	cout << "���������� ������" << endl;
	add_rec(sig, *len);
	showlist(sig, *len);
	cout << "����������" << endl;
	sortsignals(sig, *len);
	showlist(sig, *len);
	cout << "�������� ������" << endl;
	del_rec(sig, *len);
	showlist(sig, *len);
}