#include "main.h"


int main() {
	setlocale(LC_ALL, "ru");
	srand(time(0));
	P5 list[N];
	cout << "��� ��������������� �����:"<<endl;
	for (int i = 0; i < N; i++)
	{
		if (i % 20 == 0)cout << endl;
		cout << list[i].X::get() << "  ";
	}
	cout << endl;
	cout<< "�����, ������� ��� ������� �� 7 ���� ������� 3, � ��� ������� �� 5 ���� ������� 2:" << endl;
	for (int i = 0; i < N; i++)
	{
		if (list[i].P7::get() == 3 && list[i].P5::get() == 2) {
			cout << "�����:" << i + 1 << "\t��������:" << list[i].X::get() << endl;
		}
	}
}