#include<iostream>
#include<string>
#include"signal.h"
using namespace std;
int main()
{
	/*signal a;
	a.limited_in();
	cout<<a;
	cout<<"--------after reverse:---------"<<endl;
	a.reverse();
	cout<<a;*/
	signal a;
	inf_downsample(a,2);
	cout<<"--------upsample(T=2) signal--------"<<endl;
	cout<<a;
	//cout << "-------- input signal--------" << endl;
	//cout<<a;
}
