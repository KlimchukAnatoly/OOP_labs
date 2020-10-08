#include "data.h"

int main() {
	setlocale(LC_ALL,"ru");
	srand(time(NULL));
	Matrix m;
	m.randomize();
	m.show();
	m.searchmin();
	m.setElement(2, 2, 5);
	cout << m.getElement(2, 4);
	m.show();
	m.getSubMatrix(2,1, 4, 3);
}