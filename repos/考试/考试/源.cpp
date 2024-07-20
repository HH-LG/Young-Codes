#include<iostream>
using namespace std;
void QuickSort(int *arr, int low, int high) {
	if (low < high) {//不加这个条件会死循环 
		int i = low;
		int j = high;
		int key = arr[low];
		while (i < j) {
			while (i < j&&arr[j] >= key)
				j--;
			if (i < j)
				arr[i++] = arr[j];//先赋值在自增 
			while (i < j&&arr[i] < key)
				i++;
			if (i < j)
				arr[j--] = arr[i];//先赋值在自增				
		}
		arr[i] = key;
		QuickSort(arr, low, i - 1);//给左边排序 
		QuickSort(arr, i + 1, high);//给右边排序 
	}
}


int main()
{
	int n,a[10000],mask=2,p=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	QuickSort(a,0,n-1);
	for (int i = 0; i < n / 2;i++)
	{
		p+=mask*(a[n-1-i]-a[i]);
	}
	cout<<p;
}
