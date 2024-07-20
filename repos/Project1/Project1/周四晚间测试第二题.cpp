/*#include<iostream>
using namespace std;
int main()
{
		int i=0, j=0,k;
		char word[100] = {0};
		char longest[100] = {0};
		char a[100];
		cin.getline(a, 100);
		while (a[i] != 0)
		{
				if (a[i] != 32)
				{
						word[j] = a[i];
						j++;
				}
				else
				{
						if (word[j] == 0)
						{
								for (k = 0; k < j; k++)
								{
										longest[k] = word[k];		
								}
						}
						j = 0;
				}
             i++;
         }
		if (word[j] == 0)
		{
				for (k = 0; k < j; k++)
				{
						longest[k] = word[k];
				}
		}
		j = 0;
		cout<<longest;
}*/
