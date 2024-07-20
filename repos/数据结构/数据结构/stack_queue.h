#pragma once
#include<iostream>
#include<stack>
using namespace std;
const int max_size=100;
class share_stack
{
	int data[max_size],top1,top2;
public:
	share_stack():top1(-1),top2(max_size){}
	//test05
	bool push_left(int x)
	{
		if(top2-top1==1)
			return false;
		data[++top1]=x;
		return true;
	}
	bool push_right(int x)
	{
		if (top2 - top1 == 1)
			return false;
		data[--top2] = x;
		return true;
	}
	bool pop_left(int &x)
	{
		if(top1==-1)
			return false;
		x=data[top1--];
		return true;
	}
	bool pop_right(int &x)
	{
		if(top2==max_size)
			return false;
		x=data[top2++];
		return true;
	}
};
//test03
bool is_valid(char a[])
{
	int count=0,i=0;
	while (a[i] != '\0')
	{
		if(a[i]=='I')
			count++;
		else
			count--;
		if(count<0)
			return false;
		i++;
	}
	if(count==0)
		return true;
	return false;
}

//queue test01
class cir_queue
{
	int data[maxsize],front,rear;
	bool tag;
public:
	cir_queue() :front(0), rear(maxsize - 1), tag(0) {}
	bool empty()
	{
		return front==(rear+1)%maxsize&&tag==0;
	}
	bool full()
	{
		return front==(rear+1)%maxsize&&tag==1;
	}
	void get_in(int x)
	{
		if(full())
			return;
		tag=true;
		rear=(rear+1)%maxsize;
		data[rear]=x;
	}
	int get_out()
	{
		if (empty())
			return -1;
		tag = false;
		int x=data[front];
		front = (front + 1) % maxsize;
		return x;
	}
};

//test03
class queue_s
{
	stack<int> store,out;
public:
	void enqueue(int x)
	{
		store.push(x);
	}
	int dequeue()
	{
		while (!store.empty())
		{
			out.push(store.top());
			store.pop();
		}
		int x=out.top();
		out.pop();
		while (!out.empty())
		{
			store.push(out.top());
			out.pop();
		}
		return x;
	}
	bool empty()
	{
		return store.empty();
	}
};

// test04
struct Node
{
	int data;
	Node* next;
};
class better_queue
{
	Node* head,*rear;
public:
	better_queue(){head=new Node();rear=head;head->next=head; }
	void enqueue(int x)
	{
		if(rear->next=head)
		{
			Node* t = new Node();
			t->data = x;
			t->next=head;
			rear->next=t;
			rear=t;
			return;
		}
		rear=rear->next;
		rear->data=x;
	}
	int dequeue()
	{
		if (head==rear)
		{
			return -1;
		}
		int x=head->next->data;
		head=head->next;
		return x;
	}
	bool empty()
	{
		return head==rear;
	}
};

//栈和队列的应用
//test01
bool match(char a[])
{
	stack<char> s;
	int i=0;
	while (a[i] != '\0')
	{
		if(a[i]=='('|| a[i] == '[' || a[i] == '{')
			s.push(a[i]);
		else
			switch (a[i])
			{
			case ')':
				if (s.top() == '(')
					s.pop();
				else
					return false;
				break;
			case ']':
				if(s.top()=='[')
					s.pop();
				else
					return false;
				break;
			case '}':
				if (s.top() == '{')
					s.pop();
				else
					return false;
				break;

			}
		i++;
	}
	if(s.empty())
		return true;
	else
		return false;
}

//test02
void adjust(char a[])
{
	int i=0;
	stack<char> s;
	while (a[i] != '\0')
	{
		cout<<"push ";
		s.push(a[i]);
		if(s.top()=='s')
		{
			cout<<"pop ";
			s.pop();
		}
		i++;
	}
	while (!s.empty())
	{
		cout<<"pop ";
		s.pop();
	}
}

//test03
double px(double x,int n)
{
	struct stack {
		int no;
		double val;
	}st[maxsize];
	int top=-1,i;
	double fv0=1,fv1=2*x;
	for (i = n; i >= 2; i--)
	{
		top++;
		st[top].no=i;
	}
	while (top >= 0)
	{
		st[top].val=2*x*fv1-2*(st[top].no-1)*fv0;
		fv0=fv1;
		fv1=st[top].val;
		top--;
	}
	if(n==0)
		return fv0;
	else 
		return fv1;
}