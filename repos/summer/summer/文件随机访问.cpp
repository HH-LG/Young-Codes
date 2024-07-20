/*
#include<iostream>
#include<fstream>
using namespace std;
class point
{
	int index;
	double x;
	double y;
public:
	point(int index=0,double x = 0, double y = 0) :x(x), y(y),index(index) {}
	double getx(){return x;}
	double gety(){return y;}
	int get_index(){return index;}
};
int main()
{
	int cnt=0;
	ofstream outfile("point.bin",ios::binary);

	for (double i = 0; i <= 20;i+=0.1)
	{
		point a(++cnt,i,i*i);
		outfile.write((char*)(&a),sizeof(point));
	}
	outfile.close();

	double x;point temp;
	cin>>x;
	while (x >= 0 && x <=20)
	{
		ifstream infile("point.bin",ios::binary);
		infile.seekg(sizeof(point)*(10*x));
		infile.read((char*)(&temp),sizeof(point));
		cout<<temp.getx()<<' '<<temp.gety()<<endl;
		cin>>x;
	}
	
}*/