/*#include<iostream>
using namespace std;
int main()
{
		int i;
		int n;
		cin >> n;
		for (i = 0; i < n; i++)
		{
				char a[5];
				cin>>a;
				int hour,min;
				hour =(a[0]-'0')*10+a[1]-'0';
				min=(a[3]-'0')*10+a[4]-'0'+1;
				while (1)
				{
						if (min == 60)
						{
								hour++;
								min=0;
						}
						if(hour==24)
								hour=0;
						if ((hour % 10 == min / 10) && (hour / 10 == min % 10))
						{
								if(hour<10)
										cout<<0;
								cout<<hour<<':';
								if(min<10)
										cout<<0;
								cout<<min<<endl;
								break;
						}
						min++;
				}
		}
}*/