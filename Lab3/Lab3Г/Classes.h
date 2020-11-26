#pragma once

#include <iostream>

using namespace std;
//������� ����������� �����
class Figure {
public:
	int a = 0;
	int b = 0;
	virtual void show() = 0;
	virtual void set(int _a, int _b = 1);
};
//�����������
class P1 : public Figure {
public:
	void show() override;
};
//�������������
class P2 : public Figure {
public:
	void show() override;
};
//����
class P3 : public Figure {
public:
	void show() override;
};