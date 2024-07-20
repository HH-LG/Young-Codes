#pragma once
#include<iostream>
using namespace std;

enum Error_code { fail, sucess, duplicate_error, overflow ,underflow, lack_of_elements };
template<int M,class Entry>
struct BTnode
{
	//孩子比关键字多一个
	Entry keys[M-1];
	BTnode< M, Entry>* subs[M];
	int count;
	BTnode()
	{
		for (int i = 0; i < M; i++)
		{
			keys[i]=0;
			subs[i]=NULL;
		}
		subs[M]=NULL;
		count=0;
	}
};

template<int M,class Entry>
class BTree
{
private:
	BTnode< M, Entry>* root=NULL;

	void recursive_print(BTnode< M, Entry>*curr,int layer);
	bool recursive_search_tree(BTnode< M, Entry>* curr,Entry& target);
	Error_code recursive_insert(
		BTnode< M, Entry>* curr,
		Entry& target,
		Entry& median,
		BTnode< M, Entry>*& right
	);
	void insert_in(
		BTnode< M, Entry>* curr,
		Entry& target,
		BTnode< M, Entry>* right,
		int position
	);
	void split(
		BTnode< M, Entry>* curr,
		Entry& target,
		Entry& median,
		int position,
		BTnode< M, Entry>* extra_branch,
		BTnode< M, Entry>*& right
	);
	Error_code recursive_remove(
		BTnode< M, Entry>* curr,
		Entry& target,
		int& new_position
		);
	Error_code combine(
		BTnode< M, Entry>*curr,
		int position
	);
	void find_pre(
		BTnode< M, Entry>*curr,
		Entry& repla,
		int position,
		BTnode< M, Entry>*& new_dele,
		int& new_position
	);
	void find_next(
		BTnode< M, Entry>*curr,
		Entry& repla,
		int position,
		BTnode< M, Entry>*& new_dele,
		int& new_position
	);
	Error_code dele_in_node(
		BTnode< M, Entry>*curr,
		int position
	);
	void borrow_from_left(
		BTnode< M, Entry>* curr,
		int position
	);
	void borrow_from_right(
		BTnode< M, Entry>* curr,
		int position
	);
	Error_code arrange(
		BTnode< M, Entry>* curr,
		int position,
		Error_code result
	);
public:
	bool search_node(BTnode< M, Entry>* curr,Entry& x,int& position);
	bool search_tree(Entry x);
	Error_code insert(Entry x);
	Error_code remove(Entry x);
	void print();
};