#include "func.h"

void read(Comp*& _list)
{
	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit);
	try
	{
		fin.open(FILEPATH1);
		for (int i = 0; i < N; i++)
		{
			try
			{
				if (fin.eof()) {
					throw exception("����� �����");
				}
				fin >> _list[i];
			}
			catch (const std::exception& _ex)
			{
				cout << "������ " << _ex.what() << " - ��������� ����� ���������." << endl;
				exit;
			}
		}
	}
	catch (const ifstream::failure& _ex)
	{
		cout << "������ " << _ex.code() << " - ��������� ����� ���������."<< endl;
		exit;
	}
	fin.close();
}

void write(Comp*& _list)
{
	ofstream fout;
	fout.exceptions(ofstream::badbit | ofstream::failbit);
	try
	{
		fout.open(FILEPATH2);
		for (int i = 0; i < N; i++)
		{
			fout << _list[i] << '\n';
		}
	}
	catch (const ofstream::failure& ex)
	{
		cout << "������ "<< ex.code() << endl;
	}
	fout.close();
}
