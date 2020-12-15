#include "func.h"

void writetofile(Mystring& _text)
{
	ofstream fout;
	try
	{
		fout.open(FILEPATH);
		fout << _text;
	}
	catch (const ofstream::failure& _ex)
	{
		cout<< "������" << _ex.code();
	}
	fout.close();
}