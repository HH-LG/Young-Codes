/*#include<iostream>
using namespace std;
int main()
{
	int a[42];
	int i, j;
	int cnt = 0, cntbk;
	int k;
	cin >> k;
	for (i = 0; i < 2 * k; i++)
	{
		a[i] = 1;
	}
	for (j = 1;; j++)
	{
		int judge = 1;
		cntbk = 0;
		cnt = 0;
		for (i = 0;; i++)
		{
			if (i == 2 * k)
				i = 0;
			if (cntbk == k)
			{
				break;
			}
			if (a[i] == 1)
				cnt++;
			else
				continue;
			if (cnt == j)
			{
				if (i >= 0 && i < k)
				{
					judge = 0;
					break;
				}
				else
				{
					a[i] = 0;
					cntbk++;
					cnt = 0;
				}
			}
		}
		if (judge)
			break;
	}
	cout << j;
}*/