/*
#include<iostream>
using namespace std;
template<class T>
class node
{
public:
	T data;
	node* next;
	static int count;
	node();
	node(T data);
	node(const node& n);
	~node(){node<T>::count--;}
};

template<class T>
class list
{
	node<T>*head;
	node<T>*tail;
public:
	list() {head=tail=NULL;}
	list(T data);
	~list();
	void insert(T data);
	void dele(T data);
	void print();
	bool find(T data);
};
//node的模板
template<class T>
int node<T>::count=0;
template<class T>
node<T>::node()
{
	node<T>::count++;
	this->data = 0;
	next=NULL;
}
template<class T>
node<T>::node(T data)
{
	node<T>::count++;
	this->data=data;
	next=NULL;
}
template<class T>
node<T>::node(const node& n)
{
	this->data=n.data;
	this->next=n.next;
}

//list的模板
template<class T>
void list<T>::insert(T data)
{
	node<T> *n=new node<T>(data);
	if (head == NULL)
	{
		head=tail=n;
		return;
	}
	if (head->data >= data)
	{
		n->next=head;
		head=n;
		return;
	}
	if (tail->data <= data)
	{
		tail->next=n;
		tail=n;
		return;
	}
	node<T>*curr=head;
	while (!(curr->data <= data && data <= curr->next->data))
	{
		curr=curr->next;
	}
	n->next=curr->next;
	curr->next=n;
	return;
}
template<class T>
list<T>::list(T data)
{
	list<T>::insert(data);
}
template<class T>
void list<T>::dele(T data)
{
	node<T>*curr=head;
	if(head==NULL)
		return;
	if (!(head->data <= data && data <= tail->data))
	{
		return;
	}
	if (head->data == data)
	{
		head=head->next;
		delete curr;
		dele(data);
		return;
	}
	
	while (curr->next != NULL)
	{
		if (curr->next->data == data)
		{
			node<T>*temp=curr->next;
			curr->next=curr->next->next;
			delete temp;
			dele(data);
			return;
		}
		curr=curr->next;
	}
	return;
}
template<class T>
void list<T>::print()
{
	if (head == NULL)
	{
		return;
	}
	node<T>*curr=head;
	cout<<curr->data<<' ';
	while (curr->next != NULL)
	{
		curr=curr->next;
		cout<<curr->data<<' ';
	}
}
template<class T>
bool list<T>::find(T data)
{
	if (!(head->data <= data && tail->data >= data))
	{
		return false;
	}
	if (head->data == data)
	{
		return true;
	}
	node<T>*curr = head;
	while (curr->next != NULL)
	{
		curr = curr->next;
		if (curr->data == data)
		{
			return true;
		}
	}
	return false;
}
template<class T>
list<T>::~list()
{
	if (head == NULL)
	{
		return;
	}
	node<T>*curr=head;
	while (curr->next != NULL)
	{
		node<T>*temp=curr;
		curr=curr->next;
		delete temp;
	}
	delete curr;
}
int main()
{
	list<double> a;
	for (int i = 0; i < 20; i++)
	{
		a.insert(i/2.0*i/2.0-4*i/2.0+4);
	}
	a.print();
	cout<<endl<<node<double>::count;
	cout<<endl;
	cout<<a.find(56.25)<<endl;
	a.dele(0.25);a.dele(0);
	a.print();
	cout<<endl;
	cout<< node<double>::count;
}*/