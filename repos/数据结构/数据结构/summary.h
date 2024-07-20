#pragma once

void gap_sort(int *a, int n)
{
	int dx=n/4+1,i,j;
	for(;dx>=1;dx--)
		for (i = 0; i < n - dx; i++)
			if (a[i] > a[i + dx])
			{
				int tmp=a[i];
				a[i]=a[i+1];
				a[i+1]=tmp;
			}

}

void merge_sort(int *a, int s,int e)
{
	if(s>=e)
		return;
	int mid=(s+e)/2;
	merge_sort(a,s,mid);
	merge_sort(a,mid+1,e);
	int *p=new int [e-s+1],pa=s,pb=mid+1,cnt=0;
	while (pa <= mid && pb <= e)
	{
		if(a[pa]>a[pb])
			p[cnt++]=a[pb++];
		else
			p[cnt++]=a[pa++];
	}
	while(pa<=mid)
		p[cnt++]=a[pa++];
	while(pb<=e)
		p[cnt++]=a[pb++];
	for(int i=0;i<cnt;i++)
		a[i+s]=p[i];
}

int find_median(int *a, int *b, int s1, int e1, int s2, int e2)
{
	if(s1==e1&&s2==e2)
		return a[s1]>b[s2]?a[s1]:b[s2];
	int mid1=(s1+e1+1)/2,mid2=(s2+e2+1)/2;
	if (a[mid1] < b[mid2])
		if((e1-s1)%2==0)//长度为奇数
			return find_median(a,b,mid1,e1,s2,mid2);
		else
			return find_median(a,b,mid1,e1,s2,mid2-1);
	else
		if ((e1 - s1) % 2 == 0)//长度为奇数
			return find_median(a,b,s1,mid1,mid2,e2);
		else
			return find_median(a,b,s1,mid1-1,mid2,e2);
}