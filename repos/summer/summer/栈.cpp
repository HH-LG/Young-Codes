/*#include<iostream>
using namespace std;

//正常stack
const int maxsize=20;
class stack
{
	int data[maxsize];
	int cnt;
public:
	stack(){cnt=0;};
	int pop();
	void push(int a);
	bool is_empty();
	bool is_full();
	friend ostream& operator<<(ostream& out,stack& a);
};
ostream& operator<<(ostream& out, stack& a)
{
	for (int i = 0; i < a.cnt; i++)
	{
		out<<a.data[i];
		out<<' ';
	}
	return out;
}

bool stack::is_full()
{
	if (cnt != maxsize)
	{
		return false;
	}
	else
		return true;
}
bool stack::is_empty()
{
	if (cnt > 0)
	{
		return false;
	}
	else
		return true;
}
int stack::pop()
{
	if (is_empty())
	{
		cout<<"An empty stack!!!"<<endl;
		return -1;
	}
	cnt--;
	return data[cnt];
}
void stack::push(int a)
{
	if (is_full())
	{
		cout << "A full stack!!!" << endl;
		return;
	}
	data[cnt]=a;
	cnt++;
}

//改良版，模板法
template<class T,int size>
class mystack
{
	T data[size];
	int cnt;
public:
	mystack(){cnt=0;}
	T pop();
	void push(T a);
	bool is_empty();
	bool is_full();
	 template<class T,int size>friend ostream& operator<<(ostream& out,mystack<T,size>&a);
};

template<class T, int size>
bool mystack<T, size>::is_empty()
{
	if (cnt == 0)
		return true;
	else
		return false;
}

template<class T, int size>
bool mystack<T, size>::is_full()
{
	if (cnt == size)
		return true;
	else
		return false;
}

template<class T,int size>
T mystack<T, size>::pop()
{
	if (is_empty())
	{
		cout << "An empty stack!!!" << endl;
		return -1;
	}
	cnt--;
	return data[cnt];
}

template<class T, int size>
void mystack<T, size>::push(T a)
{
	if (is_full())
	{
		cout << "A full stack!!!" << endl;
		return;
	}
	data[cnt] = a;
	cnt++;
}

template<class T, int size>
ostream& operator<<(ostream& out, mystack<T, size>&a)
{
	for (int i = 0; i < a.cnt; i++)
	{
		out<<a.data[i];
		out<<' ';
	}
	return out;
}
int main()
{
	stack a;
	for (int i = 0; i < 30; i++)
	{
		a.push(i*i);
	}
	cout<<a<<endl;
	for (int i = 0; i < 20; i++)
	{
		cout<<a.pop()<<endl;
	}

	mystack<double,25> b;
	for (int i = 0; i < 30; i++)
	{
		b.push((10+i*0.1)* (10 + i * 0.1));
	}
	cout<<b;
	for (int i = 0; i < 25; i++)
	{
		cout<<b.pop()<<endl;
	}
}*/