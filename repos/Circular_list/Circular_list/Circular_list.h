#pragma once
#include<iostream>
using namespace std;
struct node
{
	int data;
	node* next;
	node(){next=NULL;}
	node(int x,node* p=NULL){next=p;data=x;}
};
class Circular_list
{
	node* head;
protected:
	node* rear;
public:
	int cnt;
	Circular_list(){rear=head=NULL;}
	void append(int x);
	bool remove(int position);
	void print();
	void Josephus(int n, int m);
};