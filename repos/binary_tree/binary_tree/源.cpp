#include<iostream>
#include"Binary_tree.h"
#include"Binary_tree.cpp"
using namespace std;
void func(int& x)
{
	cout << "**********" <<x<<"**********"<<endl;
}
int main()
{
	Binary_tree<int> tr;
	int x;
	for (int i = 0; i < 10; i++)
	{
		cin>>x;
		tr.insert(x);
	}
	tr.postorder(&func);
}