/*#include<iostream>
#include<time.h>
using namespace std;
class Node
{
public:
	int num;
	Node* next;
	Node(int a){num=a;next=NULL;}
	Node(Node &a){num=a.num;next=a.next;}
	Node() {next=NULL; }
};

class List
{
	Node* head;
	Node* tail;
	
public:
	int node_count;
	void Insert(int);
	void Remove(int);
	void Find(int);
	void Print();

	List (){head=tail=NULL;node_count=0;}
	~List();
};

void List::Insert(int n)
{
	Node* p=new Node(n);
	if (head == NULL)
	{	
		head=tail=p;
		node_count++;
		return;
	}
	if (n < head->num)
	{
		p->next=head;
		head=p;
		node_count++;
		return;
	}
	if (n > tail->num)
	{
		tail->next=p;
		tail=p;
		node_count++;
		return;
	}
	Node*curr=head;
	while (curr!= NULL)
	{
		if (n <= curr->next->num&&n >= curr->num)
		{
			p->next=curr->next;
			curr->next=p;
			node_count++;
			return;
		}
		curr=curr->next;
	}
	
}
void List::Remove(int n)
{
	if(head->num>n||tail->num<n)
		return;
	if (head->num == n)
	{
		Node*p=head;
		head=head->next;
		if(head==NULL)
			tail=NULL;
		delete p;
		node_count--;
		return;
	}
	Node*curr(head);
	while (curr->next!= NULL)
	{
		if (n == curr->next->num)
		{
			Node*p=curr->next;
			curr->next=curr->next->next;
			delete p;
			node_count--;
			return;
		}
		curr=curr->next;
	}
	return;
}
void List::Print()
{
	Node*curr(head);
	while (curr!= NULL)
	{
		cout<<curr->num<<" ";
		curr=curr->next;
	}
	return;
}
void List::Find(int n)
{
	int cnt=1;
	Node*curr(head);
	while (curr!=NULL)
	{
		if(n==curr->num)
		{
			cout<<n<<"是第"<<cnt<<"个节点"<<endl;
			return;
		}
			
		curr=curr->next;
			cnt++;
	}
	cout<<"节点未找到"<<endl;
}
List::~List()
{
	if(head==NULL)
		return;
	Node*curr,*after;
	curr=head;
	after=head->next;
	while (curr != NULL)
	{
		delete curr;
		curr=after;
		if(after!=NULL)
		after=after->next;
	}
}

int main()
{
	srand(unsigned(time(NULL)));
	List nums;
	
	for (int i = 0; i < 10; i++)
	{
		nums.Insert(rand()%10+1);
	}
	nums.Print();
	for (int i = 0; i < 10; i++)
	{
		nums.
	}
	return 0;
}*/