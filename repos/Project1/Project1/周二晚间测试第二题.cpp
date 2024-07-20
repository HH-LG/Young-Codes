/*#include<iostream>
using namespace std;
bool isprime(int);
int main()
{
		int total;
		int n,a;
		int i,j;
		cin>>n;
		for (i = 0; i < n; i++)
		{
				total=0;
				cin>>a;
				for (j = 2; j <= a / 2; j++)
				{
						if (isprime(j) && isprime(a - j))
						{
								total++;
						}
				}
				cout<<total<<endl;
		}
}
bool isprime(int a)
{
		bool judge=true;
		int i;
		for (i = 2; i*i <= a; i++)
		{
				if (a%i == 0)
				{
						judge=false;
						break;
				}
		}
		return judge;
}*/