#pragma once
#include<iostream>
using namespace std;
struct code
{
	char cod[15];
	char ch;
	int freq;
	friend ostream& operator<<(ostream& out,code& a);
};
struct Tree_node
{
	int freq;
	char ch;
	Tree_node* left;
	Tree_node* right;
	Tree_node(int f = 0, char a = '#') :freq(f), ch(a) 
	{ 
		left = right = NULL; }
	friend istream& operator>>(istream& in,Tree_node& a);
	friend ostream& operator<<(ostream& out,Tree_node& a);
};
struct TLnode
{
	Tree_node data;
	TLnode* next;
	TLnode(){next=NULL;}
	TLnode(int f,char c):data(f,c){
		next=NULL;}
	TLnode(Tree_node tn){data.freq=tn.freq;data.ch=tn.ch;next=NULL;data.left=tn.left;data.right=tn.right;}
};

class Tlist
{
protected:
	TLnode*head;
	void Huffman();
public:
	Tlist(){head=new TLnode(-1,'@'); }
	void insert(Tree_node a);
	void remove_f();
	bool single();
	void getcode();
};