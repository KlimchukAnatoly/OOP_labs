#include "data.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Signal sig[N];
	cout << "������� ������: ���, ���, ����� ������� � ������� ������� " << N <<" ���:\n";
	for (int i = 0; i < N; i++)
	{
		cin >> sig[i];
		cout << endl;
	}
	sortsignals(sig);
	for (int i = 0; i < N; i++) {
		cout<< i+1 << " " << sig[i];
	}
	cout << "����� 3 �����: "<<sig[2][1];
	cout << "������������� 3 ������:"<<endl;
	sig[2]();
	cout << "�����:"<<endl;
	cout << sig[2];
}