#include "data.h"
#include "TempArray.cpp"

int main() {
	setlocale(LC_ALL, "ru");
	TempArray<int> a;
	a.initOne(5, 12);
	a.initOne(2, 4);
	a.initOne(8, 33);
	a.show();
	cout << a.average()<< ' ' << a.sum() << ' ' << a[6] << endl;
	system("pause");
}