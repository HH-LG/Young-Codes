#include<iostream>
using namespace std;
const int maxsize=20;//for testing
struct node
{
	double data;
	int next;
	node(double data=0,int next=0):data(data),next(next){}
};
class list
{
	node v[maxsize];
	int freelist;
	int cnt;
public:
	list();
	bool insert(int index,double dt);
	bool remove(int index);
	void print();
	double get(int index);
};

list::list()
{
	cnt=1;
	v[0].next=-1;
	freelist=-1;
}

bool list::insert(int index,double dt)
{
	int curr=0;
	int count=0;
	while (v[curr].next != -1)
	{
		if (count == index - 1)
			break;
		curr=v[curr].next;
		count++;
	}
	if(count!=index-1)
		return false;
	if (freelist == -1)
	{
		v[cnt].data=dt;
		v[cnt].next=v[curr].next;
		v[curr].next=cnt;
		cnt++;
		return true;
	}
	int t=freelist;
	freelist=v[freelist].next;
	v[t].data=dt;
	v[t].next=v[curr].next;
	v[curr].next=t;
	return true;
}
bool list::remove(int index)
{
	int curr=0;
	int count=0;
	while (v[curr].next != -1)
	{
		if(count==index-1)
			break;
		count++;
		curr=v[curr].next;
	}
	if(count!=index-1)
		return false;
	int t=v[curr].next;
	v[curr].next=v[v[curr].next].next;

	v[t].next=freelist;
	freelist=t;
}

void list::print()
{
	int curr=0;
	while (v[curr].next != -1)
	{
		curr=v[curr].next;
		cout<<v[curr].data<<' ';
	}
	cout<<"over!";
}
double list::get(int index)
{
	int curr=0;
	int count=0;
	while (v[curr].next != -1)
	{
		if(count==index)
			break;
		count++;
		curr=v[curr].next;
	}
	if(count==index)
		return v[curr].data;
	return -1;
}

int main()
{
	list l;
	for (int i = 0; i < 10; i++)
	{
		l.insert(i+1,(i+1)*(i+1));
	}
	l.remove(5);
	l.insert(10,25);
	l.print();
	cout<<endl;
}