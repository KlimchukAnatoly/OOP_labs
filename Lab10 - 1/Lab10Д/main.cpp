#include "data.h"

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	Train list[N];
	cout << "��������� ���������\n";
	showtrains(list);
	cout << "���������� �� ������:\n";
	sortByNum(list);
	showtrains(list);
	cout << "���������� �� ����� ����������, ���������� ������� ����. �� �������.\n";
	sortByPlace(list);
	showtrains(list);
	searshbynum(list);
}