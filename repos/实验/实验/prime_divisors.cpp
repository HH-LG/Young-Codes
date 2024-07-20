#include<stack>
#include<iostream>
using namespace std;
int main()
{
	int n;
	stack<int> prime_bank;
	int divisor=2;
	cin>>n;
	while (n != 1)
	{
		if (n%divisor == 0)
		{
			prime_bank.push(divisor);
			n/=divisor;
		}
		else
			divisor++;
	}
	while (!prime_bank.empty())
	{
		cout<<prime_bank.top()<<' ';
		prime_bank.pop();
	}
}