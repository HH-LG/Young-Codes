/*#include<iostream>
using namespace std;

template<class key>
void data_sort(key a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				key temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

class Mystr
{

public:
	void input() { cin >> str; }
	char str[50];
	bool operator>(Mystr a);
};

bool Mystr::operator>(Mystr a)
{
	for (int i = 0; a.str[i] != 0 || this->str[i] != 0; i++)
	{
		if(this->str[i]>(a.str[i]))
			return true;
		else if (this->str[i] < (a.str[i]))
		{
			return false;
		}
	}
	return false;
}

int main()
{
	int cnt_i, cnt_c, cnt_s;
	cin >> cnt_i;
	int inte[50] = { 0 };
	for (int i = 0; i < cnt_i; i++)
	{
		cin>>inte[i];
	}
	data_sort(inte,cnt_i);
	cout<<inte[0];
	for (int i = 1; i < cnt_i; i++)
	{
		cout<<" "<< inte[i];
	}
	cout<<endl;

	cin >> cnt_c;
	char s[50] = { 0 };
	for (int i = 0; i < cnt_c; i++)
	{
		cin >> s[i];
	}
	data_sort(s, cnt_c);
	cout<<s[0];
	for (int i = 1; i < cnt_c; i++)
	{
		cout<< " "<<s[i];
	}
	cout<<endl;

	cin >> cnt_s;
	Mystr strs[50] ;
	for (int i = 0; i < cnt_s; i++)
	{
		strs[i].input();
	}
	data_sort(strs, cnt_s);
	cout << strs[0].str;
	for (int i = 1; i < cnt_s; i++)
	{
		cout << " " << strs[i].str;
	}
	cout<<endl;
}*/