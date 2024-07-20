/*#include<iostream>
using namespace std;

//冒泡排序模板
template<class T> void sort(T* a, int n);

//类模板实现反向输出
template<class T,int n>
class tmplt
{
	T arr[n];
public:
	void datain();
	void reverse_out();
	T& operator[](int n);
};

template<class T, int n> void tmplt<T, n>::datain()
{
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
}

template<class T, int n> void tmplt<T, n>::reverse_out()
{
	for (int i = 0; i < n; i++)
	{
		cout<<arr[n-i-1];
	}
}

template<class T, int n> T& tmplt<T, n>:: operator[](int n)
{
	return arr[n];
}

int main()
{
	tmplt<int,10> a;
	a.datain();
	a.reverse_out();
	cout<<endl;
	cout<<a[0];
	cout<<endl;
	a.reverse_out();

}
//冒泡排序模板
template<class T> void sort(T* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (a[j] < a[j + 1])
			{
				T temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}*/
