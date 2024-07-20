/*#include<iostream>
using namespace std;

class String
{
	char str[30]="1234567890";
	int count;
public:
	String();
	void S_insert(int pos,char sub);
	void S_delete(int pos);
	void S_replace(int pos,char sub);
	void S_operate(char type);
	void S_print(){cout<<str;}
};

String::String()
{
	count=10;
}
void String::S_insert(int pos, char sub)
{
	if (pos > count + 1 || pos <= 0)
	{
		return;
	}
	count++;
	int cnt=0;
	char first;
	char sec;
	for (int i = 0; i < count; i++)
	{
		if (i = pos - 1)
		{
			first=str[i];
			str[i]=sub;
			for (int j = i + 1;j<count;j++)
			{
				sec=str[j];
				str[j]=first;
				first=sec;
			}
			break;
		}
	}
}

void String::S_delete(int pos)
{}

void String::S_replace(int pos, char sub)
{}
void String::S_operate(char type)
{}

int main()
{
	String a;
	a.S_insert(1,'a');
	a.S_print();
}*/