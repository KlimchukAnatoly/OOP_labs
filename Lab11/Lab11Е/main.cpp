#include "data.h"

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	Time first, second;
	first.show();
	second.show();
	cout << "�������� � 1 ��������:"
		<< "���������� 200 ����� � ������������� ������� �� �������� 45:\n";
	first.addMinutes(200);
	first.setSeconds(45);
	first.show();
	cout << "�������� �������:\t";
	first.showSeconds();
	cout << "\n���� �������:\t" << first.arrowAngle() << endl;
	first.show();
	second.show();
	first.difference(second);
	cout << first.compare(second)<< " 0 - ������� �� �����, 1 - ������� �����";
}