#pragma once
#include<iostream>
using namespace std;
template<class ElemType>
struct node
{
	ElemType data;

	node<ElemType>* next,*pred;
	int freq;
};
template<class ElemType>
class Linked_list
{
	node<ElemType>* head;
public:
	Linked_list(){head=new node<ElemType>(); }
	void input() 
	{
		node<ElemType>* cur=head;
		ElemType x;
		while (cin >> x)
		{
			node<ElemType>* p=new node<ElemType>();
			p->data=x;
			p->next=NULL;
			cur->next=p;
			cur=cur->next;
		}
		cin.clear();
		cin.ignore();
	}
	void print()
	{
		node<ElemType>* cur=head;
		while (cur->next != NULL)
		{
			cout<<cur->next->data<<' ';
			cur=cur->next;
		}
	}
	//test01
	void delete_all(ElemType x)
	{
		r_delete_all(x,head);
	}
	void r_delete_all(ElemType x, node<ElemType>* cur )
	{
		if(cur->next==NULL)
			return;

		if (cur->next->data == x)
		{
			node<ElemType>* tmp = cur->next;
			cur->next=cur->next->next;
			delete tmp;
			r_delete_all(x,cur);
		}
		else
		{
			cur=cur->next;
			r_delete_all(x,cur);
		}
	}
	//test03
	void reverse_out()
	{
		if(head->next==NULL)
			return;
		Linked_list<ElemType> l;
		l.head=head->next;
		l.reverse_out();
		cout<<head->next->data<<' ';
	}
	//test04
	void delete_min()
	{
		node<ElemType>* cur=head;
		node<ElemType>* pre=head;
		pre->data=INT_MAX;
		while (cur->next != NULL)
		{
			if (cur->next->data < pre->data)
			{
				pre=cur;
			}
			cur=cur->next;
		}
		node<ElemType>* tmp=pre->next;
		pre->next=tmp->next;
		delete tmp;
	}
	//test05 还能用“头插法“不断取一个节点插入到头节点后
	void reverse()
	{
		if(head->next==NULL)
			return;
		node<ElemType>* cur=head->next;
		node<ElemType>* des=NULL;
		node<ElemType>* start;
		while (cur->next != NULL)
		{
			start=cur->next;
			cur->next=des;
			des=cur;
			cur=start;
		}
		cur->next=des;
		head->next=cur;
	}
	//test06
	void increse()
	{
		if(head->next==NULL)
			return;
		
		node<ElemType>* cur=head->next;
		node<ElemType>* r=cur->next;
		node<ElemType>* pre;
		cur->next=NULL;
		cur=r;
		while (cur != NULL)
		{
			r=cur->next;
			pre=head;
			while(pre->next!=NULL&&pre->next->data<cur->data)
				pre=pre->next;
			cur->next=pre->next;
			pre->next=cur;
			cur=r;
		}
	}
	//test07
	void delete_range(ElemType a, ElemType b)
	{
		if(a>b)
			return;
		node<ElemType>* cur=head;
		while (cur->next != NULL)
		{
			if ((cur->next->data) >= a && (cur->next->data) <= b)
			{

				node<ElemType>* p = cur->next;
				cur->next=p->next;
				delete p;
			}
			else
				cur=cur->next;
		}
	}
	//test08 求出公共节点
	template<class ElemType>
	friend node<ElemType>* find_duplicate(Linked_list<ElemType> a, Linked_list<ElemType> b)
	{
		node<ElemType>* pa= a.head;
		node<ElemType>* pb= b.head;
		int lena=0,lenb=0,dl;
		while (pa->next != NULL)
		{
			lena++;
			pa=pa->next;
		}
		while (pb->next != NULL)
		{
			lenb++;
			pb = pb->next;
		}
		dl=lena-lenb;
		pa=a.head;
		pb=b.head;
		if (dl > 0)
			for (int i = 0; i < dl; i++)
				pa=pa->next;
		else
			for(int i=0;i<-dl;i++)
				pb=pb->next;
		while (pa != NULL)
		{
			if(pa==pb)
				return pa;
			pa=pa->next;
			pb=pb->next;
		}
		return NULL;
	}
	//test09
	void inc_out()
	{
		while (head->next != NULL)
		{
			node<ElemType>* pre_min=head,*cur=head,*tmp;
			ElemType min=head->next->data;
			while (cur->next != NULL)
			{
				if (cur->next->data < min)
				{
					pre_min=cur;
					min=cur->next->data;
				}
				cur=cur->next;
			}
			tmp=pre_min->next;
			pre_min->next=tmp->next;
			cout<<tmp->data<<' ';
			delete tmp;
		}
	}
	//test10
	void break_up1(Linked_list<ElemType>& b)
	{
		node<ElemType>*pb=b.head,*cur=head,*tmp;
		int cnt=0;
		while (cur!=NULL&&cur->next != NULL)
		{
			cnt++;
			if (cnt % 2 == 0)
			{ 
				tmp=cur->next;
				cur->next=tmp->next;
				tmp->next=NULL;
				pb->next = tmp;
				pb=pb->next;
				cnt++;
			}
			if (cur != NULL)
			{
				cur=cur->next;
			}
		}
	}
	void break_up2(Linked_list<ElemType>& b)
	{
		node<ElemType>* pa=head,*pb=b.head,*cur=head->next;
		head->next=NULL;
		int cnt=0;
		while (cur)
		{
			cnt++;
			if (cnt % 2 == 0)
			{
				pb->next=cur;
				pb=pb->next;
				cur = cur->next;
				pb->next=NULL;
			}
			else
			{
				pa->next = cur;
				pa = pa->next;
				cur = cur->next;
				pa->next = NULL;
			}
		}
	}
	//test11
	void break_up3(Linked_list<ElemType>& a, Linked_list<ElemType>& b)
	{
		node<ElemType>* pa = a.head, *pb = b.head, *cur = head->next,*tmp;
		head->next=NULL;
		int cnt=0;
		while (cur)
		{
			cnt++;
			if (cnt % 2 == 0)
			{
				tmp=cur;
				cur=cur->next;
				tmp->next=pb->next;
				pb->next=tmp;
			}
			else
			{
				tmp=cur;
				cur=cur->next;
				pa->next=tmp;
				pa=pa->next;
				pa->next=NULL;
			}
		}
	}
	//test16
	bool sub_seq(Linked_list<ElemType>& B)
	{
		node<ElemType>* ah=head,*pb=B.head,*p;
		while (ah->next != NULL)
		{
			p=ah;
			while (p->next != NULL&&pb->next!=NULL&&p->next->data == pb->next->data)
			{
				p=p->next;
				pb=pb->next;
			}
			if(pb->next==NULL)
				return true;
			else if (p->next == NULL)
			{
				return false;
			}
			else
			{
				ah=ah->next;
				pb=B.head;
			}
		}
		return false;
	}
	//test19 有表头循环链表
	void clear_all()
	{
		node<ElemType>* cur=head,*p=head,*tmp;
		ElemType min=INT_MAX;
		while (head->next != head)
		{
			cur=head;
			while (cur->next != head)
			{
				if (cur->next->data < min)
				{
					p = cur;
					min=cur->next->data;
				}
				cur=cur->next;
			}
			tmp=p->next;
			p->next=tmp->next;
			cout<<tmp->data;
			delete tmp;
			min=INT_MAX;
		}
		delete head;
	}
	//test20 有表头双向非循环
	node<ElemType>* Locate(ElemType x)
	{
		node<ElemType>* cur = head, *p,*pre;
		while (cur->next != NULL && cur->next->data != x)
			cur = cur->next;
		if (cur->next == NULL)
			return NULL;
		p = cur->next;
		p->freq++;
		while (p->pred != head && p->pred->data <= x)
		{
			if(p->next!=NULL)
				p->next->pred=p->pred;
			p->pred->next=p->next;
			pre=p->pred;
			p->pred=pre->pred;
			pre->pred->next=p;
			pre->pred=p;
			p->next=pre;
		}
		return p;
	}
	//test24
	void delete_duplicate()
	{
		bool* data = new bool[100]{ 0 };
		node<ElemType>* cur=head,*tmp;
		while (cur->next != NULL)
		{
			int index=abs(cur->next->data);
			if(data[index]==0)
			{ 
				data[index] = true;
				cur=cur->next;
			}
			else
			{
				tmp=cur->next;
				cur->next=tmp->next;
				delete tmp;
			}
		}
	}
	//test25
	void rearange()
	{
		Linked_list<ElemType> a,b;
		node<ElemType>*pa=a.head,*pb=b.head,*p,*ph=head;
		int i=0;
		while (head->next != NULL)
		{
			i++;
			p=head->next;
			head->next=p->next;
			if (i % 2 == 0)
			{
				p->next=pb->next;
				pb->next=p;
			}
			else
			{
				pa->next=p;
				pa=p;
				pa->next=NULL;
			}
		}
		pa=a.head;
		pb=b.head;
		while (pa->next != NULL)
		{
			p=pa->next;
			pa->next=p->next;
			ph->next=p;
			ph=p;
			ph->next=NULL;
			if (pb->next != NULL)
			{
				p = pb->next;
				pb->next = p->next;
				ph->next = p;
				ph = p;
				ph->next = NULL;
			}
		}
	}

	template<class ElemType>
	friend bool is_circular(Linked_list<ElemType> &a);
};


//stack&queue
//test04
template<class ElemType>
bool is_circular(Linked_list<ElemType> &a)
{
	stack<ElemType> x;
	node<ElemType>* cur = a.head;
	while (cur->next != NULL)
	{
		x.push(cur->next->data);
		cur = cur->next;
	}
	cur=a.head;
	while (!x.empty())
	{
		ElemType tmp=x.top();
		x.pop();
		if (cur->next->data != tmp)
		{
			return false;
		}
		cur=cur->next;
	}
	return true;
}