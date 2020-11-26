#include "main.h"


int main() {
	setlocale(LC_ALL, "ru");
	srand(time(0));
	P5 list[N];
	cout << "Все сгенерированные числа:"<<endl;
	for (int i = 0; i < N; i++)
	{
		if (i % 20 == 0)cout << endl;
		cout << list[i].X::get() << "  ";
	}
	cout << endl;
	cout<< "Числа, которые при делении на 7 дают остаток 3, и при делении на 5 дают остаток 2:" << endl;
	for (int i = 0; i < N; i++)
	{
		if (list[i].P7::get() == 3 && list[i].P5::get() == 2) {
			cout << "Номер:" << i + 1 << "\tЗначение:" << list[i].X::get() << endl;
		}
	}
}