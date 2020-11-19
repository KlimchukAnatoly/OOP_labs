//ÂÀĞÈÀÍÒ 8 ÀÍÀÒÎËÈÉ ÊËÈÌ×ÓÊ ÊÍ-319Á



#include <iostream>

using namespace std;


class VAR3 {
	char c1;
	char c2;
	int z;
public:
	VAR3();
	VAR3(char _c1, char _c2, int _z);
	VAR3(const VAR3& obj);


	friend ostream& operator<<(ostream& S, VAR3& obj);
	void showmin();
	VAR3 operator = (const VAR3& obj);
	friend bool operator == (const VAR3& obj1, const VAR3& obj2);

};

VAR3::VAR3()
{
	c1 = '#';
	c2 = '$';
	z = 1000;
}

VAR3::VAR3(char _c1, char _c2, int _z)
{
	c1 = _c1;
	c2 = _c2;
	z = _z;
}

VAR3::VAR3(const VAR3& obj)
{
	c1 = obj.c1;
	c2 = obj.c2;
	z = obj.z;
}

void VAR3::showmin()
{
	if (c1 < c2)cout << c2 << endl;
	else cout << c1<<endl;
}

VAR3 VAR3::operator=(const VAR3& obj)
{
		c1 = obj.c1;
		c2 = obj.c2;
		z = obj.z;
		return *this;
}

ostream& operator<<(ostream& S, VAR3& obj)
{
	cout << obj.c1 << ' ' << obj.c2 << ' ' <<obj.z<< endl;
}

bool operator==(const VAR3& obj1, const VAR3& obj2)
{
	return (obj1.c1 == obj2.c1 && obj1.c2 == obj2.c2 && obj1.z == obj2.z);
}


int main() {
	VAR3 a1;
	VAR3 a2('A','V',300);
	VAR3 a3(a1);

	cout<<
}