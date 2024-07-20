/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream ofs1("f1.bin",ios::binary);
	ofstream ofs2("f2.bin", ios::binary);
	for (int i = 1; i <= 15; i++)
	{
		double d1=i*i+0.5;
		double d2=10*i+0.5;
		ofs1.write((char*)&d1, sizeof(double));
		if(i<=10)
		ofs2.write((char*)&d2, sizeof(double));
	}
	double d=357.9;
	ofs2.write((char*)&(d),sizeof(double));
	ofs1.close();
	ofs2.close();
	ifstream ifs1("f1.bin",ios::binary);
	ifstream ifs2("f2.bin",ios::binary);
	ofstream ofs3("f3.bin",ios::binary);

	double d1,d2;
	ifs1.read((char*)&d1,sizeof(double));
	ifs2.read((char*)&d2, sizeof(double));
	while (!ifs1.eof() && !ifs2.eof())
	{
		if (d1 < d2)
		{
			ofs3.write((char*)&d1,sizeof(double));
			ifs1.read((char*)&d1, sizeof(double));
		}
		else
		{
			ofs3.write((char*)&d2, sizeof(double));
			ifs2.read((char*)&d2, sizeof(double));
		}
	}
	if (ifs1.eof())
	{
		while (ifs2)
		{
			ofs3.write((char*)&d2, sizeof(double));
			ifs2.read((char*)&d2, sizeof(double));
		}
	}
	else
	{
		while (ifs1)
		{
			ofs3.write((char*)&d1, sizeof(double));
			ifs1.read((char*)&d1, sizeof(double));
		}
	}
	ifs1.close();
	ifs2.close();
	ofs3.close();
	ifstream ifs3("f3.bin",ios::binary);
	ifs3.read((char*)&d1,sizeof(double));
	while (!ifs3.eof())
	{
		cout<<d1<<endl;
		ifs3.read((char*)&d1, sizeof(double));
	}
	ifs3.close();
}*/