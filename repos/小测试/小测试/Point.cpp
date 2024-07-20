/*#include<iostream>
#include<math.h>
using namespace std;
class Point
{
	double x,y;
public:
	Point (double a,double b):x(a),y(b){}
	Point (){x=y=0;}
	Point operator+(Point a)
	{
		this->x+=a.x;
		this->y+=a.y;
		return *this;
	}
	Point operator-(Point a)
	{
		this->x -= a.x;
		this->y -= a.y;
		return *this;
	}
	double operator^(Point a)
	{
		double d;
		d=sqrt((this->x-a.x)*(this->x - a.x)+ (this->y - a.y)*(this->y - a.y));
		return d;
	}
	void display()
	{
		cout<<"("<<this->x<<","<<this->y<<")"<<endl;
	}
};
int main()
{
	Point p1,p2(3,4);
	Point a(1.35,-9.53);
	cout<<"distance between p1 and p2 :"<<(p1^p2)<<endl;
	p2=p2+a;
	p2.display();
	cout << "distance between p1 and p2 :" << (p1^p2);
}*/