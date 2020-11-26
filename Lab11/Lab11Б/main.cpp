#include "data.h"

int main() {
	Figure a;
	Figure b(5, 3, 3, 2);
	cout << "Area of the 1st circle:\t" << a.CircleArea() << endl
		<< "Area of the 1st triangle:\t" << a.TriangleArea() << endl
		<< "Area of the 2nd circle:\t" << b.CircleArea() << endl
		<< "Area of the 2nd triangle:\t" << b.TriangleArea() << endl;
}