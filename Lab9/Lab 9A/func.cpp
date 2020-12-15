#include "func.h"
void showvector(vector<Sum> & _vec) {
	for (auto i = 0; i < _vec.size(); i++)
	{
		cout<< setw(4)<< left << _vec[i].get();
	}
	cout << endl;
}

void compareVector(vector<Sum>& _v1, vector<Sum>& _v2) {
	int n = _v1.size();
	if (_v2.size() > n) n = _v2.size();

	char c = ' ';

	for (int i = 0; i < n; i++)
	{
		if (_v1[i] < _v2[i]) c = '<';
		else if (_v1[i] == _v2[i]) c = '=';
		else c = '>';
		cout << setw(4) << left << c;
	}
	cout << endl;
}