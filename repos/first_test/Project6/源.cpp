
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int times;
	int A, B, cnt;
	int i, j, m, k, mask, ing, all;
	int x, p, norep = 1, judge;
	cin >> times;
	for (i = 1; i <= times; i++)
	{
		cnt = 0;
		cin >> A >> B;
		for (j = A; j <= B; j++)
		{
			all = 1;
			if (j == 112)
				x=j;
			norep = 1;
			ing = 0;
			x = j;
			while (x != 0)
			{
				x /= 10;
				ing++;
			}
			for (m = 1; m <= ing; m++)
			{
				all *= 10;
			}
			for (m = 1, mask = 10; m <= ing - 1; mask *= 10, m++)
			{
				p = j % mask*all / mask + j / mask;
				for (k = 10; k < mask; k *= 10)
				{
					judge = j % k*all / k + j / k;
					if (p == judge)
					{
						norep = 0;
					}
				}
				if (j < p&&p <= B && norep)
				{
					cnt++;
				}
			}

		}
		cout << cnt << endl;

	}
	return 0;
}