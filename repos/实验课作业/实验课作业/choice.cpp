/*#include<iostream>
using namespace std;

void team(int i, int x[100], int a, int length)
{
	for (int j = a; j < length; j++)
	{
		cout<<(10*i+x[j])<<endl;
		team(10*i+x[j],x,j+1,length);
	}
}

int main()
{
	int j;
	cin>>j;
	int x[100] = { 0 };
	for (int i = 0; i < j; i++)
	{
		cin>>x[i];
	}
	team(0,x,0,j);
}*/