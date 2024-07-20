/*#include <iostream>
#include <string>
using namespace std;
class String {
	char * text;
public:
	String(char * str);
	~String();
	void printStr() { cout << text << endl; }
};
String::String(char * str) {
	cout <<"enter 'String::String', str=>"<<str<<endl;
		text = new char[strlen(str) + 1];
	strcpy_s(text,strlen(str)+1,str);
}
String::~String() {
	cout << "enter 'String::~String', text = > "<<text<<endl; 
		delete[]text;
}
void main() {
	String str1((char*)"a1d11");
	String str2 = str1;
	str1.printStr();
	str2.printStr();
	cout << "ending main!" << endl;
}*/
/*
enter 'String::String', str=>a1d11
a1d11
a1d11
ending main!
enter 'String::~String', text = > a1d11
enter 'String::~String', text = > нннннннннннннннньЪRОн
*/