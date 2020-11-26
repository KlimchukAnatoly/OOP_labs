#include "RandomReader.h"

RandomReader::RandomReader()
{
	s = new string;
	*s = "NaN";
}

void RandomReader::operator [](unsigned int& _num)
{
	char* c = new char;
	string* str = new string;
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
	delete this->s;
	this->s = str;
	str = nullptr;
	cout << s << '/n' << str << endl;
}

std::ostream& operator<< (std::ostream& out, const RandomReader& point) {
	out << point.s;
	return out;
}