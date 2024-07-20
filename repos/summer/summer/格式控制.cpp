/*#include<iostream>
using namespace std;

ostream& hexout(ostream& out)
{
	out<<"以十六进制输出:";
	out.setf(ios::hex,ios::basefield);
	return out;
}

ostream& sp(ostream& out)
{
	out<<' ';
	return out;
}
int main()
{
	//十六进制输出
	cout<<hexout<<4660;
	
	cout.unsetf(ios::hex);
	cout<<endl;
	//加空格
	cout<<"index:"<<sp<<sp<<sp<<2113713;

	cout<<endl;
	//格式控制
	//cout.flags(cout.flags()|ios::showbase);
	//cout.flags(cout.flags()|ios::showpoint);
	//double a=0;
	//cout<<a<<endl;
	//cout.setf(0,~ios::showbase);
	//cout<<a;
}*/