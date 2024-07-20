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
				
					if(word[i]==','||word[i]=='.')
						word[i]='\0';
				}
				wordlist[word]++;
			}
			word.clear();
		}
	
}*//