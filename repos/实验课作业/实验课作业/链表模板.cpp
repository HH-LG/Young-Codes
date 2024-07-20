#include<iostream>
using namespace std;

template<class T>
class Node
{
public:
	T data;
	Node<T>*next;
	Node() {next=NULL;data=0; }
};

template<class T>
class List
{
	Node<T>* head;
	Node<T>* tail;
	int count;
public:
	List (){head=tail=NULL;count=0;}
	void insert(T a);
	void remove(T a);
	void find(T a);
	void Print();
};

template<class T> void List<T>::insert(T a)
{
	Node<T>* temp=new Node<T>;
	temp->data=a;
		count++;
	if (head == NULL)
	{
		head=tail=temp;
		return;
	}
	if (a <= head->data)
	{
		temp->next=head;
		head=temp;
		return;
	}
	if (a >= tail->data)
	{
		tail->next=temp;
		tail=temp;
		return;
	}
	Node<T>* curr=head;
	while (curr->next != NULL)
	{
		if (curr->next->data >= a)
		{
			temp->next=curr->next;
			curr->next=temp;
			return;
		}
		curr=curr->next;
	}
}
template<class T> void List<T>::Print()
{
	Node<T>* curr=head;
	while (curr!=NULL)
	{
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<endl;
}
template<class T> void List<T>::remove(T a)
{
	if (head == NULL)
	{
		return;
	}
	Node<T>* curr=head;
	if (curr->data == a)
	{
		head=head->next;
		count--;
		delete curr;
		return;
	}
	while (curr->next!=NULL)
	{
		if (curr->next->data == a)
		{
			Node<T>* a=curr->next;
			curr->next=curr->next->next;
			count--;
			delete a;
			return;
		}
		curr=curr->next;
	}
}
template<class T> void List<T>::find(T a)
{
	if (head == NULL)
	{
		cout<<"This List is empty!";
		return;
	}
	Node<T>* curr = head;
	int cnt=1;
	if (curr->data == a)
	{
		cout<<cnt<<endl;
		return;
	}
	cnt++;
	while (curr->next != NULL)
	{
		if (curr->next->data == a)
		{
			cout<<cnt<<endl;
			return;
		}
		curr = curr->next;
		cnt++;
	}
	cout << "No such a number in the List!";
}

int main()
{
	List<int> a;
	for (int i = 0; i < 10; i++)
	{
		a.insert(i*i);
	}
	a.Print();
	a.find(64);
	for (int i = 0; i < 50; i++)
	{
		a.remove(2*i+1);
	}
	a.Print();
	a.find(64);
	a.find(65);
}