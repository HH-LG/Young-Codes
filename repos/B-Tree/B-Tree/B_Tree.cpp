#include"B_tree.h"
#include<iostream>

template<int M, class Entry>
bool BTree< M, Entry>::search_node(BTnode< M, Entry>* curr,Entry& target,int& position)
{
	position=0;
	while(position<curr->count && target>curr->keys[position])
		position++;
	if (position < curr->count && target == curr->keys[position])
	{
		return true;
	}
	else
		return false;
}

template<int M, class Entry>
bool BTree< M, Entry>::recursive_search_tree(BTnode< M, Entry> * curr, Entry & target)
{
	int position;
	if (curr != NULL)
	{
		bool result = search_node(curr, target, position);
		if (result)
		{
			return true;
		}
		else
		{
			result=recursive_search_tree(curr->subs[position],target);
			return result;
		}
	}
	return false;
}

template<int M, class Entry>
bool BTree< M, Entry>::search_tree(Entry target)
{
	return recursive_search_tree(root,target);
}

template<int M, class Entry>
Error_code BTree< M, Entry>::insert(Entry x)
{
	Entry median;
	BTnode< M, Entry>* right;
	Error_code result=recursive_insert(root,x,median,right);
	if (result == overflow)
	{
		result=sucess;
		BTnode< M, Entry>* newroot=new BTnode< M, Entry>();
		newroot->keys[0]=median;
		newroot->subs[0]=root;
		newroot->subs[1]=right;
		newroot->count=1;
		root=newroot;
	}
	return result;
}

template<int M, class Entry>
Error_code BTree< M, Entry>::recursive_insert(
	BTnode< M, Entry>* curr,
	Entry& target,
	Entry& median,
	BTnode< M, Entry>*& right
	)
{
	Error_code result;
	if (curr == NULL)
	{
		median=target;
		right=NULL;
		result=overflow;
	}
	else
	{
		int position;
		if (search_node(curr, target, position))
		{
			result=duplicate_error;
		}
		else
		{
			Entry extra_data;
			BTnode< M, Entry>* extra_branch;
			result=recursive_insert(curr->subs[position],target,extra_data,extra_branch);
			if (result == overflow)
			{
				if (curr->count < M - 1)
				{
					result=sucess;
					insert_in(curr,extra_data,extra_branch,position);//position既代表target所在的子树又指明了溢出后的median应该放在哪个key
				}
				else
					split(curr,extra_data,median,position,extra_branch,right);
			}
		}
	}
	return result;
}

template<int M, class Entry>
void BTree< M, Entry>::insert_in(
	BTnode< M, Entry>* curr,
	Entry& target,
	BTnode< M, Entry>* right,
	int position)
{
	for (int i = curr->count; i > position; i--)
	{
		curr->keys[i]=curr->keys[i-1];
		curr->subs[i+1]=curr->subs[i];
	}
	curr->keys[position]=target;
	curr->subs[position+1]=right;
	curr->count++;
}

template<int M, class Entry>
void BTree< M, Entry>::split(
	BTnode< M, Entry>* curr,
	Entry& target,
	Entry& median,
	int position,
	BTnode< M, Entry>* extra_branch,
	BTnode< M, Entry>*&right)
{
	right=new BTnode< M, Entry>();
	int mid=M/2;
	if (position > mid)//考虑为什么不等
	{
		mid++;
		for (int i = mid ; i < M - 1; i++)
		{
			right->keys[i-mid]=curr->keys[i];
			right->subs[i-mid+1]=curr->subs[i+1];
		}
		right->count=M-mid-1;
		curr->count=mid;
		insert_in(right,target,extra_branch,position-mid);
		mid--;
	}
	else
	{
		for (int i = mid; i < M - 1; i++)
		{
			right->keys[i-mid]=curr->keys[i];
			right->subs[i-mid+1]=curr->subs[i+1];
		}
		right->count=M-mid-1;
		curr->count=mid;
		insert_in(curr,target,extra_branch,position);
	}
	median=curr->keys[mid];
	right->subs[0]=curr->subs[mid+1];
	curr->count--;
}

template<int M, class Entry>
void BTree< M, Entry>::print()
{
	if(root!=NULL)
		recursive_print(root,0);
	else
		cout<<"empty Btree!"<<endl;
}

template<int M, class Entry>
void BTree< M, Entry>::recursive_print(BTnode< M, Entry>* curr,int layer)
{
	static int depth;
	if(curr==NULL)
		return;
	for (int i = 0; i < curr->count; i++)
	{
		if(curr->subs[i]!=NULL)
			recursive_print(curr->subs[i],layer+1);
		else
			depth=layer;
		for(int i=0;i<3*depth-3*layer;i++)
			cout<<'-';
		cout<<curr->keys[i]<<endl;
	}
	if(curr->subs[curr->count]!=NULL)
		recursive_print(curr->subs[curr->count],layer+1);
}

template<int M, class Entry>
Error_code BTree< M, Entry>::remove(Entry x)
{
	Error_code result;
	int new_position;
	result=recursive_remove(root,x,new_position);
	if (result == underflow)
	{
		BTnode< M, Entry>* new_root=root->subs[0];
		delete root;
		root=new_root;
		result=sucess;
	}
	return result;
}

