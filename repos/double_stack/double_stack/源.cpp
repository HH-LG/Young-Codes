#include<iostream>
#include"Doubel_stack.h"
using namespace std;
int main()
{
	Double_stack s;
	for(int i=0;i<10;i++)
		s.push_a(i*i);
	for(int i=1;i<15;i++)
		if(!s.push_b(i*i))
			cout<<"Full!"<<endl;
	while (!s.empty_a())
	{
		cout<<s.top_a()<<' ';
		s.pop_a();
	}
	cout<<endl;
	while (!s.empty_b())
	{
		cout << s.top_b()<<' ';
		s.pop_b();
	}
}