/*#include<iostream>
using namespace std;
int main()
{
		int i,j;
		int a[200];
		int m,n;
		cin>>m>>n;
		for (i = 0; i < m+n; i++)
		{
				cin>>a[i];
		}
		for (i = 0; i < m + n - 1; i++)
		{
				for (j = 0; j < m + n - 1 - i; j++)
				{
						if (a[j] > a[j + 1])
						{
								int temp=a[j];
								a[j]=a[j+1];
								a[j+1]=temp;
						}
				}
		}
		cout<<a[0];
		for (i = 1; i < m + n; i++)
		{
				if (a[i] != a[i - 1])
				{
						cout<<" "<<a[i];
				}
		}
}*/
