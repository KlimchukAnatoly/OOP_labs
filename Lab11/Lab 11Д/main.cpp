#include "data.h"

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	Numset set1;
	Numset set2(7, -5, 5);
	Numset set3(set1, 0);
	set1.show();
	set2.show();
	set3.show();
	cout << set1.getmax() << '\t' << set2.getElement(3) << '\t' << set2.isInSet(3) << endl;
	Numset set4 = grouping(set1, set2);
	printf("grouping:\n");
	set4.show();
	Numset set5 = intersection(set1, set2);
	printf("intersection:\n");
	set5.show();
	Numset set6 = difference(set1, set2);
	printf("difference:\n");
	set6.show();
	Numset set7 = disjunc(set1, set2);
	printf("disjunc:\n");
	set7.show();
	}