/*#include<iostream>
using namespace std;
//����ģ��
template<class T>
T& max(T*a, int cnt)
{
	int index=0;
	for (int i = 1; i < cnt; i++)
	{
		if (a[i] > a[index])
		{
			index=i;
		}
	}
	return a[index];
} 
//���ģ�����ģ��ĳ�Ա����
template<class T,int i>
class Data
{
	T data[i];
public:
	Data(T* a);
	void get_data(int cnt);
};

template<class T,int i>
Data<T, i>::Data(T* a)
{
	for (int j = 0; j < i; j++)
	{
		data[j]=a[j];
	}
}

template <class T, int i> 
void Data<T, i>::get_data(int cnt)
{
	if (cnt > i)
	{
		cnt=i;
	}
	for (int j = 0; j < cnt; j++)
	{
		cout<<this->data[j];
	}
}

int main()
{
	//max��������
	int a[5] = { 1,2,3,4,5 };
	int b = max(a, 5);
	cout << b << endl;
	max(a, 5) = max(a, 3);
	cout << a[4];

	//Data����
	char str[30]="impetus and motivation.";
	Data<char,30> s(str);
	s.get_data(24);
}*/