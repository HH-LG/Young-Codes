/*#include<iostream>
#include<string>
using namespace std;

class Box
{
	int h;
	int a;
	int b;
public:
	Box()
	{
		cout<<"Enter Box::Box() constructer"<<endl;
	}
	Box(int x1,int x2,int x3):h(x1),a(x2),b(x3){ cout << "Enter Box::Box(int£¬int£¬int) constructer" << endl; }
	Box(int x):Box(x,x,x){ cout << "Enter Box::Box(int) constructer" << endl; }
	void get_size(){cout<<a<<" "<<b<<" "<<h<<endl; }
};

class Carton :public Box
{
	using Box::Box;
	string material{"cotton"};
public:
	Carton(int a,int b,int c,string material):Box(a,b,c){this->material=material;}
	void get_material(){cout<<material<<endl;}

};

int main()
{
	Carton c1(1,1,4);
	c1.get_material();
	c1.Box::get_size();
}*/