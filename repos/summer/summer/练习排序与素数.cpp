/*
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;

istream& s_input(istream& in)
{
	cout << "ÒÀ´ÎÊäÈë£ºÑ§ºÅ   ÊýÑ§   Ó¢Óï   ÓïÎÄ   ÐÕÃû" << endl;
	return in;
}
//¾ØÕóÅÅÐò£¬½á¹¹ÅÅÐò£¬ËØÊý
bool isprime(int x)
{
	if (x <= 0)
	{
		cout<<"Range: x>=1!"<<endl;
		return 0;
	}
	if (x == 1)
	{
		return 0;
	}
	for (int i = 2; i*i <= x; i++)
	{
		if (x%i == 0)
		{
			return false;
		}
	}
	return true;
}

class student
{
	int index;
	double math;
	double eng;
	double chi;
	char name[40];
public:
	student() {	};
	student(int index, double math, double eng, double chi, char name[]) :index(index), math(math), eng(eng), chi(chi)
	{
		int i;
		for( i=0;name[i]!='\0';i++)
			this->name[i]=name[i];
		this->name[i]='\0';
	}
	void input() ;
	void set_name(char *name);
	double get_score();
	void print();
	friend bool operator<(student a,student b);
	friend bool operator>(student a,student b);
	friend void swap(student& a,student &b);
};
void student::input()
{
	cin>>s_input>>index>>math>>eng>>chi>>name;
}

void student::set_name(char *name)
{
	int i;
	for (i = 0; name[i] != 0; i++)
	{
		this->name[i]=name[i];
	}
	this->name[i]='\0';
}

double student::get_score()
{
	return math+eng+chi;
}

void student::print()
{
	cout<<setw(10)<<index<<setw(10)<<name<<setw(5)<<chi<<setw(5)<<math<<setw(5)<<eng<<setw(10)<<"total:"<<get_score()<<endl;
}

bool operator<(student a, student b)
{
	if (a.get_score() < b.get_score())
	{
		return true;
	}
	return false;
}
bool operator>(student a, student b)
{
	if (a.get_score() > b.get_score())
	{
		return true;
	}
	return false;
}
void swap(student& a, student& b)
{
	student temp(a);
	a=b;
	b=temp;
}
int main()
{
	srand(time(NULL));
	const int size=20;
	int a[size][size];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			a[i][j]=rand()%(size*size)+1;
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
	cout<<endl;

	int b[size*size];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			b[i*size+j]=a[i][j];
		}
	}
	for (int i = 0; i < size*size - 1; i++)
	{
		for (int j = 0; j < size*size - 1 - i; j++)
		{
			if (b[j] > b[j + 1])
			{
				int temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << b[i*size+j] << ' ';
		}
		cout<<endl;
	}
	cout<<endl;

	bool prime[size][size];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			prime[i][j]=isprime(b[i*size+j]);
			cout<<prime[i][j]<<' ';
		}
		cout<<endl;
	}

	student s[10] =
	{ {2113713,92,90,82,(char*)"ÖìÊÀºÀ"} ,
	{203575,90,89,96,(char*)"ÍõÅ£"},
	{218596,45,99,86,(char*)"ÁøÑ©"},
	{208563,99,93,90,(char*)"Mark"},
	{2145713,90,80,78,(char*)"Lin"},
	{2113765,95,67,80,(char*)"Amy"},
	{2016713,93,36,82,(char*)"Laugh"} };

	//int index, double math, double eng, double chi, char*name
	for (int i = 0; i < 3; i++)
	{
		s[i+7].input();
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (s[j] < s[j + 1])
			{
				swap(s[j],s[j+1]);
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		s[i].print();
	}
	/*
	224563 98 92 45 Careway
	214568 98 65 69 Furry
	237451 63 52 98 Hexit
	*
}*/