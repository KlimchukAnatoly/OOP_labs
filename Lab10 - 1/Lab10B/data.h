#pragma once

#include<iostream>

class Sum
{
public:
	Sum();//����������� �� ���������
	Sum(int x, int y);//����������� � �����������

	void init();
	void show();
	void sum();

private:
	int x;//������ ����������
	int y;//������ ����������
	int s;//�����
};
