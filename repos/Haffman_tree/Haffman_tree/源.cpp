#include"Huffman_tree.h"
#include<iostream>
#include<fstream>
#include<list>
using namespace std;
int len(char* str)
{
	int l=0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		l++;
	}
	return l;
}

int main()
{
	extern int cnt;
	extern code table[100];


	ofstream ofs("outfile2.txt");
	Tree_node ch;
	Tlist ch_l;
	
	code t[100];
	for(int i=0;i<100;i++)
		t[i].freq=0;
	int count=0;

	ifstream ifs("inputfile1.txt");
	char x;
	ifs.get(x);
	while (!ifs.eof())
	{
		ofs.put(x);
		int i ;
		bool judge=false;
		for (i= 0; i < count; i++)
		{
			if (t[i].ch == x)
			{
				t[i].freq++;
				judge=true;
				break;
			}
		}
		if (i == count&&judge==false)
		{

			t[i].ch=x;
			t[i].freq++;
			count++;
		}
		ifs.get(x);
	}
	for (int i = 0; i < count; i++)
	{

		ch.ch=t[i].ch;
		ch.freq=t[i].freq;
		ch_l.insert(ch);
	}
	ch_l.getcode();

	ofs.close();
	ofs.open("outfile1.txt");
	for (int i = 0; i < cnt; i++)
	{
		ofs<<table[i]<<endl;
	}
	ofs.close();

	ofs.open("data.dat");
	ifs.close();
	ifs.open("inputfile1.txt");

	ifs.get(x);
	while (!ifs.eof())
	{
		int i;
		for (i = 0; i < count; i++)
		{
			if(table[i].ch==x)
				break;
		}
		ofs<<table[i].cod;
		ifs.get(x);
	}
	
	int after_zip=0;
	int before_zip=0;
	for (int i = 0; i < cnt; i++)
	{
		after_zip+=len(table[i].cod)*table[i].freq;
		before_zip+=8*table[i].freq;
	}
	cout<<"weigth of new str is "<<after_zip<<endl;
	cout<<"weigth of original str is "<<before_zip<<endl;
	cout<<"ratio of compression is "<<(double)after_zip/before_zip;
	cout<<endl;
	cout<<(int)table[17].ch;
}