#include "data.h"

ostream& operator<<(ostream& S, Signal& obj) {
	S << obj.year << '\t' << obj.name << '\t' << obj.height << '\t' << obj.freq<<'\n';
	return S;
}
istream& operator>>(istream& S, Signal& obj) {
	S >> obj.year >> obj.name >> obj.height >> obj.freq;
	return S;
}
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