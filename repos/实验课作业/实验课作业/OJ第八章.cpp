/*#include<iostream>
using namespace std;

int pos=0;
char sub='\0';
bool bisend=false;

class String
{
	char str[40] = "1234567890";
	int count;
public:
	String();
	void S_insert(int pos, char sub);
	void S_delete(int pos);
	void S_replace(int pos, char sub);
	void S_operate(char type);
	void S_print() { cout << str<<endl; }
};

String::String()
{
	count = 10;
}
void String::S_insert(int pos, char sub)
{
	if (!(pos <= count + 1 && pos >= 0))
	{
		return;
	}
	count++;
	char first;
	char sec;
	for (int i = 0; i < count; i++)
	{
		if (i ==pos - 1)
		{
			first = str[i];
			str[i] = sub;
			for (int j = i + 1; j < count; j++)
			{
				sec = str[j];
				str[j] = first;
				first = sec;
			}
			break;
		}
	}
}

void String::S_delete(int pos)
{
	if (!(pos <= count  && pos > 0))
	{
		return;
	}
	for (int i = 0; i < count; i++)
	{
		if (i == pos - 1)
		{
			for (int j = i; j < count-1; j++)
			{
				str[j]=str[j+1];
			}
			break;
		}
	}
	str[count-1]='\0';
	count--;
}

void String::S_replace(int pos, char sub)
{
	if (!(pos <= count && pos > 0))
	{
		return;
	}
	str[pos-1]=sub;
}
void String::S_operate(char type)
{
	switch (type)
	{
	case 'i':
		cin>>pos>>sub;
		S_insert(pos,sub);
		break;
	case 'd':
		cin>>pos;
		S_delete(pos);
		break;
	case 'r':
		cin>>pos>>sub;
		S_replace(pos,sub);
		break;
	default:
		bisend=true;
		break;
	}
	if (!bisend)
	{
		S_print();
	}
}

int main()
{
	String a;
	char operation;
	while (!bisend)
	{
		cin>>operation;
		a.S_operate(operation);
	}
}*/