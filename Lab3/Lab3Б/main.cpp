#include "data.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	cout << "�������� ���������� �� " << N << " ����"<<endl;
	Library books[N];
	if (!books[2].IsBookAvaliable())books[2].ChangeBook();
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		books[i].show();
		cout << endl;
	}
	cout << "���� ����� �� ��������. ������� ��������:" << endl;
	string _name;
	cin >> _name;
	IsInLibrary(books, _name);
	cout << endl << "����� �" << books[2].GetIndex() << " ����� �� ����������" << endl;
	books[2].ChangeBook();
	cout << "�����:"<< endl;
	books[2].show();
}