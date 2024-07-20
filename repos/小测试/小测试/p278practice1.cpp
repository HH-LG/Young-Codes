/*#include<iostream>
#include<math.h>
using namespace std;
class Point
{
	double x,y;
public:
	Point(double x = 0, double y = 0)
	{
		this->x = x;
		this->y = y;
	}
	Point operator+(Point a);
	double operator^(Point a);
	friend ostream& operator<<(ostream &out,Point a);
	friend istream& operator>>(istream &in,Point &a);
};

Point Point::operator+(Point a)
{
	Point res;
	res.x=a.x+this->x;
	res.y=a.y+this->y;
	return res;
}

double Point::operator^(Point a)
{
	double res;
	res=sqrt((a.x-this->x)*(a.x - this->x)+ (a.y - this->y)*(a.y - this->y));
	return res;
}

ostream& operator<<(ostream &out, Point a)
{
	out<<"("<<a.x<<","<<a.y<<")";
	return out;
}

istream& operator>>(istream &in, Point &a)
{
	in>>a.x>>a.y;
	return in;
}

int main()
{
	Point a,b;
	cin>>a>>b;
	cout<<a<<endl<<b<<endl;
	cout<<"a^b="<<(a^b)<<endl;
	cout<<"a+b="<<a+b<<endl;
}*/