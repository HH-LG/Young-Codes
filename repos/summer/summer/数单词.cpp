/*#include<map>
#include<iostream>
#include <string>
#include<fstream>
using namespace std;
int main()
{
	ifstream infile("article.txt");
	string word; map<string, int> wordlist;
	char article[20];
	while (!infile.eof())
		{
			infile>>word;
			if (word[0] != '\0'&&word[0] != ','&&word[0] != '.')
			{
				for (int i = 0; word[i] != '\0'; i++)
				{
					if (word[i] >= 'A'&&word[i] <= 'Z')
					{
						word[i]+='a'-'A';
					}
					if(word[i]==','||word[i]=='.')
						word[i]='\0';
				}
				wordlist[word]++;
			}
			word.clear();
		}
	for (const auto& word : wordlist)
	{
		cout<<'"'<<word.first<<'"'<<'\''<<'s'<<" amount is "<<word.second<<endl;
	}
}*/