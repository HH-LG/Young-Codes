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
		cout<<"请输入一个正数！"<<endl;
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
		cout << "请输入一个正数！" << endl;
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
		cout << "请输入一个正数！" << endl;
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
	cout<<"时间为：";
	if (h < 10)
	{
		cout<<"0";
	}
	cout<<h<<"时";
	if (m < 10)
	{
		cout << "0";
	}
	cout<<m<<"分";
	if (s < 10)
	{
		cout << "0";
	}
	cout<<s<<"秒";
}
int main()
{
	TimeType t0;
	t0.IncrementSec(9862);
	t0.printTime();
}*/