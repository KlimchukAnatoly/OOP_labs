#include "data.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char* n = new char[3] {'О','К','\0'};
	unsigned int y = 0, d = 0, f = 0;
	List obj[N];

	cout<<"Работа метода SET:\n";
	for (int i = 0; i < N; i++)
	{
		cout << "Год, научный руководитель, диаметр антенны (м), рабочая частота (мгц)\n";
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

	cout << "Рaбота метода SHOW:\n";
	for (int i = 0; i < N; i++)
	{
		obj[i].show();
	}
	cout << "Работа метода GET,вывод полученных данных:\n";
	for (int i = 0; i < N; i++)
	{
		obj[i].get(y, n, d, f);
		cout << y << '\t' << n << "\t\t" << d << '\t' << f << endl;
	}
	system("pause");
	delete(n);
}