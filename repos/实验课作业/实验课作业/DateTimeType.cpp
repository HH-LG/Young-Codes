//扩展成功
/*#include<iostream>
using namespace std;
int days;
class TimeType
{
	int h, m, s;
public:
	TimeType(int sec = 0, int min = 0, int hour = 0);
	void IncrementSec(int ds);
	void IncrementMin(int dm);
	void IncrementHour(int dh);
	bool equalTime(TimeType t2);
	void printTime();
};

TimeType::TimeType(int sec, int min, int hour) :s(sec), m(min), h(hour) {}
void TimeType::IncrementSec(int ds)
{
	days=0;
	int dm=0,dh=0;
	if (ds <= 0)
	{
		cout << "请输入一个正数！" << endl;
		return;
	}
	s += ds;
	if (s >= 60)
	{
		dm=s/60;
		s %= 60;
	}
	m+=dm;
	if (m >= 60)
	{
		dh=m/60;
		m %= 60;
	}
	h+=dh;
	if(h >= 24)
	{
		days=h/24;
		h %= 24;
	}
}
void TimeType::IncrementMin(int dm)
{
	if (dm <= 0)
	{
		cout << "请输入一个正数！" << endl;
		return;
	}
	m += dm;
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
	if (h < 10)
	{
		cout << "0";
	}
	cout << h << "时";
	if (m < 10)
	{
		cout << "0";
	}
	cout << m << "分";
	if (s < 10)
	{
		cout << "0";
	}
	cout << s << "秒";
}

class DateType
{
	int year, month, day;
public:
	DateType(int y = 0, int m = 1, int d = 1) :year(y), month(m), day(d) {}
	void IncrementDay();
	void IncrementDays(int n);
	bool equal(DateType d2);
	void printDate();
};
void DateType::IncrementDay()
{
	int list[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	day++;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		list[1]++;
	}

	if (day > list[month - 1])
	{
		month++;
		day = 1;
	}
	if (month > 12)
	{
		month = 1;
		year++;
	}
}
bool DateType::equal(DateType d2)
{
	if (year == d2.year&&month == d2.month&&day == d2.day)
		return true;
	else
		return false;
}
void DateType::printDate()
{
	cout << "时间为：" << year << "年" << month << "月" << day << "日" << endl;
}
void DateType::IncrementDays(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		IncrementDay();
	}
}

class DateTimeType :public TimeType, public DateType
{
public:
	DateTimeType(int y0=1,int m0=1,int d0=1,int hr0=0,int mi0=0,int se0=0):DateType(y0,m0,d0),TimeType(se0,mi0,hr0){}
	void IncrementSec(int ds);
	void printDateTime();
};
void DateTimeType::IncrementSec(int ds)
{
	TimeType::IncrementSec(ds);
	DateType::IncrementDays(days);
}
void DateTimeType::printDateTime()
{
	DateType::printDate();
	TimeType::printTime();
}

int main()
{
	DateTimeType dttm1(1999,12,31,23,59,59),dttm2;
	dttm1.printDate();
	cout<<endl;
	dttm1.printDateTime();
	dttm2.printDateTime();
	dttm1.IncrementSec(30);
	dttm1.printDateTime();
}*/