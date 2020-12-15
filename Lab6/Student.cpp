#include "Student.h"

Student::Student() {
	fullname = "";
	fakultet = "";
	group = "";
	grade = 0;
}

void Student::change(string& _fullname, string& _fakultet, string& _group, int& _grade)
{
	fullname = _fullname;
	fakultet = _fakultet;
	group = _group;
	grade = _grade;
}

ostream& operator<<(ostream& _S, Student& _obj)
{
	_S << ' ' << setw(25) << left << _obj.fullname << setw(10) << _obj.fakultet << setw(7) << _obj.group << setw(3) << _obj.grade << endl;
	return _S;
}
