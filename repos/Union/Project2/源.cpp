#include<iostream>
#include<assert.h>
using namespace std;
// 使用union来创建node
typedef enum{Value,Length} Tag;
typedef struct Node1
{
	Tag tag;
	union
	{
		int len;
		double data;
	};
	Node1* next;
	Node1(Tag t, Node1* p = NULL)
	{
		tag = t;
		next = p;
	}
} *list1;
void init_list(list1& l)
{
	l = (list1) new Node1(Length);
	l->len = 0;
	l->next = nullptr;
}
void test01(list1& l)
{
	Node1* t = new Node1(Value);
	l->next = t;
	t->data = 1.76;
}
void print(list1& l)
{
	Node1* curr =l;
	while (curr->next)
	{
		cout<<curr->next->data;
		curr = curr->next;
	}
}
// 使用继承来创建node
struct node
{
	node* next;
};
struct node_value:node
{
	double data;
	node_value(double d, node* p = NULL):data(d){next = p;}
};
struct node_len :node
{
	int len;
	node_len(int l,node* p = NULL):len(l){next = p;}
};

class list
{
	node_len* head;
public:
	list(){head = new node_len(0); }
	void test01() {node_value* t = new node_value(1.3);head->next = t;head->len++; }
	void print(){
		node_value* curr = (node_value*)head->next;
		while(curr)
		{ 
			cout<<curr->data; 
			curr = (node_value*)(curr->next);
		}
	}
};

// 利用继承的第一种方案
class list2
{
	Node1* head;
public:
	list2(){head = new Node1(Length);head->len = 0;}
	void test01()
	{
		Node1* t = new Node1(Value);
		t->data = 1.74;
		head->next = t;
	}
	void print()
	{
		Node1* curr = head;
		while (curr->next)
		{
			cout<<curr->next->data;
			curr=curr->next;
		}
	}
};
int main()
{
	list1 l0;
	init_list(l0);
	test01(l0);
	print(l0);

	cout<<endl;
	list2 l;
	l.test01();
	l.print();
	return 0;
}