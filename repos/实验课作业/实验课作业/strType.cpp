/*#include <iostream>
#include <string.h>
using namespace std;

class myStr
{
	char str[101];
	int len;
public:
	myStr(char* s)
	{
		strcpy_s(str,s);
		len=strlen(s);
	}
	void StrOut();
	bool strIsPal();
};

void myStr::StrOut()
{
	int i;
	cout<<str<<endl;
	for (i = 0; i < len-8; i++)
	{
		cout<<"-";
	}
	cout<<"共"<<len<<"字节"<<endl;
}

bool myStr::strIsPal()
{
	int first=0,last=len-1;
	while (first < last)
	{
		if(str[first]!=str[last])
			return false;
		first++;
		last--;
	}
	return true;
}
int main()
{
	myStr line((char*)("abcdedcba"));
	if (line.strIsPal())
	{
		cout<<"是回文的"<<endl;
	}
	else 
		cout<<"不是回文的"<<endl;

	line.StrOut();
}*/