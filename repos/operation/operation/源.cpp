#include<iostream>
#include"Stack.h"
#include"Stack.cpp"
using namespace std;

int out_prior(char op)
{
	switch (op)
	{
	case '+':
		return 1;
	case '-':
		return 1;
	case '*':
		return 3;
	case '/':
		return 3;
	case '(':
		return 5;
	case ')':
	case '#':
		return -1;
	}
}

int opfunc(int a, char op, int b)
{
	switch (op)
	{ 
	case '+':
		return a+b;
	case '-':
		return a-b;
	case '*':
		return a*b;
	case '/':
		return a/b;
	default:
		break;
	}
}

void readfromstr(int& x, char* str, int& index)
{
	x=0;
	while (str[index] >= '0'&&str[index] <= '9')
	{
		x=x*10+str[index]-'0';
		index++;
	}
}
int in_prior(char op)
{
	switch (op)
	{
	case '+':
		return 2;
	case '-':
		return 2;
	case '*':
		return 4;
	case '/':
		return 4;
	case '(':
		return -1;
	case ')':
	case '#':
		return -1;
	}
}
int eval(char* str)
{
	Stack<char> operators;
	Stack<int>  operands;
	operators.push('#');
	int index=0;
	while (str[index] != '\0')
	{
		char cmd=str[index];
		if (cmd == '(' || cmd == '-' || cmd == '+' || cmd == '*' || cmd == '/')
		{
			if (in_prior(operators.gtop()) < out_prior(cmd))
			{
				operators.push(cmd);
				index++;
			}
			else
			{
				int op1=operands.gtop();
				operands.pop();
				int op2=operands.gtop();
				operands.pop();
				int operation=operators.gtop();
				operators.pop();
				operands.push(opfunc(op2,operation,op1));
			}
		}
		else if (cmd == ' ')
		{
			index++;
		}
		else if (cmd == ')')
		{
			while (operators.gtop() != '(')
			{
				char op=operators.gtop();
				operators.pop();
				int op1 = operands.gtop();
				operands.pop();
				int op2 = operands.gtop();
				operands.pop();
				operands.push(opfunc(op2, op, op1));
			}
			operators.pop();
			index++;
		}
		else
		{
			int x;
			readfromstr(x,str,index);
			operands.push(x);
		}
	}
	if (operators.gtop() != '#')
	{
		char op=operators.gtop();
		operators.pop();
		int op1=operands.gtop();
		operands.pop();
		int op2=operands.gtop();
		operands.pop();
		operands.push(opfunc(op2,op,op1));
	}
	return operands.gtop();
}

int main()
{
	char a[20];
	cin>>a;
	cout<<eval((char*)a);
}