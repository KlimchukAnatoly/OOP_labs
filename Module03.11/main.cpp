//ÂÀĞÈÀÍÒ 8 ÀÍÀÒÎËÈÉ ÊËÈÌ×ÓÊ ÊÍ-319Á



#include <iostream>

using namespace std;


class B1
{
	int b1;
public:
	B1(int _1);
	~B1();
	virtual void show();
};

B1::B1(int _1)
{
	b1 = _1;
}

B1::~B1()
{
	delete& b1;
}

void B1::show()
{
	cout << "B1: "<<b1 << endl;
}


class B2
{
	int b2;
public:
	B2(int _1);
	~B2();
	virtual void show();
};

B2::B2(int _1)
{
	b2 = _1;
}
B2::~B2()
{
	delete &b2;
}
void B2::show()
{
	cout << "B2: "<< b2 << endl;
}

class A : private B1, public B2
{
	int a;
public:
	A(int _1, int _2, int _3);
	~A();
	void show() override;
};

A::A(int _1, int _2, int _3) : B1(_1), B2(_2)
{
	a = _3;
}

A::~A()
{
	delete& a;
}

void A::show()
{
	B1::show();
	B2::show();
	cout << "A: " << a << endl;
}


class C :  public B1,public A
{
	int c;
public:
	C(int _1, int _2, int _3, int _4, int _5);
	~C();
	void show() override;
};

C::C(int _1, int _2, int _3, int _4, int _5): A(_1,_2,_3), B1(_4)
{
	c = _5;
}

C::~C()
{
	delete &c;
}

void C::show()
{
	A::show();
	B1::show();
	cout << "C: " << c << endl;
}

int main() {
	B1 b1(1);
	B2 b2(2);
	A a(3, 4, 5);
	C c(6, 7, 8, 9, 10);

	a.show();
	cout << endl;
	c.show();
	system("pause");
}
