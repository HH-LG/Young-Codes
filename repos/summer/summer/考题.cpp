/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[30];
	char newname[35]="new";
	cin>>name;
	int i;
	for (i = 0; name[i] != '\0'; i++)
	{
		newname[i+3]=name[i];
	}
	newname[i+3]='\0';
	ifstream in((const char*)name,ios::_Nocreate);
	ofstream out((const char*)newname);
	if (!in)
	{
		cout<<"文件打开失败"<<endl;
		return 0;
	}
	char a;
	in.get(a);
	while (!in.eof())
	{
		if (a == 'f')
		{
			long index=in.tellg();
			index--;
			bool judge=0;
			in.get(a);
			if (a == 'o')
			{
				in.get(a);
				if (a == 'r')
				{
					judge=1;
					while (a != '}')
					{
						in.get(a);
					}
					in.get(a);
				}
			}
			if (!judge)
			{
				in.seekg(index);
				in.get(a);
			}
		}
		cout<<a;
		out<<a;
		in.get(a);
	}
	out<<a;
	in.close();
	out.close();
}*/