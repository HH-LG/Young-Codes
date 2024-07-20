#pragma once
#include<iostream>
#include<stack>
using namespace std;
const int maxsize =20;
template<class ElemType>
class list
{
	ElemType data[maxsize];
	int len;
public:
	list(){len=0;}
	// test 01
	void input()
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>data[i];
		len=n;
	}
	void out()
	{
		for(int i=0;i<len;i++)
			cout<<data[i]<<' ';
		cout<<endl;
	}
	bool del_min(ElemType& min)
	{
		if(len==0)
			return false;
		int temp=0;
		for (int i = 1; i < len; i++)
			if(data[i]<data[temp])
			{ 
				temp=i;
				min = data[i];
			}
		data[temp]=data[len-1];
		len--;
		return true;
	}

	// test 02
	void reverse()
	{
		for (int i = 0; i < len/2; i++)
		{
			ElemType tmp=data[i];
			data[i]=data[len-1-i];
			data[len-1-i]=tmp;
		}
	}

	//test 03
	void dele_x(ElemType x)
	{
		int k=0;
		for (int i = 0; i < len; i++)
		{
			if (data[i] != x)
			{
				data[k]=data[i];
				k++;
			}
		}
		len=k;
	}

	//test 04 有序顺序表
	bool dele_range1(ElemType a,ElemType b)
	{
		if(len==0||a>=b)
			return false;
		int k=0;
		for (int i = 0; i < len; i++)
		{
			if (!(a < data[i]&&data[i]<b))
			{
				data[k] = data[i];
				k++;
			}
		}
		len=k;
		return true;
	}
	bool dele_range2(ElemType a, ElemType b)
	{
		if(len==0||a>=b)
			return false;
		int i;
		for(i=0;data[i]<a;i++);
		if(i>=len)
			return false;
		int j;
		for(j=len-1;data[j]>b;j--);
		if(j<0)
			return false;
		for (int k = j + 1; k < len; k++)
		{
			data[i]=data[k];
			i++;
		}
		len=len-(j-i)-1;
		return true;
	}
	bool dele_range3(ElemType a, ElemType b)
	{
		if (len == 0 || a >= b)
			return false;
		int i,j;
		for (i = 0; data[i] < a; i++);
		if (i >= len)
			return false;
		for (j = i; data[j] <= b; j++);
		for ( ;j < len; j++,i++)
			data[i]=data[j];
		len = i;
		return true;
	}
	//test 05
	bool dele_range05(ElemType a, ElemType b)
	{
		if (len == 0 || a >= b)
			return false;
		int k = 0;
		for (int i = 0; i < len; i++)
		{
			if (!(a <= data[i] && data[i] <= b))
			{
				data[k] = data[i];
				k++;
			}
		}
		len = k;
		return true;
	}
	//test 06
	void drop_duplicates()
	{
		int k=0;
		for (int i = 0; i < len - 1; i++)
			if (data[i] != data[i + 1])
			{
				data[k]=data[i];
				k++;
			}
		len=k;
	}
	//test 09 有序顺序表
	bool find_x(ElemType x,int &posi)
	{
		int floor=0,ceil=len-1;
		int pos= (floor + ceil) / 2;
		int i,k;
		while (floor<=ceil&&data[pos]!=x)
		{
			if (data[pos] < x)
				floor=pos+1;
			else
				ceil=pos-1;
			pos = (floor + ceil) / 2;
		}
		if (floor > ceil)
		{
			for(i=len-1;i>ceil;i--)
				data[i+1]=data[i];
			data[ceil+1]=x;
			return false;
		}
		posi=pos;
		if (pos != len - 1)
		{
			ElemType t = data[pos];
			data[pos] = data[pos + 1];
			data[pos+1]= t;
		return true;
		}
	}
	//test 10 
	void reverse(int s, int e)
	{
		for (int i = 0; i < (e-s+1)/2; i++)
		{
			ElemType tmp = data[s+i];
			data[s+i]=data[e-i];
			data[e-i]=tmp;
		}
	}
	void circular_move(int p)
	{
		p%=len;
		reverse(0,p-1);
		reverse(p,len-1);
		reverse();
	}
	//test 11
	template<class ElemType>
	friend ElemType find_mid(list<ElemType>& a, list<ElemType>& b)
	{
		return find_mid(a,b,0,a.len-1,0,a.len-1);
	}
	template<class ElemType>
	friend ElemType find_mid(list<ElemType>& a, list<ElemType>& b,int s1,int e1,int s2,int e2);
	//test 12
	ElemType find_major()
	{
		if(len==0)
			return -1;
		int i,cnt=1;
		ElemType tmp=data[0];
		for (i = 1; i < len; i++)
		{
			if (data[i] == tmp)
			{
				cnt++;
			}
			else
			{
				cnt--;
			}
			if (cnt == 0)
			{
				cnt=1;
				tmp=data[i];
			}
		}
		cnt=0;
		for(i=0;i<len;i++)
			if(data[i]==tmp)
				cnt++;
		if(cnt>len/2)
			return tmp;
		else
			return -1;
	}
	//test 13
	int find_min_natural()
	{
		bool* p = new bool[ len ];
		int i = 0;
		for(;i<len;i++)
			p[i]=false;
		for(i=0;i<len;i++)
			if(data[i]>0&&data[i]<=len)
				p[data[i]-1]=true;
		for(i=0;i<len;i++)
			if(!p[i])
				return i+1;
		return len+1;
	}

};

template<class ElemType>
ElemType find_mid(list<ElemType>& a, list<ElemType>& b, int s1, int e1, int s2, int e2)
{
	if(s1==e1)
		return a.data[s1]<b.data[s2]?a.data[s1]:b.data[s2];
	if (a.data[(s1 + e1) / 2] < b.data[(s2 + e2) / 2])
	{
		int ns1= (s1 + e1) / 2;
		int ne2= (s2 + e2) / 2;
		if ((s1 + e1) % 2 != 0)
			ns1++;
		return find_mid(a,b,ns1,e1,s2,ne2);
	}
	else if (a.data[(s1 + e1) / 2] > b.data[(s2 + e2) / 2])
	{
		int ns2= (s2 + e2) / 2;
		int ne1= (s1 + e1) / 2;
		if((s2 + e2)%2!=0)
			ns2++;
		return find_mid(a, b, s1, ne1, ns2, e2);
	}
	else
		return a.data[(s1 + e1) / 2];
}

//test14 三个数组按照升序储存，找最短三元组距离
#define INT_MAX 0x7fffffff

int abs_(int a, int b)
{
	return a>b?a-b:b-a;
}

bool is_min(int a, int b, int c)
{
	if(a<=b&&a<=c)
		return true;
	else
		return false;
}

int find_min_d(int A[], int n, int B[], int m, int C[], int p)
{
	int i=0,j=0,k=0,d_min=INT_MAX;
	int d;
	while (i < n&&j < m&&k < p)
	{
		d=abs_(A[i],B[j])+abs_(A[i], C[k])+abs_(B[j],C[k]);
		if(d<d_min)
			d_min=d;
		if(is_min(A[i], B[j], C[k]))
			i++;
		else if(is_min(B[j], A[i], C[k]))
			j++;
		else
			k++;
	}
	return d_min;
}
