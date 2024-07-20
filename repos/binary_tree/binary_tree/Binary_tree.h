#pragma once
template<class Entry>
struct Binary_node
{
	Entry data;
	Binary_node<Entry>* left;
	Binary_node<Entry>* right;

	Binary_node();
	Binary_node(const Entry& x);
	Binary_node(const Binary_node& x);
};
template<class Entry>
class Binary_tree
{
protected:
	void recursive_preorder(Binary_node<Entry>* subtree,void(*visit)(Entry&));
	void recursive_inorder(Binary_node<Entry>* subtree, void(*visit)(Entry&));
	void recursive_postorder(Binary_node<Entry>* subtree, void(*visit)(Entry&));
	int  recursive_size(Binary_node<Entry>* subtree)const;
	void recursive_clear(Binary_node<Entry>* subtree);
	int  recursive_height(Binary_node<Entry>* subtree)const;
	void recursive_copy(Binary_node<Entry>* subtree,Binary_node<Entry>* curr);

	Binary_node<Entry>*root;
public:
	Binary_tree();
	Binary_tree(const Binary_tree& original);
	Binary_tree& operator=(const Binary_tree& original);
	~Binary_tree();

	bool empty()const;

	void preorder(void (*visit)(Entry&));
	void inorder(void(*visit)(Entry&));
	void postorder(void(*visit)(Entry&));
	void levelorder(void(*visit)(Entry&));

	int width();
	int size()const;
	void clear();
	int height()const;
	void insert(const Entry&);
};