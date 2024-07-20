
#include<iostream>
#include<math.h>
#include<string>
using namespace std;

//point 点的类

class point
{
	char* name;
	double x,y;

public:
	point() 
	{
		char str[50];
		cout<<"点的名称:";
		cin>>str;
		name=new char[strlen(str)+1];
		strcpy_s(name, strlen(str) + 1,str);
		cout <<name<< "的x,y:";
		cin>>x>>y;
	}
	point(const point &a)
	{
		name = new char[strlen(a.name) + 1];
		strcpy_s(name, strlen(a.name) + 1, a.name);
		x=a.x;
		y=a.y;
	}
	~point()
	{
		delete[]name;
	}
	//1.全局函数作友元
	friend point operator+(point a,point b);
	friend point operator-(point a, point b);
	friend ostream& operator<<(ostream &out,point a);//必考，理解
	friend double abs(point a);

	//2.将重载函数作为类的成员
	double operator*(point a);
	double operator^(point a);
};

point operator+(point a, point b)
{
	point temp;
	temp.x=a.x+b.x;
	temp.y=a.y+b.y;
	return temp;
}
point operator-(point a, point b)
{
	point temp;
	temp.x = a.x - b.x;
	temp.y = a.y - b.y;
	return temp;
}
ostream& operator<<(ostream &out, point a)
{
	out<<"("<<a.x<<","<<a.y<<")";
	return out;
}
double abs(point a)
{
	return sqrt(a.x*a.x + a.y*a.y);
}

double point::operator*(point a)
{
	double res;
	res=this->x*a.x+this->y*a.y;
	return res;
}
double point::operator^(point a)
{
	double res;
	res=sqrt((this->x-a.x)*(this->x - a.x)+ (this->y - a.y)*(this->y - a.y));
	return res;
}

int main()
{
	point a,b,c;
	cout<<(a^b)<<endl;
	cout<<b*c<<endl;
	cout<<c<<endl;
	cout<<a+b<<endl;
	cout<<abs(b);
} 