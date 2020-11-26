#include "Time.h"
//������� ���������� ������� � ����������� ���� ����� ���������
void Time::fixtime()
{
	while (seconds < 0) {
		seconds += 60;
		minutes--;
	}
	while (seconds > 59) {
		seconds -= 60;
		minutes++;
	}

	while (minutes < 0) {
		minutes += 60;
		hours--;
	}
	while (minutes > 59) {
		minutes -= 60;
		hours++;
	}
	while (hours < 0) {
		hours += 24;
	}
	while (hours > 23) {
		hours -= 24;
	}
}

Time::Time()
{
	hours = rand() % 24;
	minutes = rand() % 60;
	seconds = rand() % 60;
}
//�������
int Time::getHours() { return hours; }

int Time::getMinutes() { return minutes; }

int Time::getSeconds() { return seconds; }
//�������
void Time::setHours(int quan)
{
	hours = quan;
	fixtime();
}

void Time::setMinutes(int quan)
{
	minutes = quan;
	fixtime();
}

void Time::setSeconds(int quan)
{
	seconds = quan;
	fixtime();
}
//������� ����������
void Time::addHours(int quan)
{
	hours += quan;
	fixtime();
}

void Time::addMinutes(int quan)
{
	minutes += quan;
	fixtime();
}

void Time::addSeconds(int quan)
{
	seconds += quan;
	fixtime();

}
//����� ��������
void Time::showHours()
{
	cout << hours << '\t';
}

void Time::showMinutes()
{
	cout << minutes << '\t';
}

void Time::showSeconds()
{
	cout << seconds << '\t';
}

void Time::show()
{
	printf("%-2d:%-2d:%-2d\n", hours, minutes, seconds);
}

//�������
void Time::difference(Time obj)
{
	int h, m, s;
	h = abs(hours - obj.getHours());
	m = abs(minutes - obj.getMinutes());
	s = abs(seconds - obj.getSeconds());
	printf("������� �� ������� - %-2d:%-2d:%-2d\n",h,m,s);
}
//���������
bool Time::compare(Time obj)
{
	if ((hours == obj.getHours())
		&& (minutes == obj.getMinutes())
		&& (seconds == obj.getSeconds())) {
		return 1;
	}
	else return 0;
}
//���� ����� ������� � �������� ���������
int Time::arrowAngle()
{
	int hoursangle = hours * 15;
	int minutesangle = minutes * 6;
	return abs(hoursangle - minutesangle);
}