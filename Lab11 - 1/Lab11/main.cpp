#include "data.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char* n = new char[3] {'�','�','\0'};
	unsigned int y = 0, d = 0, f = 0;
	List obj[N];

	cout<<"������ ������ SET:\n";
	for (int i = 0; i < N; i++)
	{
		cout << "���, ������� ������������, ������� ������� (�), ������� ������� (���)\n";
		cin >> y;
		char* p = new char[50];
		cin >> p;
		delete[] n;
		n = new char[strlen(p) + 1];
		strcpy(n, p);
		delete[] p;
		cin >> d;
		cin >> f;
		obj[i].set(y, n, d, f);
	}

	cout << "�a���� ������ SHOW:\n";
	for (int i = 0; i < N; i++)
	{
		obj[i].show();
	}
	cout << "������ ������ GET,����� ���������� ������:\n";
	for (int i = 0; i < N; i++)
	{
		obj[i].get(y, n, d, f);
		cout << y << '\t' << n << "\t\t" << d << '\t' << f << endl;
	}
	system("pause");
	delete(n);
}