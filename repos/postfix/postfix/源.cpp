#include<iostream>
using namespace std;
const int maxsize=10;
template<class T>
class stack
{
	int top;
	T data[maxsize];
public:
	stack(){top=0;}
	bool empty(){return !top;}
	T pop(){if(top==0)return -1;top--;return data[top];}
	void push(T d){if(top==maxsize)return;data[top++]=d; }
	T get_top(){return data[top-1]; }
};
int out_prior(char a)
{
	switch (a)
	{
		case '(':
			return 5;
		case ')':
			return 0;
		case '+':
			return 1;
		case '-':
			return 1;
		case '*':
			return 3;
		case '/':
			return 3;
	}
}
int in_prior(char a)
{
	switch (a)
	{
	case '(':
		return -1;
	case '+':
		return 2;
	case '-':
		return 2;
	case '*':
		return 4;
	case '/':
		return 4;
	case '#':
		return -1;
	}
}
void get_postfix(char* str)
{
	stack<char> s;
	int index=0;
	s.push('#');
	while (str[index] != '\0')
	{
		if (str[index] >= '0'&&str[index] <= '9')
		{
			cout<<str[index++]<<' ';
		}
		else
		{
			
			if (in_prior(s.get_top()) < out_prior(str[index]))
			{
				s.push(str[index++]);
			}
			else if (out_prior(str[index]) == 0)
			{
				while (s.get_top() != '(')
				{
					cout<<s.pop()<<' ';
				}
				s.pop();
				index++;
			}
			else
			{
				cout<<s.pop()<<' ';
				s.push(str[index++]);
			}
		}
	}
	while (!(s.get_top() == '#'))
	{
		cout<<s.pop()<<' ';
	}
}

int main() 
{
	char a[20];
	cin>>a;
	get_postfix(a);
}