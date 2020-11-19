#include "data.h"

ostream& operator<<(ostream& S,Signal& obj) {
	S <<  *(obj.year) << '\t' <<  *(obj.name) << "     \t" <<  *(obj.height) << '\t' << *(obj.freq)<<'\n';
	return S;
}

istream& operator>>(istream& S,Signal& obj) {
	S >>  *obj.year >>  *obj.name >>  *obj.height >>  *obj.freq;
	return S;
}

void getFromFile(Signal*& _sig, int& _len)
{
	ifstream fin(FILEPATH);
	for (int i = 0; i <_len; i++)
	{
		if (!fin.eof())	fin >>_sig[i];
	}
	fin.close();
}

void sortsignals(Signal*& _sig, int& _len) {
	int num = 0, n = 1;
	Signal* temp = new Signal;
	getFromFile(temp, n);
	n--;
	for (int i = 0; i <_len; i++) {
		num = 0;
		for (int j = i; j <_len; j++) {
			if (_sig[j].getYear() > num) {
				n = j;
				num = _sig[j].getYear();
			}
		}
		if (n != i) {
			*temp = _sig[i];
			_sig[i] = _sig[n];
			_sig[n] = *temp;
		}
	}
}

void showlist(Signal*& _sig, int& _len) {
	for (int i = 0; i <_len; i++) {
		cout << i + 1 << " " << _sig[i];
	}
	cout << endl;
}

void add_rec(Signal*& _sig, int& _len)
{
	Signal* temp = new Signal[_len + 1];
	for (int i = 0; i < _len; i++)
	{
		temp[i] = _sig[i];
	}
	ifstream fin("Text1.txt");
		if (!fin.eof())	fin >> temp[_len];
	fin.close();
	_len++;
	delete[] _sig;
	_sig = temp;
	temp = nullptr;
}

void del_rec(Signal*& _sig, int& _len)
{
	Signal* temp = new Signal[_len - 1];
	for (int i = 0; i < _len-1; i++)
	{
		temp[i] = _sig[i];
	}
	_len--;
	delete[] _sig;
	_sig = temp;
	temp = nullptr;
}