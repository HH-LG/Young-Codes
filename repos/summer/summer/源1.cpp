#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	int n;
	int cnt=0;
	ofstream out("f.bin",ios::binary);
	while (cin >> n)
	{
		cnt++;
		out.write((char*)&n,sizeof(int));
	}
	out.close();

	ifstream in("f.bin", ios::binary);
	while (cnt > 0)
	{

		in.seekg(sizeof(int)*(cnt-1));
		while(in.read((char*)&n,sizeof(int)));
		cout<<n;
		cnt--;
	}
	in.close();
}