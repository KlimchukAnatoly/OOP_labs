#include "data.h"

void sortsignals(Signal* sig) {
	int num = 0, n = 0;
	Signal temp;
	for (int i = 0; i < N - 1; i++) {
		num = 0;
		for (int j = i; j < N; j++) {
			if (sig[j].getYear() > num) {
				n = j;
				num = sig[i].getYear();
			}
		}
		if (n != i) {
			temp = sig[i];
			sig[i] = sig[n];
			sig[n] = temp;
		}
	}
}

bool operator==(const Signal& obj1, const Signal& obj2)
{
	if (obj1.year == obj2.year && obj1.name == obj2.name
		&& obj1.height == obj2.height && obj1.freq == obj2.freq) return true;
	else return false;
}
Signal operator + (Signal& obj1, const Signal& obj2)
{
	obj1.year += obj2.year;
	obj1.name += obj2.name;
	obj1.height += obj2.height;
	obj1.freq += obj2.freq;
	return obj1;
}

ostream& operator<<(ostream& S, Signal& obj) {
	S << obj.year << '\t' << obj.name << '\t' << obj.height << '\t' << obj.freq << '\n';
	return S;
}
istream& operator>>(istream& S, Signal& obj) {
	S >> obj.year >> obj.name >> obj.height >> obj.freq;
	return S;
}
