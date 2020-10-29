#include "data.h"

void sortByNum(Train* list) {
	string* names = new string[N];
	string word;
	Train temp;
	int n = 0;
	for (int i = 0; i < N; i++)
	{
		names[i] = list[i].Getnumber();
	}

	for (int i = 0; i < N - 1; i++) {
		int n = i;
		word = CHAR_MAX;
		for (int j = i; j < N; j++) {
			if (names[j] < word) {
				n = j;
				word = names[j];
			}
		}
		if (n != i) {
			word = names[i];
			names[i] = names[n];
			names[n] = word;
			temp = list[i];
			list[i] = list[n];
			list[n] = temp;
		}
	}
}

void sortByPlace(Train* list)
{
	string* places = new string[N];
	string word;
	Train temp;
	int n = 0;
	for (int i = 0; i < N; i++)
	{
		places[i] = list[i].Getplace();
	}
	for (int i = 0; i < N - 1; i++) {
		int n = i;
		word = CHAR_MAX;
		for (int j = i; j < N; j++) {
			if (places[j] < word) {
				n = j;
				word = places[j];
			}
		}
		if (n != i) {
			word = places[i];
			places[i] = places[n];
			places[n] = word;
			temp = list[i];
			list[i] = list[n];
			list[n] = temp;
		}
	}

}

void sortByTimeInRange(Train* list, int start, int end)
{
}

void const showtrains(Train* list) {
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		cout << list[i].Getnumber() << '\t' << list[i].Getplace() << '\t' << list[i].Gettime() << '\n';
	}
}