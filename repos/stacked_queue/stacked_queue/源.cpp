#include<iostream>
using namespace std;
const int maxsize=10;
class Stack
{
	int data[maxsize];
	int top;
public:
	Stack();
	bool pop();
	bool push(int);
	int gtop();
	bool empty();
	bool full();
};

Stack::Stack()
{
	top=0;
}

bool Stack::pop()
{
	if(top==0)
		return false;
	top--;
	return true;
}

bool Stack::push(int x)
{
	if(top==maxsize)
		return false;
	data[top++]=x;
	return true;
}

int Stack::gtop()
{
	if(top!=0)
		return data[top-1];
	else
		return -1;
}

bool Stack::empty()
{
	return top==0;
}

bool Stack::full()
{
	return  top==maxsize;
}

class Queue
{
	int front;
	int rear;
	int data[maxsize];
public:
	Queue();
	bool empty();
	bool equeue(int);
	bool dqueue(int &);
	bool full();
	int len();
};

Queue::Queue()
{
	front=rear=0;
}

bool Queue::equeue(int x)
{
	if (!full())
	{
		data[rear]=x;
		rear=(rear+1)%maxsize;
		return true;
	}
	return false;
}

bool Queue::dqueue(int &x)
{
	if (!empty())
	{
		x=data[front];
		front=(front+1)%maxsize;
		return true;
	}
	return false;
}

bool Queue::empty()
{
	return front==rear;
}

bool Queue::full()
{
	return front==(rear+1)%maxsize;
}

int	queue_pop(Queue& a)
{
	if(a.empty())
		return -1;
	Queue b;
	int x,y;
	int cnt=0;
	while (!a.empty())
	{
		cnt++;
		a.dqueue(x);
		b.equeue(x);
	}
	for (int i = 0; i < cnt-1; i++)
	{
		b.dqueue(y);
		a.equeue(y);
	}
	return x;
}
int main()
{
	Stack a,b;
	for(int i=0;i<10;i++)
		a.push(i);
	for (int i = 0; i < 10; i++)
	{
		b.push(a.gtop());
		a.pop();
	}
	for (int i = 0; i < 10; i++)
	{
		cout<<b.gtop();
		b.pop();
	}

	cout<<endl;
	Queue q;
	for (int i = 0; i < 10; i++)
	{
		q.equeue(i);
	}
	for (int i = 0; i < 10; i++)
	{
		cout<<queue_pop(q);
	}
}