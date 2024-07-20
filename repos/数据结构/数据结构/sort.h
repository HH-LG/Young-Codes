#pragma once
void insert_sort_direct(int *a, int n)
{
	int i,j,tmp;
	for (i = 1; i < n; i++)
	{
		tmp=a[i];
		for (j = i - 1; j>=0&&tmp < a[j]; j--)
			a[j+1]=a[j];
		a[j+1]=tmp;
	}
}

void insert_sort_binary(int *a, int n)
{
	int i, j, tmp,left,right;
	for (i = 1; i < n; i++)
	{
		left=0;
		right=i-1;
		tmp=a[i];
		if (a[i - 1] > a[i])
		{
			while (left<=right)
			{
				int mid=(left+right)/2;
				if(a[mid]<tmp)
					left=mid+1;
				else
					right=mid-1;
			}
			for(j=i;j>right+1;j--)
				a[j]=a[j-1];
			a[j]=tmp;
		}
	}
}

void shell_sort(int *a, int n)
{
	int dx,i,j,tmp;
	for (dx = n / 2; dx >= 1; dx = dx / 2)
	{
		for (i = dx; i < n; i ++)
		{
			tmp=a[i];
			for (j = i - dx; a[j] > tmp; j-=dx)
			{
				a[j+dx]=a[j];
			}
			a[j+dx]=tmp;
		}
	}
}

void bubble_sort(int *a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
		}
	}
}

void quick_sort(int *a, int low,int high)
{
	if(low>=high)
		return;
	int pivot=a[low],i=low,j=high;
	while (i < j)
	{
		while(i<j&&a[j]>=pivot)
			j--;
		a[i]=a[j];
		while(i<j&&a[i]<=pivot)
			i++;
		a[j]=a[i];
	}
	a[i]=pivot;
	quick_sort(a,low,i-1);
	quick_sort(a,i+1,high);
}