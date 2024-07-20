#include<iostream>
#include"heap.h"
#include<time.h>
#include<stdlib.h>
#include<iomanip>
#include<fstream>
using namespace std;
const int order_size = 7;
int orders[]={23,19,13,11,7,3,1};
void heap_sort(double* ary, int n,int* c_cnt,int* s_cnt);
void quick_sort(double* ary, int n, int& cmp_cnt, int& swap_cnt);
void merge_sort(double* ary, int n,int& cmp_cnt,int& swap_cnt);
void shell_sort(double* ary, int n,int& cmp_cnt,int& swap_cnt);
void insert_sort(double* ary,int n,int& cmp_cnt,int& swap_cnt);

void out_ary(double* ary,int n);
void init_ary(double* ary,int n);
int main()
{
	ofstream ofs("out.txt");
	int cmp_cnt=0;
	int swap_cnt=0;
	srand(time(NULL));
	double a[maxsize];
	init_ary(a,maxsize);
	for (int i = 0; i < maxsize - 1; i++)
		{
			for (int j = 0; j < maxsize - 1 - i; j++)
			{
				if (a[j] < a[j + 1])
				{
					cmp_cnt++;
					swap_cnt++;
					double tmp=a[j];
					a[j]=a[j+1];
					a[j+1]=tmp;
				}
				else
				{
					cmp_cnt++;
				}
			}
		}

	ofs<<"(bubble)cmp_cnt:  "<<cmp_cnt<<endl;
	ofs<<"(bubble)swap_cnt: "<<swap_cnt<<endl;

	init_ary(a,maxsize);
	heap_sort(a,maxsize,&cmp_cnt,&swap_cnt);
	ofs << "(heap)cmp_cnt:  " << cmp_cnt << endl;
	ofs << "(heap)swap_cnt: " << swap_cnt << endl;

	init_ary(a,maxsize);
	quick_sort(a,maxsize,cmp_cnt,swap_cnt);
	ofs<<"(quick)cmp_cnt:  "<<cmp_cnt<<endl;
	ofs<<"(quick)swap_cnt: "<<swap_cnt<<endl;

	init_ary(a,maxsize);
	insert_sort(a,maxsize,cmp_cnt,swap_cnt);
	ofs << "(insert)cmp_cnt:  " << cmp_cnt << endl;
	ofs << "(insert)swap_cnt: " << swap_cnt << endl;

	init_ary(a, maxsize);
	merge_sort(a,maxsize,cmp_cnt,swap_cnt);
	ofs << "(merge)cmp_cnt:  " << cmp_cnt << endl;
	ofs << "(merge)swap_cnt: " << swap_cnt << endl;

	init_ary(a,maxsize);
	shell_sort(a,maxsize,cmp_cnt,swap_cnt);
	ofs << "(shell)cmp_cnt:  " << cmp_cnt << endl;
	ofs << "(shell)swap_cnt: " << swap_cnt << endl;
	out_ary(a,maxsize);
	ofs.close();

	int m,n;
	int x;
	int count;
	cin>>count;
	cin>>m>>n;
	int zeros[100] = { 0 };
	int dec[100] = { 0 };
	for(int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			cin>>x;
			dec[i]=10*dec[i]+x;
			if(x==0)
				zeros[i]++;
		}
	for (int i = 1; i < m; i++)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			if (dec[j] > dec[j + 1])
			{
				swap(dec[j],dec[j+1]);
				swap(zeros[j],zeros[j+1]);
			}
			else
			{
				break;
			}
		}
	}
	int max=1;
	int now_max=1;
	for (int i = 0; i < m; i++)
	{
		if (zeros[i] <= count && count % 2 == zeros[i] % 2)
		{
			int j;
			for ( j= i+1; j < m; j++)
			{
				if (dec[j] == dec[i])
				{
					now_max++;
				}
				else
				{
					i=j-1;
					if (now_max > max)
					{
						max=now_max;
						now_max=1;
					}
					break;
				}
			}
			if (j == m)
			{
				if (now_max > max)
				{
					max = now_max;
					now_max = 1;
				}
				break;
			}
		}
	}
	cout<<max;
}

void heap_sort(double* ary, int n, int* c_cnt, int* s_cnt)
{
	binary_heap h(ary,n,c_cnt,s_cnt);
	while (!h.empty())
	{
		h.remove();
	}
}

