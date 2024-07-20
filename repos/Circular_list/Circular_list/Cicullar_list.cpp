#include<iostream>
#include"Circular_list.h"

void Circular_list::append(int x)
{

	node* t=new node(x,head);
	if (head == NULL)
	{
		head=rear=t;
		t->next=t;
		cnt++;
		return;
	}
	rear->next=t;
	rear=rear->next;
	cnt++;
}

bool Circular_list::remove(int position)
{
	if(cnt==0)
		return false;
	position=position%cnt;
	node*curr=head;
	for(int i=0;i<position-1;i++)
		curr=curr->next;
	node* tmp=curr->next;
	if(position==cnt-1)
		rear=curr;
	curr->next=curr->next->next;
	cnt--;
	delete tmp;
	return true;
}

void Circular_list::print()
{
	node* curr=head;
	for (int i = 0; i < cnt; i++)
	{
		cout<<curr->data<<' ';
		curr=curr->next;
	}
}

void Circular_list::Josephus(int n,int m)
{
	for (int i = 1; i <= n; i++)
		this->append(i);
	node* curr=new node(0,head);
	while (this->cnt != 0)
	{
		this->print();
		cout<<endl;
		for (int i = 0; i < (m-1)%cnt; i++)
		{
			curr=curr->next;
		}
		if(curr->next==head)
			head=head->next;
		curr->next=curr->next->next;
		cnt--;
		if (curr->next == head)
		{
			rear=curr;
		}
	}
}