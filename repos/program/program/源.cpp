#include<iostream>
using namespace std;
class Node
{
public:
	int num;
	Node* next;
	static int TotalCount;
	Node(int n);
	~Node();
};
Node::Node(int n)
{
	this->num=n;
	this->next=NULL;
}
class List
{
private:
	Node* head;
	Node* tail;
	int nodeCount;
public:
	List();
	void Insert(int n);
	void Remove(int n);
	void Find(int n);
	void Print();
};
List::List()
{
	head=tail=NULL;
	nodeCount=0;
}
void List::Print()
{
	Node*curr=head;
	while (curr != NULL)
	{
		cout<<curr->num;
		curr=curr->next;
	}
}
void List::Insert(int n)
{
	Node a(n);
	Node*curr=head;
	if (curr == NULL)
	{
		head=&a;
		tail=&a;
		return;
	}
	if (n < head->num)
	{
		a.next=head;
		head=&a;
		return;
	}
	if (n > tail->num)
	{
		tail->next=&a;
		return;
	}
	while (curr!=NULL)
	{
		if (curr->num<n&&curr->next->num>n)
		{
			a.next=curr->next;
			curr->next=&a;
			return;
		}
		curr=curr->next;
	}
}
int main()
{

}