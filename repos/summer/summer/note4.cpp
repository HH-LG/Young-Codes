/*#include<iostream>
using namespace std;

class box
{
protected:
	double x,y,h;
public:
	box(){x=y=h=1.0;cout<<"box() called"<<endl; }
	box(double x,double y,double h):x(x),y(y),h(h){}
	virtual double volume()=0;
};

class product:public box
{
	int material;
public:
	product(int material,int x,int y,int h):material(material)
	{
		cout<<"product(int ,int ,int ,int )called"<<endl;
	}
	double volume(){return x*y*h; }
};

int main()
{
	box* p;
	product foods(4,5,6,3);
	p=&foods;
	cout<<p->volume();
}*/