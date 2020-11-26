#include "data.h"

int main() {
	Sum a;
	Sum* ptr = NULL;
	ptr = &a;
	a.init();
	ptr->show();
	a.sum();
}