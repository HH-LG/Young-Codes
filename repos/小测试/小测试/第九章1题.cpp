#include<iostream>
#include<iomanip>
using namespace std;

template <class T> void Print(T *p, int n,T lever)//打印前n项
{
	int cnt=0;
	for (int i = 0; i < n; i++)
	{
		if(p[i]>lever&&cnt==0)
		{ 
			cout<<*(p+i);
			cnt++;
		}
		else if (p[i] > lever)
		{
			cout << ' '<<*(p + i);
		}
	}
}

template<class T>void GtLever(T*p, int n, T lever)//将p数组前n个元素中大于lever的各个元素， 依次移动到该数组的最前部
{
	int cnt=0;
	for (int i = 0; i < n; i++)
	{
		if (p[i] > lever)
		{
			T temp_first=p[cnt];
			T temp_second=p[cnt+1];
			p[cnt]=p[i];
			for (int j = cnt+1; j <= i; j++)
			{
				p[j]=temp_first;
				temp_first=temp_second;
				temp_second=p[j+1];
			}
			cnt++;
		}
	}
}

int main()
{
	char a[6];
	int len,n;
	cin>>a;
	cin>>len>>n;
	int i_lever;
	int *i_p=new int[len];
	float f_lever;
	float *f_p = new float[len];
	char c_lever;
	char *c_p = new char[len+1];
	switch (a[0])
	{
		
	case 'i':
		for (int i = 0; i < len; i++)
		{
			cin>>i_p[i];
		}
		cin>>i_lever;
		GtLever(i_p,n,i_lever);
		Print(i_p,n,i_lever);
		break;
	case 'f':
		for (int i = 0; i < len; i++)
		{
			cin >> f_p[i];
		}
		cin >> f_lever;
		GtLever(f_p, n, f_lever);
		Print(f_p, n,f_lever);
		break;
	case 'c':
		for (int i = 0; i < len; i++)
		{
			cin >> c_p[i];
		}
		cin >> c_lever;
		GtLever(c_p, n, c_lever);
		Print(c_p, n,c_lever);
		break;
	default:
		break;
	}
}