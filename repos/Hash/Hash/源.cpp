#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int base = 31;
const int maxsize = int(1e3);
int mod = 997;
string Hash_table[maxsize];	//哈希大表
int available[maxsize] = { 0 };		//记录此格用了多少次存进来，有没有值
int cnt = 0;					//记录有多少个哈希值
ull cod[maxsize];
void get_hash(string s,int mode = 0)
{
	if (float(cnt + 1) / maxsize >= 0.8)
		return;
	ull hash = 0;
	int length = s.length();
	for (int i = 0; i < length; i++)
	{
		hash *= base;
		hash += s[i] - 'a' + 1;
	}
	hash = hash % mod;
	if (available[hash] == 0)
	{
		Hash_table[hash] = s;
		available[hash] = 1;
		cod[cnt] = hash;
		cnt++;
		return;
	}
	else if (Hash_table[hash] == s)
	{
		return;
	}
	int try_ = 1;
	if(mode == 0)
		while (true)
		{

			if (available[(hash + try_ * try_) % mod] == 0)
			{
				Hash_table[(hash + try_ * try_) % mod] = s;
				available[(hash + try_ * try_) % mod] = try_ * 2;
				cod[cnt] = (hash + try_ * try_) % mod;
				cnt++;
				return;
			}
			else if (Hash_table[(hash + try_ * try_) % mod] == s)
				return;
			if (available[(hash - try_ * try_) % mod] == 0)
			{
				Hash_table[(hash - try_ * try_) % mod] = s;
				available[(hash - try_ * try_) % mod] = 2 * try_ + 1;
				cod[cnt] = (hash - try_ * try_) % mod;
				cnt++;
				return;
			}
			else if (Hash_table[(hash - try_ * try_) % mod] == s)
				return;
			try_++;
		}
	else
		while (true)
		{
			if (available[(hash + try_) % mod] == 0)
			{
				Hash_table[(hash + try_) % mod] = s;
				available[(hash + try_) % mod] = try_ + 1;
				cod[cnt] = (hash + try_) % mod;
				cnt++;
				return;
			}
			else if (Hash_table[(hash + try_) % mod] == s)
				return;
			try_++;
		}
}
int encoding(string s,int& times,int mode =0)
{
	ull hash = 0;
	for (int i = 0; i < s.length(); i++)
	{
		hash *= base;
		hash += s[i] - 'a' + 1;
	}
	hash = hash % mod;
	int try_ = 0;
	if(mode == 0)
		while (true)
		{
			if (available[(hash + try_ * try_) % mod] == 0)
			{
				times=2*try_+1;
				return -1;
			}
			else if (Hash_table[(hash + try_ * try_) % mod] == s)
			{
				times=2*try_+1;
				return (hash + try_ * try_) % mod;
			}
			if (available[(hash - try_ * try_) % mod] == 0)
			{
				times = 2 * try_ + 2;
				return -1;
			}
			else if (Hash_table[(hash - try_ * try_) % mod] == s)
			{
				times = 2 * try_ + 2;
				return (hash - try_ * try_) % mod;
			}
			try_++;
		}
	else
		while (true)
		{
			if (available[(hash + try_) % mod] == 0)
			{
				times=try_+1;
				return -1;
			}
			else if (Hash_table[(hash + try_) % mod] == s)
			{
				times=try_+1;
				return (hash + try_) % mod;
			}
			try_++;
		}
}
void clear_hash()
{
	for (int i = 0; i < maxsize; i++)
	{
		available[i]=0;
		cnt=0;
	}
}
int main()
{
	int mode;
	cout<<"'0' for square,'1' for linear:"<<endl;
	cin>>mode;
	cout<<"change base?(y/n)"<<endl;
	char choose;
	cin>>choose;
	if (choose == 'y')
	{
		cout<<"change base to =>";
		cin>>base;
	}
	ifstream ifs("inputfile1.txt");
	string line;
	char c;
	ifs.get(c);
	if (c >= 'A'&&c <= 'Z')
	{
		c += 'a' - 'A';
	}
	line.push_back(c);
	while (!ifs.eof())
	{
		ifs.get(c);
		if ((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		{
			if (c >= 'A'&&c <= 'Z')
			{
				c += 'a' - 'A';
			}
			line.push_back(c);
		}
		else if (!line.empty())
		{
			if(line=="back")
				line="back";
			get_hash(line,mode);
			line.clear();
		}
	}
	ifs.close();
	//for (int i = 0; i < cnt; i++)
	//{
	//	cout<<available[cod[i]]<<' '<<Hash_table[cod[i]]<<endl;
	//}

	ifstream ifs1("inputfile2.txt");
	line.clear();
	int cnt = 0;
	int f_cnt = 0;
	int cnot = 0;
	int total_words = 0;
	ifs1.get(c);
	if (c >= 'A'&&c <= 'Z')
	{
		c += 'a' - 'A';
	}
	line.push_back(c);
	while (!ifs1.eof())
	{
		ifs1.get(c);
		if ((c >= 'a'&&c <= 'z') || (c >= 'A'&&c <= 'Z'))
		{
			if (c >= 'A'&&c <= 'Z')
			{
				c+='a' - 'A';
			}
			line.push_back(c);
		}
		else if (!line.empty())
		{
			total_words++;
			int t;
			int code = encoding(line,t,mode);
			if (code != -1)
			{
				cnt++;
				f_cnt+=t;
			}
			else
			{
				cnot+=t;
			}
			line.clear();
		}
	}
	cout<<"total amount of words: "<<total_words<<endl;
	cout<<"number of words can be find : "<<cnt<<endl;
	cout << "number of words can't be find : " << (total_words - cnt)<< endl;
	cout<<"total times to find a word: "<<f_cnt<<endl;
	cout<<"total times to find a word not exist:"<<cnot<<endl;
	cout<<"average times to find a string: "<<float(f_cnt)/cnt<<endl;
	cout << "average times to find a string not exist: " << float(cnot) / (total_words-cnt) << endl;
	return 0;
}