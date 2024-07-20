/*#include<iostream>
using namespace std;

template<class T,int maxsize>
class queue
{
	T data[maxsize];
	int head;
	int tail;
	int cnt;
public:
	queue(){head=tail=0;cnt=0;}
	void push(T data);
	T pop();
	void dele(T data);
	int find(T data);
	void print();
};
template<class T,int maxsize>
void queue<T, maxsize>::push(T data)
{
	if (cnt == 0)
	{
		this->data[0]=data;
		head=tail=0;
		cnt++;
		return;
	}
	if (cnt == maxsize)
	{
		cout<<"A full queue!"<<endl;
		return;
	}

	cnt++;

	tail++;
	if (tail == maxsize)
	{
		tail=0;
	}
	this->data[tail]=data;

}

template<class T,int maxsize>
T queue<T, maxsize>::pop()
{
	if (cnt == 0)
	{
		cout<<"A empty queue!"<<endl;
		return (T)-1;
	}

	cnt--;
	
	T a=data[head];
	head++;
	if (head == maxsize)
	{
		head=0;
	}
	return a;

}

template<class T, int maxsize>
void queue<T, maxsize> ::dele(T data)
{
	if (cnt == 0)
	{
		return;
	}

	cnt--;

	T sec=this->data[head];

	for (int i = head; i != tail;i++ )
	{
		i%=maxsize;
		if (this->data[i] == data)
		{
			for (int j = head; j != i; j++)
			{
				j%=maxsize;
				T fir=sec;

				int a=j+1;
				if (a == maxsize)
				{
					a=0;
				}
				sec=this->data[a];

				this->data[a]=fir;
			}
			head=(head+1)%maxsize;
		}
	}
	if(this->data[tail]==data)
	{ 
		tail--;
		if(tail==-1)
			tail=maxsize-1;
	}
}

template<class T, int maxsize>
int queue<T, maxsize> ::find(T data)
{
	if (cnt == 0)
	{
		return -1;
	}

	for (int i = head; i != tail; i++)
	{
		i%=maxsize;
		if (this->data[i] == data)
		{
			return i;
		}
	}
	if (data == this->data[tail])
	{
		return tail;
	}

	return -1;
}

template<class T, int maxsize>
void queue<T, maxsize> ::print()
{
	if(cnt==0)
		return;
	for (int i = head; i != tail; i++)
	{
		i%=maxsize;
		cout<<data[i]<<' ';
	}
	cout<<data[tail]<<endl;
}
int main()
{
	queue<double,20> q1;
	for (int i = 0; i < 15; i++)
	{
		q1.push(2*i+i*i/7.0);
	}
	for (int i = 0; i < 10; i++)
	{
		q1.push(2*i/17.0);
	}
	q1.print();
	for (int i = 0; i < 10; i++)
	{
		cout<<q1.pop()<<' ';
	}
	cout<<q1.find(2)<<endl;

	q1.print();
	q1.dele(21);
	q1.print();
}*/