//real_success!!
/*#include<iostream>
using namespace std;
const int maxsize=20;
//opfunc()
double opfunc(double x, char op, double y)
{
	switch (op)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	}
}
//num_stack
class num_stack
{
	double data[maxsize];
	int top;
public:
	num_stack() {top=0;	}
	bool empty(){return top==0;}
	bool full(){return top==maxsize;}
	void push(double);
	double pop();
};

void num_stack::push(double a)
{
	if (full())
	{
		cout<<"the num_stack is full!"<<endl;
		return;
	}
	data[top]=a;
	top++;
}

double num_stack::pop()
{
	if (empty())
	{
		cout<<"the num_stack is empty!"<<endl;
		return -1;
	}
	top--;
	return data[top];
}
//op_stack
class op_stack
{
	char data[maxsize];
	int top;
public:
	op_stack() { top = 0; }
	bool empty() { return top == 0; }
	bool full() { return top == maxsize; }
	void push(char);
	char pop();
};

void op_stack::push(char a)
{
	if (full())
	{
		cout << "the op_stack is full!" << endl;
		return;
	}
	data[top] = a;
	top++;
}

char op_stack::pop()
{
	if (empty())
	{
		cout << "the op_stack is empty!" << endl;
		return -1;
	}
	top--;
	return data[top];
}

//Mycalcu2
class MyCalcu2
{
	num_stack numstack;
	op_stack opstack;
	char str[100];
	int idx;
	void inFromStr(double&x,char&op);
public:
	MyCalcu2(){idx=0;}
	MyCalcu2(char*s) {idx=0;strcpy_s(str,s);}
	void setStr(char*s){strcpy_s(str,s); }
	void printExp();
	void Processing_str();
};

void MyCalcu2::printExp()
{
	cout<<"Input EXPRESSION::"<<str<<endl;
}

void MyCalcu2::inFromStr(double&x, char&op)
{
	int i=idx;
	bool judge=false,op_judge=false;
	x=0;
	double weigth=0.1;
	for (; str[i] != '\0'; i++)
	{
		if (str[i] >= '0'&&str[i] <= '9')
		{
			if (!judge)
			{
				x=10*x+str[i]-'0';
			}
			else
			{
				x+=weigth*(str[i]-'0');
				weigth/=10;
			}

		}
		else
		{
			if (str[i] =='.')
			{
				judge=true;
			}
			else 
			{
				op=str[i];
				op_judge=true;
			}
		}
		if (op_judge)
		{
			break;
		}
	}
	idx=i+1;
}

void MyCalcu2::Processing_str()
{
	char op1,op2;
	double x,y,res;
	inFromStr(x,op1);
	while (op1!='=') 
	{
		switch (op1)
		{
		case '+':
		case '-':
			numstack.push(x);
			opstack.push(op1);
			inFromStr(x,op1);
			break;
		case '*':
		case '/':
			inFromStr(y, op2);
			res=opfunc(x,op1,y);
			x=res;
			op1=op2;
			break;
		}
	}
	numstack.push(x);
	opstack.push(op1);
	num_stack num;
	op_stack op;
	while (numstack.empty() == false) { num.push(numstack.pop()); }
	while (opstack.empty()== false) { op.push(opstack.pop()); }
	while (true)
	{
		x=num.pop();
		if(num.empty()==false)
		y=num.pop();
		else
		{
			cout << "The solution is " << x << endl;
			return;
		}
		op1=op.pop();
		res=opfunc(x,op1,y);
		num.push(res);
	}
}
//main
int main()
{
	MyCalcu2 s((char*)"8-3*5+6=");
	s.printExp();
	s.Processing_str();
}*/