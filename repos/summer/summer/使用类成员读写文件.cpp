//get(),put(),write(),read(),getline()
/*
#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	//get(),put()
	ofstream outfile("my_word.txt");
	char a[30];
	cin.getline(a,30);
	int i=0;
	while (a[i] != '\0')
	{
		outfile.put(a[i++]);
	}
	cout<<"len:"<<i<<endl;
	outfile.close();

	//错误示范，会导致多读

	//ifstream infile("my_word.txt");
	//char s;
	//i=0;
	//while (!infile.eof())
	//{
	//	infile.get(s);
	//	i++;
	//	cout<<s;
	//}
	//cout << "len:" << i << endl;
	//infile.close();

	ifstream infile("my_word.txt");
	char s;
	i=0;
	infile.get(s);
	while (!infile.eof())
	{
		cout<<s;
		i++;
		infile.get(s);
	}
	cout<<endl;
	cout << "len:" << i << endl;
	infile.close();

	//read(),write()
	ofstream outfile1("my_bin.bin",ios::binary);

	char name[30]="朱世豪";
	int index=2113713;
	double GPA=93.26;

	outfile1.write(name,sizeof(name));
	outfile1.write((char*)(&index),sizeof(int));
	outfile1.write((char*)(&GPA),sizeof(double));
	outfile1.close();

	char str[30];
	int d;
	double mark;

	ifstream infile1("my_bin.bin",ios::binary);
	infile1.read(str,sizeof(name));
	infile1.read((char*)(&d),sizeof(int));
	infile1.read((char*)(&mark),sizeof(double));
	infile1.close();

	cout<<sizeof(name)<<endl;
	cout<<str<<endl;
	cout<<d<<endl;
	cout<<mark;

	cout<<endl;
	//getline

	ifstream infile2("text.txt",ios::_Nocreate);
	char line[160];int len2=0;
	
	while (!infile2.eof())
	{
		cout << "infile2.tellg():" << infile2.tellg()<<' ';
		infile2.getline(line,160);
		cout<<line<<endl;
		len2++;
	}
	cout << "infile2.tellg():" << infile2.tellg();
	cout<<endl;
	cout<<"len:"<<len2<<endl;
	infile2.close();


	//测试片段:infile4用于了解工作机制
	//ifstream infile3("text.txt",ios::_Nocreate);
	//char line3[160]; int len3 = 0;

	//cout << "infile3.tellg():" << infile3.tellg()<<endl;

	//infile3.getline(line3, 160);
	//while (!infile3.eof())
	//{
	//	cout << "infile3.tellg():" << infile3.tellg();
	//	cout << line3 << endl;
	//	len3++;
	//	infile3.getline(line3, 160);
	//}
	//cout << "len:" << len3 << endl;
	//cout << "infile3.tellg():" << infile3.tellg()<<endl;
	//infile2.close();

	//ifstream infile4("text.txt", ios::_Nocreate);
	//char p;

	//cout << "infile4.tellg():" << infile4.tellg()<<endl;
	//infile4.get(p);
	//while (!infile4.eof())
	//{
	//	cout<<"infile4.tellg():"<< infile4.tellg()<<' ';
	//	cout<<p<<endl;
	//	infile4.get(p);
	//}
	//infile4.close();
}*/