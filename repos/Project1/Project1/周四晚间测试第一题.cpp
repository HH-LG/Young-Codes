/*#include<iostream>
using namespace std;
int main()
{
		int sum=0;
		int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		int judge=0;
		int year,month,day;
		int i;
		cin>>year>>month>>day;
		if((year % 4 == 0 && year % 100 != 0)||(year%100==0&&year%400==0))
		{
				judge=1;
		}
		if(judge)
				m[1]+=1;
		if (!(month > 0 && month < 13) || !(day > 0 && day <=m[month - 1]))
		{
				cout << "WRONG INPUT!";
				return 0;
		}
		for (i = 0; i < month-1; i++)
		{
				sum+=m[i];
		}
		sum+=day;
		cout<<sum;
}*/