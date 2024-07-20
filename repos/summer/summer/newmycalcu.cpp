/*
#include<iostream>
using namespace std;

double opfunc(double x, char op, double y)
{
	switch (op)
	{
	case '+':
		return x+y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	default:			'='
		break;
	}
}

class calcu
{
	char str[100];
	int idx;
	void readDouble(double& x);
	void readNextChar(char& op);
public:
	calcu(){idx=0;}
	calcu(char* str);
	void setStr(char* str);
	void printExp();
	void ProcessingStr();
};

calcu::calcu(char* str)
{
	this->idx=0;
	int i=0;
	for (i = 0; str[i] != '\0'; i++)
	{
		this->str[i]=str[i];
	}
	this->str[i]='\0';
}

void calcu::setStr(char* str)
{
	int i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		this->str[i] = str[i];
	}
	this->str[i] = '\0';
}

void calcu::printExp()
{
	cout<<"The expression is :"<<str;
}

void calcu::readDouble(double &x)
{
	x=0;
	if (str[idx] == '\0')
	{
		return;
	}
	int i;
	for (i = idx; str[i] >= '0'&&str[i] <= '9'; i++)
	{
		x=10*x+str[i]-'0';
		idx++;
	}
	if (str[i] == '.')
	{
		idx++;
		double mask=0.1;
		for (i = idx; str[i] >= '0'&&str[i] <= '9'; i++)
		{
			x += mask* (str[i] - '0');
			mask/=10;
			idx++;
		}
	}
}
void calcu::readNextChar(char&op)
{
	if (str[idx] == '\0')
	{
		op = str[idx];
		return ;
	}
	if (str[idx] == '+' || str[idx] == '-' || str[idx] == '*' || str[idx] == '/' || str[idx] == '=')
	{
		op=str[idx];
		idx++;
	}
	else
	{
		cout<<"read error!"<<endl;
	}
}

void calcu::ProcessingStr()
{
	double first,second;	char opf,ops;
	readDouble(first);		readNextChar(opf);
	int cnt=0;
	while (opf != '\0'&&opf!='=')
	{
		if(cnt==0)
		{ 
			readDouble(second);
			readNextChar(ops);
			cnt++;
		}
		switch (opf)
		{
		case '+':
		case '-':
			if (ops == '*' || ops == '/')
			{
				double temp;		char optmp;
				readDouble(temp);	readNextChar(optmp);
				second = opfunc(second, ops, temp);
				ops = optmp;
			}
			else
			{
				first = opfunc(first, opf, second);
				opf = ops;
				readDouble(second);
				readNextChar(ops);
			}
			break;
		case '*':
		case '/':
		default:			'='
			first=opfunc(first,opf,second);
			opf=ops;
			readDouble(second);
			readNextChar(ops);
			break;
		}
	}
	cout<<"The result is:"<<first;
}

int main()
{
	char str[80]="12.5-2.2*5/3+1.3*2=";
	calcu s(str);
	s.printExp();
	cout<<endl;
	cout<<12.5-2.2*5/3+1.3*2<<endl;
	s.ProcessingStr();
}*/