#include "data.h"

void sortByNum(Train* list) {
	string* nums = new string[N];
	string word;
	Train temp;
	int n = 0;
	for (int i = 0; i < N; i++)
	{
		nums[i] = list[i].Getnumber();
	}

	for (int i = 0; i < N - 1; i++) {
		n = i;
		word = CHAR_MAX;
		for (int j = i; j < N; j++) {
			if (nums[j] < word) {
				n = j;
				word = nums[j];
			}
		}
		if (n != i) {
			word = nums[i];
			nums[i] = nums[n];
			nums[n] = word;
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
		n = i;
		word = "яяяяяяяяя";
		for (int j = i; j < N; j++) {
			if (places[j] <= word) {
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
	//Find same places
	for (int start = 0, end = 0, i = 0; i < N; i++)
	{
		if (places[start] == places[i]) {
			end = i;

		}
		else {
			if (start != end)sortByTimeInRange(list, start, end);
			start = end = i;
		}
	}
}

void sortByTimeInRange(Train* list, int start, int end)
{
	string* nums = new string[N];
	string word;
	Train temp;
	int n = 0;
	for (int i = 0; i < N; i++)
	{
		nums[i] = list[i].Gettime();
	}

	for (int i = start; i < end; i++) {
		n = i;
		word = CHAR_MAX;
		for (int j = i; j < end + 1; j++) {
			if (nums[j] < word) {
				n = j;
				word = nums[j];
			}
		}
		if (n != i) {
			word = nums[i];
			nums[i] = nums[n];
			nums[n] = word;
			temp = list[i];
			list[i] = list[n];
			list[n] = temp;
		}
	}
}

void const showtrains(Train* list) {
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		cout << i + 1 << "  " << list[i].Getnumber() << '\t' << list[i].Getplace() << '\t' << list[i].Gettime() << '\n';
	}
}

void searshbynum(Train* list) {
	string s;
	cout << "ѕоиск по номеру";
	//cout << "¬ведите номер поезда, который хотите найти:" << endl;
	//cin >> s;
	s = list[3].Getnumber();
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		if (s == list[i].Getnumber())cout << i + 1 << "  " << list[i].Getnumber() << '\t' << list[i].Getplace() << '\t' << list[i].Gettime() << '\n';
	}
}