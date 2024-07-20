/*#include<iostream>
using namespace std;
class DateType
{
	int year,month,day;
public:
	DateType(int y = 0, int m = 1, int d = 1) :year(y), month(m), day(d){}
	void IncrementDay();
	void IncrementDays(int n);
	bool equal(DateType d2);
	void printDate();
};

void DateType::IncrementDay()
{
	int list[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	day++;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		list[1]++;
	}
	
	if (day > list[month - 1])
	{
		month++;
		day=1;
	}
	if (month > 12) 
	{
		month=1;
		year++;
	}
}

bool DateType::equal(DateType d2)
{
	if(year==d2.year&&month==d2.month&&day==d2.day)
		return true;
	else
		return false;
}

void DateType::printDate()
{
	cout<<"时间为："<<year<<"年"<<month<<"月"<<day<<"日"<<endl;
}

void DateType::IncrementDays(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		IncrementDay();
	}
}
int main()
{
	
	DateType d(1900,2,28);
	d.IncrementDay();
	d.printDate();
	d.IncrementDays(8956);
	d.printDate();
	DateType d2(1924,9,7);
	if (d.equal(d2))
	{
		cout<<"这两天是同一天";
	}
}*/