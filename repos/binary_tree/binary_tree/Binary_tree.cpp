#include"Binary_tree.h"
#include<iostream>
#include<queue>
using namespace std;

template<class Entry>
Binary_node<Entry>::Binary_node()
{
	left=right=NULL;
}

template<class Entry>
Binary_node<Entry>::Binary_node(const Entry& x)
{
	left=right=NULL;
	data=x;
}

template<class Entry>
Binary_node<Entry>::Binary_node(const Binary_node<Entry>& x)
{
	data=x.data;
	left=x.left;
	right=x.right;
}

template<class Entry>
Binary_tree<Entry>::Binary_tree()
{
	root=NULL;
}

template<class Entry>
Binary_tree<Entry>::~Binary_tree()
{
	clear();
}

template<class Entry>
bool Binary_tree<Entry>::empty()const
{
	return root == NULL;
}

template<class Entry>
void Binary_tree<Entry>::preorder(void(*visit)(Entry&))
{
	recursive_preorder(root,visit);
}

template<class Entry>
void Binary_tree<Entry>::inorder(void(*visit)(Entry&))
{
	recursive_inorder(root, visit);
}

template<class Entry>
void Binary_tree<Entry>::postorder(void(*visit)(Entry&))
{
	recursive_postorder(root, visit);
}

template<class Entry>
void Binary_tree<Entry>::recursive_preorder(Binary_node<Entry>* subtree, void(*visit)(Entry&))
{
	if (subtree != NULL)
	{
		visit(subtree->data);
		recursive_preorder(subtree->left,visit);
		recursive_preorder(subtree->right,visit);
	}
}

template<class Entry>
void Binary_tree<Entry>::recursive_inorder(Binary_node<Entry>* subtree, void(*visit)(Entry&))
{
	if (subtree != NULL)
	{
		recursive_inorder(subtree->left, visit);
		visit(subtree->data);
		recursive_inorder(subtree->right, visit);
	}
}

template<class Entry>
void Binary_tree<Entry>::recursive_postorder(Binary_node<Entry>* subtree, void(*visit)(Entry&))
{
	if (subtree != NULL)
	{
		recursive_postorder(subtree->left, visit);
		recursive_postorder(subtree->right, visit);
		visit(subtree->data);
	}
}

template<class Entry>
int Binary_tree<Entry>::size()const
{
	return recursive_size(root);
}

template<class Entry>
int Binary_tree<Entry>::recursive_size(Binary_node<Entry>* subtree)const
{
	if (subtree != NULL)
	{
		return recursive_size(subtree->left)+1+recursive_size(subtree->right);
	}
	else
		return 0;
}

template<class Entry>
void Binary_tree<Entry>::clear()
{
	recursive_clear(root);
	root=NULL;
}

template<class Entry>
void Binary_tree<Entry>::recursive_clear(Binary_node<Entry>* subtree)
{
	if (subtree != NULL)
	{
		recursive_clear(subtree->left);
		recursive_clear(subtree->right);
		delete subtree;
	}
}

template<class Entry>
int Binary_tree<Entry>::height()const
{
	return recursive_height(root);
}

template<class Entry>
int Binary_tree<Entry>::recursive_height(Binary_node<Entry>* subtree)const
{
	if (subtree != NULL)
	{
		return 1+(recursive_height(subtree->left)> recursive_height(subtree->right)? recursive_height(subtree->left): recursive_height(subtree->right));
	}
	else
		return 0;
}

template<class Entry>
void Binary_tree<Entry>::insert(const Entry& x)
{
	Binary_node<Entry>* curr=root;
	Binary_node<Entry>* t=new Binary_node<Entry>(x);
	Binary_node<Entry>* parent=root;
	bool flag_is_left=true;
	if (root == NULL)
	{
		root=t;
		return;
	}
	while (curr != NULL)
	{
		if (x <= curr->data)
		{
			parent=curr;
			flag_is_left=true;
			curr=curr->left;
		}
		else
		{ 
			parent=curr;
			flag_is_left=false;
			curr=curr->right;
		}
	}
	curr=t;
	if (flag_is_left)
	{
		parent->left=curr;
	}
	else
		parent->right=curr;
}

template<class Entry>
Binary_tree<Entry>::Binary_tree(const Binary_tree& original)
{
	recursive_copy(original.root,root);
}


template<class Entry>
void Binary_tree<Entry>::recursive_copy(Binary_node<Entry>* subtree,Binary_node<Entry>*curr)
{
	if (subtree != NULL)
	{
		curr=new Binary_node(subtree->data);
		recursive_copy(subtree->left,curr->left);
		recursive_copy(subtree->right,curr->right);
	}
}

template<class Entry>
Binary_tree<Entry>& Binary_tree<Entry>::operator=(const Binary_tree<Entry>& original)
{
	recursive_copy(original.root,root);
}

template<class Entry>
void Binary_tree<Entry>::levelorder(void(*visit)(Entry&))
{
}