/*#include<iostream>
using namespace std;
class TimeType
{
	int h,m,s;
public:
	TimeType(int sec=0,int min=0,int hour=0);
	void IncrementSec(int ds);
	void IncrementMin(int dm);
	void IncrementHour(int dh);
	bool equalTime(TimeType t2);
	void printTime();
};

TimeType::TimeType(int sec,int min,int hour):s(sec),m(min),h(hour){}
void TimeType::IncrementSec(int ds)
{
	if (ds <= 0)
	{
		cout<<"������һ��������"<<endl;
		return;
	}
	s+=ds;
	while (s>=60)
	{
		s-=60;
		m++;
	}
	while (m >= 60)
	{
		m-=60;
		h++;
	}
	while (h >= 24)
	{
		h-=24;
	}
}

void TimeType::IncrementMin(int dm)
{
	if (dm <= 0)
	{
		cout << "������һ��������" << endl;
		return;
	}
	m+= dm;
	while (m >= 60)
	{
		m -= 60;
		h++;
	}
	while (h >= 24)
	{
		h -= 24;
	}
}

void TimeType::IncrementHour(int dh)
{
	if (dh <= 0)
	{
		cout << "������һ��������" << endl;
		return;
	}
	h += dh;
	while (h >= 24)
	{
		h -= 24;
	}
}

bool TimeType::equalTime(TimeType t2)
{
	if (h == t2.h && m == t2.m&&s == t2.s)
	{
		return true;
	}
	else
		return false;
}
void TimeType::printTime()
{
	cout<<"ʱ��Ϊ��";
	if (h < 10)
	{
		cout<<"0";
	}
	cout<<h<<"ʱ";
	if (m < 10)
	{
		cout << "0";
	}
	cout<<m<<"��";
	if (s < 10)
	{
		cout << "0";
	}
	cout<<s<<"��";
}
int main()
{
	TimeType t0;
	t0.IncrementSec(9862);
	t0.printTime();
}*/