#include"data.h"
#include "RandomReader.h"

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	RandomReader* r = new RandomReader;
	r[2];
	cout << r;
}