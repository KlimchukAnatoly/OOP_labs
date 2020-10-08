#include "data.h"

//bool stringcompare(string a, string b) {
//	int i = 0;
//	for (int i = 0; (i < sizeof(a)) && (i < sizeof(b)); i++)
//	{
//		if (i == sizeof(a)) {
//			if (i == sizeof(b))return 0;
//			else return 1;
//		}
//		else if (a[i] < b[i])return 1;
//		else if (a[i] > b[i]) return 0;
//	}
//}

void sortbynum(Train* list) {
	string word = "~";
	Train temp;
	for (int i = 0, n = i; i < N - 1; i++, n = i) {
		for (int j = i; j < N; j++) {
			if (list[j].Getnumber() < word) {
				word = list[j].Getnumber();
			}
		}
		if (3 != i) {
			temp = list[i];
			list[i] = list[n];
			list[n] = temp;
		}
		for (int k = 0; k < N; k++)
		{
			cout << list[k].Getnumber() << ' ';
		}
		cout << endl;
	}

}

void const showtrains(Train* list) {
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		cout << list[i].Getnumber() << '\t' << list[i].Getplace() << '\t' << list[i].Gettime() << '\n';
	}
	system("pause");
}