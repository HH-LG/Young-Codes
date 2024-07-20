/*#include<iostream>
#include<fstream>
using namespace std;

int lookfor1(char A[][10], int n, char key[])//顺序查找，返回序号，没找到返回-1
{
	int idx=-1;
	int j;
	for (int i = 0; i < n; i++)
	{
		for (j = 0; key[j]!=0||A[i][j]!='\0'; j++)
		{
			if(key[j]!=A[i][j])
				break;
		}
		if ( key[j]==0&&A[i][j] == '\0')
		{
			idx=i;
			break;
		}
	}
	return idx;
}

int lookfor2(char A[][10], int start, int end, char key[])//折半查找，返回序号，没找到返回-1
{
	if(start>end)
		return -1;
	int idx=-1;
	int j;
	for (j = 0; key[j] != 0 || A[(start+end)/2][j] != '\0'; j++)
	{
		if (key[j] != A[(start + end) / 2][j])
			break;
	}
	if (key[j] == 0 && A[(start + end) / 2][j] == '\0')
	{
		idx = (start + end) / 2;
	}
	if(idx!=-1|| (start == end && idx == -1))
	{
		return idx;
	}
	else
	{
		if (key[j] > A[(start + end) / 2][j])
		{
			return lookfor2(A, (start + end) / 2+1,end,key);
		}
		else 
		{
			return lookfor2(A,start, (start + end) / 2 - 1, key);
		}
	}
}

int main()
{
	char filename[100];
	char wordTable[15][10]={"char","class","const","do","double","else","float","for","if","int","long","return","swtich","void","while"};
	int times[15]={0};

	cin>>filename;
	ifstream ifs(filename,ios::_Nocreate);
	while (!ifs.eof())
	{
		char lines[101];
		ifs.getline(lines,101);

		char word[101]={0};
		int cnt=0;
		for (int j = 0; j < 101 && lines[j] != 0; j++)
		{
			if (lines[j] != ' '&&lines[j]>='a'&&lines[j]<='z')
			{
				word[cnt]=lines[j];
				cnt++;
				continue;
			}
			else
			{
				word[cnt]=0;
				//int idx=lookfor2(wordTable,0,15,word);
				int idx = lookfor1(wordTable, 15, word);
				if (idx != -1)
				{
					times[idx]++;
				}

				cnt=0;
				for (int k = 0; k < 101; k++)
				{
					word[k]=0;
				}
			}
		}
	}
	for (int i = 0; i < 15; i++)
	{
		cout<<wordTable[i]<<":\t"<<times[i]<<"次"<<endl;
	}
}*/