#include "data.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Signal sig[N];
	cout << "Введите данные: год, имя, длину антенны и частоту сигнала " << N <<" раз:\n";
	for (int i = 0; i < N; i++)
	{
		cin >> sig[i];
		cout << endl;
	}
	sortsignals(sig);
	for (int i = 0; i < N; i++) {
		cout<< i+1 << " " << sig[i];
	}
	cout << "Длина 3 имени: "<<sig[2][1];
	cout << "Инициализация 3 записи:"<<endl;
	sig[2]();
	cout << "Вывод:"<<endl;
	cout << sig[2];
}