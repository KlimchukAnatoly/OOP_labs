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
					throw exception("Конец файла");
				}
				fin >> _list[i];
			}
			catch (const std::exception& _ex)
			{
				cout << "Ошибка " << _ex.what() << " - Программа будет завершена." << endl;
				exit;
			}
		}
	}
	catch (const ifstream::failure& _ex)
	{
		cout << "Ошибка " << _ex.code() << " - Программа будет завершена."<< endl;
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
		cout << "Ошибка "<< ex.code() << endl;
	}
	fout.close();
}
