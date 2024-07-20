#include<iostream>
using namespace std;
typedef  unsigned long long ull;
ull fib(int i);
int main()
{
	__int64 v4;
	__int64 v10;
	__int64 v11;
	__int64 v12;
	__int64 v9;
	for (int i = 0; i <= 200; i++)
	{
		v4 = i;
		v9 = fib(i);
		v10 = v9 - 0x233F0E151CLL;
		v11 = v9 - 0x1B45F81A32LL;
		v12 = v9 - 0x244C071725LL;
		if (v4 + v12 + v11 + v10 == 0x13A31412F8CLL)
		{
			cout<<"argv[1]:"<<v10<<endl;
			cout<<"argv[2]:"<<v11<<endl;
			cout<<"argv[3]:"<<v12<<endl;
			cout<<"argv[4]:"<<v4 + 25923<<endl;
		}
	}
}
ull fib(int i)
{
	if (i <= 1 || i > 200)
		return 0; 
	ull* ptr = new ull[i+1];
	*ptr = 1;
	ptr[1] = 1;
	ull res = 0;
	for (int j = 2; j < i; ++j)
	{
		ptr[j] = ptr[j - 1] + ptr[j - 2];
		res = ptr[j];
	}
	delete ptr;
	return res;
}