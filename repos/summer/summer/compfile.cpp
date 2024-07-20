/*#include<iostream>
#include<fstream>
using namespace std;

int main();

bool mstrcmp(char*,char*);
void clear(char *);

int main()
{
	char a[500] = { 0 }, b[500] = { 0 }, n1[20], n2[20];
	cout<<"type in the name of the file:"<<endl;
	cin>>n1>>n2;
	
	ifstream in1(n1),in2(n2);
	char op='y';
	int cnt=0;
	while (!in1.eof()&&!in2.eof())
	{
		if (mstrcmp(a, b))
		{
			in1.getline(a, 500);
			in2.getline(b, 500);
			cnt++;
			if(cnt==9)
				cnt=9;
		}
		else
		{
			cout<<"find different lines:line "<<cnt<<endl;
			cout<<"f1£º"<<a<<endl<<"f2£º" <<b<<endl;
			clear(a);
			clear(b);
			cout<<"continue? y/n"<<endl;
			cin>>op;
			if (op == 'y')
			{
				clear(a);
				clear(b);
				in1.getline(a, 500);
				in2.getline(b, 500);
				cnt++;
			}
			else
			{
				op='n';
				break;
			}
		}
	}
	if (op=='y')
	{
		if (!in1.eof())
		{
			while (!in1.eof())
			{
				cout<<"extra lines of f1:"<<endl;
				cout  << cnt << ' ' << a ;
				clear(a);
				in1.getline(a, 500);
				if(in1.eof())
					cout<<endl;
			}
			
		}
		else if (!in2.eof())
		{
			while (!in2.eof())
			{
				cout << "extra lines of f2:" << endl;
				cout << cnt << ' ' << b;
				clear(b);
				in2.getline(b, 500);
				if (in2.eof())
					cout << endl;
			}
		}
	}
	in1.close();
	in2.close();
	cout<<"no other differences found"<<endl;
}

bool mstrcmp(char* a, char* b)
{
	int i;
	for ( i = 0; a[i] != '\0'&&b[i] != '\0'; i++)
	{
		if (a[i] != b[i])
		{
			return false;
		}
	}
	if(a[i]!=b[i])
		return false;
	return true;
}

void clear(char* a)
{
	for (int i = 0; a[i] != '\0'; i++)
		a[i]= '\0';
}*/