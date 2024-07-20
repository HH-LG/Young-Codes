/*#include <iostream>
using namespace std;
class student {


public:
	student() {}
	~student() {}
	int id;
	int score;
};
void max(student* stu)
{
	int max_score = 0;
	int j, l, m;
	for (j = 0; j < 4; j++)
	{
		for (l = 0; l < 3 - j; l++)
		{
			if ((stu + l)->id > (stu + l + 1)->id)
			{
				m = (stu + l)->id;
				(stu + l)->id = (stu + l + 1)->id;
				(stu + l + 1)->id = m;
				m = (stu + l)->score;
				(stu + l)->score = (stu + l + 1)->score;
				(stu + l + 1)->score = m;
			}
		}
	}
	for (j = 0; j < 4; j++)
	{
		if ((stu + j)->score >= max_score)
		{
			max_score = (stu + j)->score;
		}
	}
	student b[4];
	int x = 0;
	for (j = 0; j < 4; j++)
	{
		if ((stu + j)->score == max_score) {
			b[x].id = (stu + j)->id;
			b[x].score = (stu + j)->score;
			x++;
		}
	}
	for (j = 0; j < x; j++) { cout << b[j].id <<' '<< b[j].score << endl; }
}
int main()
{
	student a[4];
	int i;
	for (i = 0; i < 4; i++)
	{
		cin >> a[i].id;
		cin >> a[i].score;
	}
	max(a);
	return 0;
}*/