void quick_sort(double * ary, int n, int& cmp_cnt, int& swap_cnt)
{
	cmp_cnt=0;
	swap_cnt=0;
	if(n<2)
		return;
	double pivot=ary[n/2];
	ary[n/2]=ary[n-1];
	ary[n-1]=pivot;

	swap_cnt++;

	int first=0,second=n-2;
	while (first<=second)
	{
		if (ary[first] >= pivot && first<= second)
		{
			cmp_cnt++;
			while (first <= second && ary[second] > pivot)
			{
				cmp_cnt++;
				second--;
			}
			cmp_cnt++;

			if (first <= second)
			{
				double tmp=ary[first];
				ary[first]=ary[second];
				ary[second]=tmp;
				first++;
				second--;

				swap_cnt++;
				continue;
			}
			else
			{
				break;
			}
		}
		if (ary[second] <= pivot && first <= second)
		{
			cmp_cnt++;
			while (first <= second && ary[first] < pivot)
			{
				cmp_cnt++;
				first++;
			}
			cmp_cnt++;
			if (first <= second)
			{
				double tmp = ary[first];
				ary[first] = ary[second];
				ary[second] = tmp;
				first++;
				second--;

				swap_cnt++;
				continue;
			}
			else
			{
				break;
			}
		}
		while (ary[second] >= pivot && ary[first] <= pivot && first<=second)
		{

			cmp_cnt++;
			first++;
			second--;
		}
	}
	ary[n-1]=ary[first];
	ary[first]=pivot;

	swap_cnt++;

	int sub_cmp1;
	int sub_swap1;
	quick_sort(ary,first,sub_cmp1,sub_swap1);
	int sub_cmp2;
	int sub_swap2;
	quick_sort(ary+first+1,n-first-1, sub_cmp2, sub_swap2);
	cmp_cnt+=sub_cmp1+sub_cmp2;
	swap_cnt+=sub_swap1+sub_swap2;
}

void insert_sort(double* ary, int n,int& cmp_cnt,int& swap_cnt)
{
	if (n < 2)
		return;
	cmp_cnt=0;
	swap_cnt=0;
	for (int i = 1; i < n; i++)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			if (ary[j] > ary[j+1])
			{
				double tmp=ary[j];
				ary[j]=ary[j+1];
				ary[j+1]=tmp;

				cmp_cnt++;
				swap_cnt++;
			}
			else
			{
				cmp_cnt++;
				break;
			}
		}
	}
}

void out_ary(double * ary, int n)
{
	ofstream ofs("out.txt",ios::app);
	for (int i = 0; i < n; i++)
	{
		ofs.setf(ios::left);
		if (i % 10 == 0)
			ofs <<"line "<<setw(4)<<i/10+1<<":";
		ofs << ary[i] << ' ';

		if ((i+1) % 10 == 0)
			ofs <<endl;
	}
	ofs.close();
}

void init_ary(double * ary, int n)
{
	for (int i = 0; i < maxsize; i++)
	{
		ary[i] = rand() % (10*maxsize);
	}
}


void merge_sort(double* ary, int n, int& cmp_cnt, int& swap_cnt)
{
	cmp_cnt=0;
	swap_cnt=0;
	if(n<2)
		return;

	int cmp_cnt1;
	int swap_cnt1;
	int cmp_cnt2;
	int swap_cnt2;
	merge_sort(ary,n/2,cmp_cnt1,swap_cnt1);
	merge_sort(ary+n/2,n-n/2,cmp_cnt2,swap_cnt2);

	cmp_cnt+=cmp_cnt1+cmp_cnt2;
	swap_cnt+=swap_cnt1+swap_cnt2;
	double* pa=ary;
	double* pb=ary+n/2;
	int cnta=0;
	int cntb=0;
	double* a=new double[n];
	while (cnta != n / 2 && cntb != n - n / 2)
	{
		if (pa[cnta] < pb[cntb])
		{
			cmp_cnt++;

			a[cnta+cntb]=pa[cnta];
			cnta++;
		}
		else
		{
			cmp_cnt++;

			a[cnta+cntb]=pb[cntb];
			cntb++;
		}
	}
	while (cnta != n / 2)
	{
		a[cnta + cntb] = pa[cnta];
		cnta++;
	}
	while (cntb != n - n / 2)
	{
		a[cnta + cntb] = pb[cntb];
		cntb++;
	}
	for (int i = 0; i < n; i++)
	{
		swap_cnt++;
		ary[i]=a[i];
	}
}

// order of grouping = 5
void shell_sort(double * ary, int n, int & cmp_cnt, int & swap_cnt)
{
	cmp_cnt=0;
	swap_cnt=0;
	for (int i = 0; i < order_size; i++)
	{
		for (int j = 0; j < orders[i]; j++) // 余数
		{
			for (int k = 1; k*orders[i] + j < n; k++) // 
			{
				for (int m = k - 1; m*orders[i] + j>=0; m--)
				{
					if (ary[m*orders[i] + j] > ary[(m + 1)*orders[i] + j])
					{
						cmp_cnt++;
						swap_cnt++;

						double tmp= ary[m*orders[i] + j];
						ary[m*orders[i] + j] = ary[(m + 1)*orders[i] + j];
						ary[(m + 1)*orders[i] + j] = tmp;
					}
					else
					{
						cmp_cnt++;
						break;
					}
				}
			}
		}
	}
}
void QuickSort1(int* arr, int begin, int end)
{
	if (begin >= end)
		return;
	int left = begin, right = end;
	int key = arr[begin];
	while (begin < end)
	{
		//找小
		while (arr[end] >= key && begin < end)
		{
			--end;
		}
		//小的放到左边的坑里
		arr[begin] = arr[end];
		//找大
		while (arr[begin] <= key && begin < end)
		{
			++begin;
		}
		//大的放到右边的坑里
		arr[end] = arr[begin];
	}
	arr[begin] = key;
	int keyi = begin;
	//[left,keyi-1]keyi[keyi+1,right]
	QuickSort1(arr, left, keyi - 1);
	QuickSort1(arr, keyi + 1, right);
}