template<int M, class Entry>
Error_code BTree< M, Entry>::recursive_remove(
	BTnode< M, Entry>* curr,
	Entry & target,
	int& new_position
)
{
	int position;
	Error_code result;
	if (curr == NULL)
	{
		return fail;
	}
	if (!search_node(curr, target, position))
	{
		int new_position;
		result= recursive_remove(curr->subs[position],target,new_position);
		if (result == lack_of_elements || result == underflow)
		{
			result=arrange(curr,position,result);
		}
	}
	else
	{
		if (curr->subs[0] == NULL )//curr is a leaf
		{
			result = dele_in_node(curr,position);
		}
		else
		{
			Entry repla;
			BTnode< M, Entry>* new_dele;
			int sub_new_position;
			if (curr->subs[position] != NULL)
			{
				find_pre(curr,repla,position,new_dele, sub_new_position);
				new_position=position;
			}
			else
			{
				find_next(curr,repla,position,new_dele, sub_new_position);
				new_position=position+1;
			}
			curr->keys[position]=repla;
			result = dele_in_node(new_dele, sub_new_position);
			result = arrange(curr, new_position, result);
		}
	}
	return result;
}

template<int M, class Entry>
void BTree< M, Entry>::find_pre(
	BTnode< M, Entry>*curr,
	Entry& repla,
	int position,
	BTnode< M, Entry>*& new_dele,
	int& new_position
)
{
	new_dele =curr->subs[position];
	while (new_dele->subs[new_dele->count]!=NULL)
	{
		new_dele = new_dele->subs[new_dele->count];
	}
	repla=new_dele->keys[new_dele->count-1];
	new_position=new_dele->count-1;
}

template<int M, class Entry>
void BTree< M, Entry>::find_next(
	BTnode< M, Entry>* curr,
	Entry & repla, 
	int position,
	BTnode< M, Entry>*& new_dele,
	int& new_position
)
{
	new_dele=curr->subs[position+1];
	while (new_dele->subs[0] != NULL)
	{
		new_dele=new_dele->subs[0];
	}
	repla=new_dele->keys[0];
	new_position=0;
}

template<int M, class Entry>
Error_code BTree< M, Entry>::dele_in_node(BTnode< M, Entry>* curr, int position)
{
	for (int i = position; i < curr->count - 1; i++)
	{
		curr->keys[i] = curr->keys[i + 1];
		curr->subs[i+1]=curr->subs[i+2];
	}
	curr->count--;
	if (curr->count == 0)
	{
		return underflow;
	}
	else if (curr->count < (M + 1) / 2 - 1)
	{
		return lack_of_elements;
	}
	else
		return sucess;
}
template<int M, class Entry>
Error_code BTree< M, Entry>::combine(BTnode< M, Entry>* curr, int position)
{
	BTnode< M, Entry>* left=curr->subs[position];
	BTnode< M, Entry>* right=curr->subs[position+1];
	left->keys[left->count]=curr->keys[position];
	for (int i = 0; i < right->count; i++)
	{
		left->keys[i+left->count+1]=right->keys[i];
		left->subs[i+left->count+1]=right->subs[i];
	}
	left->subs[right->count+left->count+1]=right->subs[right->count];
	left->count=right->count+left->count+1;
	delete right;
	return dele_in_node(curr,position);
}

template<int M, class Entry>
void BTree< M, Entry>::borrow_from_left(BTnode< M, Entry>* curr, int position)
{
	BTnode< M, Entry>* node_to_borrow=curr->subs[position];
	BTnode< M, Entry>* node_be_borrowed = curr->subs[position-1];
	for (int i = node_to_borrow->count; i > 0; i--)
	{
		node_to_borrow->keys[i] = curr->keys[i - 1];
		node_to_borrow->subs[i + 1] = curr->subs[i];
	}
	node_to_borrow->keys[0] = curr->keys[position-1];
	node_to_borrow->subs[1]=node_to_borrow->subs[0];
	node_to_borrow->subs[0]=node_be_borrowed->subs[node_be_borrowed->count];
	curr->keys[position-1]=node_be_borrowed->keys[node_be_borrowed->count-1];
	node_to_borrow->count++;
	node_be_borrowed->count--;
}
template<int M, class Entry>
void BTree< M, Entry>::borrow_from_right(BTnode< M, Entry>* curr, int position)
{
	BTnode< M, Entry>* node_to_borrow = curr->subs[position];
	BTnode< M, Entry>* node_be_borrowed = curr->subs[position + 1];
	node_to_borrow->keys[node_to_borrow->count]=curr->keys[position];
	curr->keys[position]=node_be_borrowed->keys[0];
	node_to_borrow->subs[node_to_borrow->count+1]=node_be_borrowed->subs[0];
	for (int i = 0; i < node_be_borrowed->count - 1; i++)
	{
		node_be_borrowed->keys[i] = node_be_borrowed->keys[i + 1];
		node_be_borrowed->subs[i] = node_be_borrowed->subs[i + 1];
	}
	node_be_borrowed->subs[node_be_borrowed->count-1]=node_be_borrowed->subs[node_be_borrowed->count];
	node_be_borrowed->count--;
	node_to_borrow->count++;
}
template<int M, class Entry>
Error_code BTree< M, Entry>::arrange(BTnode< M, Entry>* curr, int position,Error_code result)
{
	Error_code res=result; 
	if (position < curr->count)
	{
		if (curr->subs[position + 1]->count > (M + 1) / 2 - 1)
		{
			borrow_from_right(curr, position);
			result = sucess;
		}
	}
	else if (position > 0)
	{
		if (curr->subs[position - 1]->count > (M + 1) / 2 - 1)
		{
			borrow_from_left(curr, position);
			result = sucess;
		}
	}
	if (result != sucess)
		result = combine(curr, position);
	return result;
}


