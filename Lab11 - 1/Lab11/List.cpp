#include "data.h"

List::List()
{
	Year = 1;
	Name = new char[2]{ 'A','\0' };
	Diam = 2;
	Freq = 3;
}

List::~List()
{
	delete[] Name;
}

void List::set(unsigned int y, char* n, unsigned int d, unsigned int f)
{
	Year = y;
	delete[] Name;
	Name = new char[strlen(n) + 1];
	strcpy(Name, n);
	Diam = d;
	Freq = f;
}

void List::show()
{
	setlocale(LC_ALL, "ru");
	cout.setf(ios::left);
	cout << setw(4) << Year << " | " << setw(12) << Name << " | "
		<< setw(7) << Diam << " | " << setw(7) << Freq << " |\n";
}

void List::get(unsigned int& y, char*& n, unsigned int& d, unsigned int& f) {
	y = Year;
	delete(n);
	n = new char[strlen(Name) + 1];
	strcpy(n, Name);
	d = Diam;
	f = Freq;
}
