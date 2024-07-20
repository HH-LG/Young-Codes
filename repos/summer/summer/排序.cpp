/*#include<iostream>
using namespace std;
#include<fstream>
struct mydata
{
	int i;
	double d;
	char c;
};
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
		if (i < 15)
			out1 << ' ';
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
	
	bool b1,b2;
	b1=(bool)(in1>>a1);
	b2=(bool)(in2>>a2);
	while (b1&&b2)
	{
		if (a1 < a2)
		{
			out3<<a1<<' ';
			b1 = (bool)(in1 >> a1);
		}
		else
		{
			out3<<a2<<' ';
			b2 = (bool)(in2 >> a2);
		}
	}
	if (b1)
	{
		while(b1)
		{
			out3 << a1;
			b1 = (bool)(in1 >> a1);
			if(b1)
				out3<<' ';
		}
	}
	else
	{
		while(b2)
		{
			out3 << a2;
			b2 = (bool)(in2 >> a2);
			if (b2)
				out3 << ' ';
		}
	}
	in1.close();
	in2.close();
	out3.close();

	ifstream in3("f3.txt");
	double m;
	while (in3 >> m)
	{
		cout << m;
		if (!in3.eof())
			cout << ' ';
		else
			cout << endl;
	}
	in3.close();
}*/