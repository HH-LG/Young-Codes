#include "heap.h"
#include<iostream>
using namespace std;

binary_heap::binary_heap(double * a, int n,int* c_cnt, int* s_cnt)
{
	if(c_cnt==NULL)
		cmp_cnt=new int(0);
	else
		cmp_cnt=c_cnt;
	if(s_cnt==NULL)
		swap_cnt=new int(0);
	else 
		swap_cnt=s_cnt;
	(*swap_cnt)=0;
	(*cmp_cnt)=0;
	cnt = n;
	ary = a;
	for (int i = (n + 1) / 2 - 1; i >= 0; i--)
	{
		shift_down(i);
	}
}

void binary_heap::insert(double entry)
{
	ary[cnt]=entry;
	cnt++;
	shift_up(cnt-1);
}

void binary_heap::remove()
{
	double tmp=ary[0];
	ary[0]=ary[cnt-1];
	ary[cnt-1]=tmp;

	(*swap_cnt)++;

	cnt--;
	shift_down(0);
}

void binary_heap::shift_down(int idx)
{
	double tmp=ary[idx];
	if (2 * idx + 1 > cnt - 1)
	{
		return;
	}
	else if (2 * idx + 1 == cnt - 1)
	{
		if (ary[2 * idx + 1] < ary[idx])
		{
			(*cmp_cnt)++;

			return;
		}
		else
		{
			ary[idx] = ary[2 * idx + 1];
			ary[2 * idx + 1] = tmp;
			shift_down(2*idx+1);

			(*cmp_cnt)++;
			(*swap_cnt)++;
		}
	}
	else
	{
		if (ary[idx] > ary[2 * idx + 1] && ary[idx] > ary[2 * idx + 2])
		{
			(*cmp_cnt)++;
			return;
		}
		else
		{
			(*cmp_cnt)++;
			if (ary[2 * idx + 1] > ary[2 * idx + 2])
			{
				ary[idx]= ary[2 * idx + 1];
				ary[2 * idx + 1]=tmp;
				shift_down(2*idx+1);

				(*swap_cnt)++;
				(*cmp_cnt)++;
			}
			else
			{
				ary[idx] = ary[2 * idx + 2];
				ary[2 * idx + 2] = tmp;
				shift_down(2*idx+2);

				(*swap_cnt)++;
				(*cmp_cnt)++;
			}
		}
		
	}
	
}

void binary_heap::shift_up(int idx)
{
	double tmp=ary[idx];
	if ((idx + 1) / 2 - 1 < 0)
	{
		return;
	}
	else
	{
		if (ary[idx] > ary[(idx + 1) / 2 - 1])
		{
			ary[idx]=ary[(idx + 1) / 2 - 1];
			ary[(idx + 1) / 2 - 1]=tmp;
			shift_up((idx+1)/2-1);

			(*swap_cnt)++;
			(*cmp_cnt)++;
		}
		else
		{
			(*cmp_cnt)++;

			return;
		}
	}
}

bool binary_heap::empty()
{
	return !bool(cnt);
}

void binary_heap::show()
{
	for (int i = 0; i < cnt; i++)
	{
		cout << ary[i] << ' ';
	}
}
