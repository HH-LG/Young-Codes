/*#include<iostream>
using namespace std;
bool in(int ,int);	
void eliminate(int,int);
void find();
int n;	
int a[30][30];
int main()
{
	int i,j;
	cin>>n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin>>a[i][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (in(i, j))
			{
				a[i][j]=2;
			}
		}
	}
	find();
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout<<a[i][j];
			if(j<n-1)
				cout<<' ';
		}
		if(i<n-1)
		cout<<endl;
	}
}
bool in(int x, int y)
{
	int i,j;
	bool judge[4]={0};
	if(a[x][y]==1)
		return false;
	for (i = x,j=y; i >= 0; i--)
	{
		if (a[i][j] == 1)
		{
			judge[0]=true;
		}
	}
	for (i = x,j=y; i <n; i++)
	{
		if (a[i][j] == 1)
		{
			judge[1] = true;
		}
	}
	for (i=x,j= y; j >= 0; j--)
	{
		if (a[i][j] == 1)
		{
			judge[2] = true;
		}
	}
	for (i = x, j = y; j < n; j++)
	{
		if (a[i][j] == 1)
		{
			judge[3] = true;
		}
	}
	if (judge[0] && judge[1] && judge[2] && judge[3])
	{
		return true;
	}
	else
		return false;
}
void find()
{
	int i,j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] == 2 && (a[i - 1][j] == 0 || a[i + 1][j] == 0 || a[i][j + 1] == 0 || a[i][j - 1] == 0))
			{
				eliminate(i,j);
			}
		}
	}
}
void eliminate(int x,int y)
{
	a[x][y]=0;
	if (a[x - 1][y] == 2)
	{
		eliminate(x-1,y);
	}
	if (a[x + 1][y] == 2)
	{
		eliminate(x +1, y);
	}
	if (a[x ][y-1] == 2)
	{
		eliminate(x , y-1);
	}	
	if (a[x ][y+1] == 2)
	{
		eliminate(x , y+1);
	}
	return;
}*/