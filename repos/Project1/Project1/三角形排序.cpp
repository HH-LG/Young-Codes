/*#include<iostream>
using namespace std;
int a[1000][1000];
int maxTrace(int ,int ,int );
int main()
{
	int n;
	cin>>n;
	int i;
	int j;
	for (i = 0; i < n; i++)
		for(j=0;j<i+1;j++)
			cin>>a[i][j];
	cout<<maxTrace(0,0,n);
}
int maxTrace(int sx, int sy, int r)
{
	if(sy>sx)
		return 0;
	if(sx==r)
		return a[sx][sy];
	else return a[sx][sy]+(maxTrace(sx+1,sy,r)>maxTrace(sx+1,sy+1,r)? maxTrace(sx + 1, sy, r): maxTrace(sx + 1, sy + 1, r));
}*/