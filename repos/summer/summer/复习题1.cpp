/*#include<iostream>
#include<map>
#include<string>
#include<fstream>
using namespace std;

class student
{
public:
	string name;
	int math;
	int english;
};

int main()
{
	student s[100];map<string,int> s_list;
	int cnt=0;
	ifstream in("file1.txt");
	while (!in.eof())
	{
		in>>s[cnt].name;
		in>>s[cnt].english;
		s_list[s[cnt].name]=cnt;
		cnt++;
	}
	in.close();
	in.open("file2.txt");
	while (!in.eof())
	{
		string name;
		in>>name;
		in>>s[s_list[name]].math;
	}
	in.close();
	ofstream out("file3.txt");
	for (int i = 0; i < cnt; i++)
	{
		out<<s[i].name<<' '<<s[i].english<<' '<<s[i].math<<endl;
	}
	out.close();
} */