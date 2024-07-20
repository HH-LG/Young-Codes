#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
class Point
{
	double x;
	double y;
public:
	Point()
	{
		this->x = 0;
		this->y = 0;
	}
	Point(double x, double y)
	{
		this->x=x;
		this->y=y;
	}
	/*~Point()
	{
		cout<<x<<" "<<y<<endl;
	}*/
	double distance(Point A)
	{
		return sqrt((this->x-A.x)*(this->x - A.x)+ (this->y - A.y)*(this->y - A.y));
	}
};
class Circle
{
	double r;
	Point o;
public:
	Circle(Point o, double r)
	{
		this->o=o;
		this->r=r;
	}
	bool inCircle(Point A)
	{
		return o.distance(A)<r;
	}
};
int main()
{
	srand(time(NULL));
	const int total=1000000;
	int cnt=0,i;
	double pi;
	Circle O1(Point(0.5,0.5),0.5);
	for (i = 0; i < total; i++)
	{
		Point A(double(rand()*rand() %1000000)/1000000, double(rand()*rand() % 1000000) / 1000000);
		if(O1.inCircle(A))
			cnt++;
	}
	cout<<4*double(cnt)/total;
}
