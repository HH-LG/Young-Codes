//³É¹¦ÁË£¡£¡£¡£¡£¡
/*#include <iostream>
#include <string.h>
using namespace std;

class MyCalcul
{
	char str[101];
	unsigned idx;
	void readDouble(double& x);
	void readNextChar(char& ch);
public:
	MyCalcul();
	MyCalcul(char*s);
	void setStr(char*s);
	void printExp();
	void Processing_str();
};
MyCalcul::MyCalcul()
{
	idx = 0;
}

MyCalcul::MyCalcul(char*s)
{
	strcpy_s(str, s);
	str[strlen(str)] = '\0';
	idx = 0;
}

void MyCalcul::readDouble(double& x)
{
	double y = 0;
	bool judge = 1;
	int i=idx, mask = 1;
	x = 0;
	while (str[i]==' ')
	{
		i++;
	}
	for (; str[i] != '.'&&str[i] != ' '&&judge; i++)
	{
		if (str[i] >= '0'&&str[i] <= '9')
		{
			x *= 10;
			x += str[i] - '0';
		}
		else
		{ 
			judge = 0;
			i--;
		}
	}
	if(str[i]=='.')
	{
		for (i++; str[i] >= '0'&&str[i] <= '9'&&judge; i++)
		{
			mask *= 10;
			y *= 10;
			y += str[i] - '0';
		}
		y = y / mask;
		x += y;
	}
	idx = i;
}

void MyCalcul::readNextChar(char& ch)
{
	int i=idx;
	while (str[i] == ' ' || (str[i] >= '0'&&str[i] <= '9'))
	{
		i++;
	}
	ch = str[i];
	idx++;
}

void MyCalcul::setStr(char*s)
{
	strcpy_s(str, s);
	str[strlen(str)] = '\0';
	idx = 0;
}

void MyCalcul::printExp()
{
	cout << str << endl;
}

void MyCalcul::Processing_str()
{
	int thisidx;
	double first, second;
	char nextchar;
	readDouble(first);
	thisidx = idx;
	readNextChar(nextchar);
	idx=thisidx;
	while (nextchar != '=')
	{
		readDouble(second);
		readNextChar(nextchar);
		switch (nextchar)
		{
		case '+':
			first += second;
			break;
		case '-':
			first -= second;
			break;
		case '*':
			first *= second;
			break;
		case '/':
			first /= second;
			break;
		}
		thisidx = idx;
		readNextChar(nextchar);
		idx=thisidx;
	}
	cout << "the result is: " << first << endl;
}
int main()
{
	MyCalcul s((char*)"12.3 5/8.1+1.5*=");
	s.printExp();
	s.Processing_str();
}*/