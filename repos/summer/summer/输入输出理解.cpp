/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	double d1, d2;
	int i;
	ofstream out1("f1.txt"), out2("f2.txt");
	for (i = 1; i <= 15; i++)
	{
		d1 = i * i + 0.5;
		d2 = 10 * i + 0.5;
		out1 << d1; 
		if(i<15)
			out1<<' ';
		if (i <= 10)
		{
			out2 << d2 << ' ';
		}
	}
	out2 << 357.9;
	out1.close();
	out2.close();

	ifstream in1("f1.txt"), in2("f2.txt");
	ofstream out3("f3.txt"); double a1, a2;
	double a[30];int cnt=0;
	while (	in1 >> a1)
	{
		a[cnt]=a1;
		cnt++;
	}
	while (in2 >> a2)
	{
		a[cnt]=a2;
		cnt++;
	}
	
	for(int i=0;i<cnt;i++)
		cout<<a[i]<<' ';
	cout<<endl;
	for (int i = 0; i < cnt-1; i++)
	{
		for (int j = 0; j < cnt - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				double t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for (int i = 0; i < cnt; i++)
	{
		out3<<a[i];
		if(i<cnt-1)
			out3<<' ';
	}
	out3.close();
	
	ifstream in3("f3.txt");
	double m;
	while (in3>>m)
	{
		cout<<m;
		if(!in3.eof())
			cout<<' ';
		else
			cout<<endl;
	}
	in3.close();
}*/