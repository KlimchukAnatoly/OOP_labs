#include "RandomReader.h"

RandomReader::RandomReader()
{
	str = new string;
	*str = "NaN";
}

unsigned int& RandomReader:: operator [](unsigned int& _num)
{
	char* c = new char;
	*str = "";
	ifstream fin(FILEPATH);
	for (unsigned int i = 0; i < _num; i++)
	{
		fin.ignore(rand());
		if (!fin.eof()) 
		{
			fin >> c;
			*str += *c;
		}
		fin.clear();
		fin.seekg(0);
	}
	fin.close();
	cout << *str;
	return _num;
}

std::ostream& operator<<(std::ostream& out, const RandomReader& r)
{
	cout << *(r.str) << endl;
	return out;
}
