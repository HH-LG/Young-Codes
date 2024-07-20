//Ñî»ÔÈı½Ç
/*#include<iostream>
#include<iomanip>
using namespace std;

void yanghui(int n);

int main()
{
	int n;
	cin>>n;
	yanghui(n);
}

void yanghui(int n)
{
	int* line = new int[n];
	for (int i = 0; i < n; i++)
	{
		line[i]=0;
	}
	line[0]=1;
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			cout.setf(ios::internal,ios::adjustfield);
			cout<<setw(5*n)<<line[0]<<endl;
		}
		else
		{
			for (int j = i; j>0 ; j--)
			{
				line[j]=line[j-1]+line[j];
			}
			for (int j = 0; j <= i; j++)
			{
					cout.setf(ios::internal, ios::adjustfield);
				if (j == 0)
				{
					cout<<setw(5*n-3*i)<<line[j]<<' ';
				}
				else
				{
					cout<<setw(5)<<line[j]<<' ';
				}
				
			}
			cout<<endl;
		}
	}
}*/