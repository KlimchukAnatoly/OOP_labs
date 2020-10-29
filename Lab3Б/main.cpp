#include "data.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	cout << "Создание библиотеки из " << N << " книг"<<endl;
	Library books[N];
	if (!books[2].IsBookAvaliable())books[2].ChangeBook();
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		books[i].show();
		cout << endl;
	}
	cout << "Ищем книгу по названию. Введите название:" << endl;
	string _name;
	cin >> _name;
	IsInLibrary(books, _name);
	cout << endl << "Книгу №" << books[2].GetIndex() << " взяли из библиотеки" << endl;
	books[2].ChangeBook();
	cout << "Стало:"<< endl;
	books[2].show();
}