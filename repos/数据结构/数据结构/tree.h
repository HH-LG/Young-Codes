#pragma once
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
//page147 test05 序号从1开始
int find_common_parent(int i,int j)
{
	while (i != j)
	{
		if(i<j)
			j=j/2;
		else if(i>j)
			i=i/2;
	}
	return i;
}
struct node
	{
		int data;
		node *lp=NULL,*rp=NULL;
		bool ltag=0,rtag=0;
	};
//thread_tree
class thread_tree
{	
private:
	int type;	//0-inorder,1-preorder,-1-postorder
	 node *root;
public:
	node* get_root()
	{
		return root;
	}
	void init_tree()
	{
		queue<node*> qa;
		queue<node*> qp;
		int data;
		while (cin >> data)
		{
			node* t=new node();
			t->data=data;
			qa.push(t);
		}
		cin.clear();
		cin.ignore();
		node *lc,*rc=NULL,*cur;
		root=qa.front();
		qa.pop();
		qp.push(root);
		while (!qa.empty())
		{
			cur=qp.front();
			qp.pop();
			lc=qa.front();
			qa.pop();
			if (!qa.empty())
			{
				rc=qa.front();
				qa.pop();
			}
			if (lc&&lc->data != -1)
				cur->lp=lc;
			else
				delete lc;
			if(rc&&rc->data!=-1)
				cur->rp=rc;
			else
				delete rc;
			if(lc)
				qp.push(cur->lp);
			if(rc)
				qp.push(cur->rp);
		}
		node* pre=NULL;
		inti_tread(root,pre);
		pre->rp=NULL;

	}
	void inti_tread(node*cur,node*&pre)
	{
		if (cur != NULL)
		{
			inti_tread(cur->lp,pre);
			if (cur->lp == NULL)
			{
				cur->lp=pre;
				cur->ltag=1;
			}
			if (pre&&pre->rp == NULL)
			{
				pre->rp=cur;
				pre->rtag=1;
			}
			pre=cur;
			inti_tread(cur->rp,pre);
		}

	}
	void level_order()
	{
		if (root)
		{
			queue<node*> q;
			q.push(root);
			while (!q.empty())
			{
				node* t=q.front();
				q.pop();
				cout<<t->data<<' ';
				if(t->ltag==0&&t->lp)
					q.push(t->lp);
				if(t->rtag==0&&t->rp)
					q.push(t->rp);
			}
		}
	}
	//page162 test03
	void post_order_nonre()
	{
		node *cur=root,*r=NULL;
		stack<node*> s;
		while (cur || !s.empty())
		{
			if (cur)
			{
				s.push(cur);
				if(!cur->ltag)
					cur=cur->lp;
				else
					cur=NULL;
			}
			else
			{
				cur=s.top();
				if (!cur->rtag&&cur->rp!=NULL&&cur->rp!=r)
				{
					cur=cur->rp;
				}
				else
				{
					s.pop();
					cout<<cur->data<<' ';
					r=cur;
					cur=NULL;
				}
			}
		}
	}
	//test05
	int height()
	{
		int height=0;
		queue<bool> qb;
		queue<node*> q;
		if (root)
		{
			q.push(root);
			qb.push(false);
			qb.push(true);
			while (!q.empty())
			{
				
				node* t=q.front();
				q.pop();
				if (t->lp != NULL && t->ltag == 0)
				{
					q.push(t->lp);
					qb.push(false);
				}
				if (t->rp != NULL && t->rtag == 0)
				{
					q.push(t->rp);
					qb.push(false);
				}
				qb.pop();
				if (qb.front())
				{
					height++;
					qb.pop();
					qb.push(true);
				}
			}
		}
		return height;
	}
	int height2()
	{
		if(root==NULL)
			return 0;
		int front=-1,rear=-1,last=0,height=0;
		node *q[100],*cur;
		q[++rear]=root;
		while (front < rear)
		{
			cur=q[++front];
			if (cur->lp != NULL && cur->ltag == 0)
				q[++rear]=cur->lp;
			if (cur->rp != NULL && cur->rtag == 0)
				q[++rear] = cur->rp;
			if (last == front)
			{
				height++;
				last=rear;
			}
		}
		return height;
	}
	//test06
protected:
	node* init_tree(int pre[], int in[],int& ps,int pe,int is,int ie)
	{
		if(ps>pe||is>ie)
			return NULL;
		int i;
		node* cur=new node();
		cur->data=pre[ps];					//ps=0,pe=n-1
		for(i=is;i<=ie&&in[i]!=pre[ps];i++)//is=0,ie=n
		if (i > ie)
		{
			delete cur;
			return NULL;
		}
		ps++;
		cur->lp=init_tree(pre,in,ps,pe,is,i-1);
		cur->rp=init_tree(pre,in,ps,pe,i+1,ie);
		return cur;
	}
	int degree2a(node* r)
	{
		if (r == NULL)
			return 0;
		if (r->lp != NULL && r->ltag != 1 && r->rp != NULL && r->rtag != 1)
			return degree2a(r->lp) + degree2a(r->rp) + 1;
		else
			return degree2a(r->lp) + degree2a(r->rp);
	}
	node* pre_order_k(node* cur, int& k)
	{
		if (cur == NULL)
			return NULL;
		if (k == 1)
			return cur;
		k--;
		node* tmp=pre_order_k(cur->lp, k);
		if(tmp==NULL)
				return pre_order_k(cur->rp, k);
		return tmp;
	}
	void swap(node* cur)
	{
		if(!cur)
			return;
		node* tmp=cur->lp;
		cur->lp=cur->rp;
		cur->rp=tmp;
		swap(cur->lp);
		swap(cur->rp);
	}
	void destory(node* cur)
	{
		if(cur)
		{ 
			if (cur->lp != NULL)
				destory(cur->lp);
			if (cur->rp != NULL)
				destory(cur->rp);
			delete cur;
		}
	}
public:
	void init_tree_with_sequence(int pre[], int in[], int ps, int pe, int is, int ie)
	{
		root=init_tree(pre, in, ps, pe, is, ie);
	}
	//test 07
	bool is_complete()
	{
		queue<node*> q;
		if(!root)
			return true;
		q.push(root);
		while (!q.empty())
		{
			node* tmp = q.front();
			q.pop();
			if (tmp)
			{
				q.push(tmp->lp);
				q.push(tmp->rp);
			}
			else
			{
				while(!q.empty())
				{ 
					tmp=q.front();
					q.pop();
					if(tmp==NULL)
						return false;
				}
				
			}
		}
		return true;
	}
	//test 08
	int degree2()
	{
		if(!root)
			return 0;
		queue<node*> q;
		int cnt=0;
		q.push(root);
		while (!q.empty())
		{
			int c=0;
			node *tmp=q.front();
			q.pop();
			if (tmp->lp&&tmp->ltag == 0)
			{
				q.push(tmp->lp);
				c++;
			}
			if (tmp->rp&&tmp->rtag == 0)
			{
				q.push(tmp->rp);
				c++;
			}
			cnt+=c/2;
		}
		return cnt;
	}
	int degree2a()
	{
		return degree2a(root);
	}
	//test 09
	void swap()
	{
		swap(root);
	}
	//test 10 只使用于non-thread-tree
	int pre_order_k(int k)
	{
		return pre_order_k(root,k)->data;
	}
	//test 11
	node* dele(int x)
	{
		if(root==NULL)
			return NULL;
		if (root->data == x)
			return root;
		node *pa,*pb;
		thread_tree a,b;
		a.root=root->lp;
		b.root=root->rp;
		pa=a.dele(x);
		if (pa)
		{
			root->lp=NULL;
			destory(pa);
		}
		pb=b.dele(x);
		if (pb)
		{
			root->rp=NULL;
			destory(pb);
		}
		return NULL;
	}
	void dele1(int x)
	{
		node* r=dele(x);
		if (r)
		{
			destory(r);
			root=NULL;
		}
	}
	void dele2(int x)
	{
		if (root == NULL)
			return;
		if (root->data == x)
		{
			destory(root);
			return;
		}
		queue<node*> q;
		q.push(root);
		while (!q.empty())
		{
			node* cur=q.front();
			q.pop();
			if (cur->lp)
			{
				if (cur->lp->data == x)
				{
					destory(cur->lp);
					cur->lp=NULL;
				}
				else
					q.push(cur->lp);
			}
			if(cur->rp)
			{
				if (cur->rp->data == x)
				{
					destory(cur->rp);
					cur->rp = NULL;
				}
				else
					q.push(cur->rp);
			}
		}
	}
	//test 12
	void print_x_ancestors(int x)
	{
		struct data{
			bool tag=false;
			node* p;
		}stack[100];
		int top=0;
		node *cur=root,*last=NULL;
		while (cur || top != 0)
		{
			if (cur!= NULL)
			{
				stack[top++].p=cur;
				cur=cur->lp;
			}
			else
			{
				cur=stack[top-1].p;
				if (cur->rp != NULL&&cur->rp!=last)
				{
					cur=cur->rp;
				}
				else
				{
					if (cur->data == x)
					{
						for (int i = 0; i < top-1; i++)
						{
							if (!stack[i].tag)
							{
								cout << stack[i].p->data << ' ';
								stack[i].tag = true;
							}
						}
					}
					last=cur;
					top--;
					cur=NULL;
				}
			}
		}
	}
	//test 13
	void ANCESTER(node *p, node *q, node *&r)
	{
		struct
		{
			node *p;
		}stack[100],s1[10],s2[10];
		int top=0,top1,top2,i;
		node *last=NULL,*cur=root;
		while (cur || top)
		{
			if (cur)
			{
				stack[top++].p=cur;
				cur=cur->lp;
			}
			else
			{
				cur=stack[top-1].p;
				if (cur->rp != NULL && cur->rp!=last)
				{
					cur=cur->rp;
				}
				else
				{
					if (cur == p )
					{ 
						for (int i = 0; i < top - 1; i++)
						{
							s1[i].p=stack[i].p;
						}
						top1=top-1;
					}
					if(cur==q)
					{ 
						for (int i = 0; i < top - 1; i++)
						{
							s2[i].p = stack[i].p;
						}
						top2=top-1;
					}
					last=cur;
					top--;
					cur=NULL;
				}
			}
		}
		for (i = 0; i < top1&&i < top2&&s1[i].p==s2[i].p; i++);
		r=s1[i-1].p;
	}
	//test 14
	int width()
	{
		if(root==NULL)
			return 0;
		int cnt=1,front=-1,rear=-1,last;
		node* queue[100];
		queue[++rear]=root;
		last=rear;
		while (front != rear)
		{
			node *cur=queue[++front];
			if(cur->lp)
				queue[++rear]=cur->lp;
			if(cur->rp)
				queue[++rear]=cur->rp;
			if (front == last)
			{
				if(rear-front>cnt)
					cnt=rear-front;
				last=rear;
			}
		}
		return cnt;
	}
	//test 15
	void pre_to_post(int *A, int *B, int sa,int ea,int sb,int eb)
	{
		if(sa>ea||sb>eb)
			return;
		B[eb]=A[sa];
		pre_to_post(A,B,sa+1,(sa+ea)/2,sb,(sb+eb)/2-1);
		pre_to_post(A,B,(sa+ea)/2+1,ea, (sb + eb) / 2,eb-1);
	}
	//test 16
	void link_leaf()
	{
		node *cur=root,*p;
		queue<node*> q;
		stack<node*> s;
		while (cur || !s.empty())
		{
			if (cur)
			{
				cout<<cur->data;
				if (!(cur->lp||cur->rp))
				{
					q.push(cur);
				}
				s.push(cur);
				cur=cur->lp;
			}
			else
			{
				cur=s.top();
				s.pop();
				if (cur->rp)
				{
					cur=cur->rp;
				}
				else
				{
					cur=NULL;
				}
			}
		}
		cur=q.front();
		q.pop();
		while (!q.empty())
		{
			p=q.front();
			q.pop();
			cur->rp=p;
			cur=p;
		}
	}
	//test 17
	bool is_similar(node *a,node *b)
	{
		if(!a&&!b)
			return true;
		if(a&&b)
			if(!a->lp && !a->rp && !b->lp && !b->rp)
				return true;
			else
				return is_similar(a->lp,b->lp)&&is_similar(a->rp,b->rp);
		else
			return false;
		
	}
	//test 18 inorder tree find postorder post_node
	node *get_post(node *cur)
	{
		node *q;
		if(cur->rtag==0)
			q=cur->rp;
		else if(cur->ltag==0)
			q=cur->lp;
		else
		{
			while(cur->ltag==1&&cur->lp!=NULL)
				cur=cur->lp;
			if(cur->ltag==0)
				q=cur->lp;
			else
				q=NULL;
		}
		return q;
	}
	//test 19
	//几种可行思路
	//int WPL(node* root, int h)
	//{
	//	if (!root)
	//		return 0;
	//	if (!root->lp && !root->rp)
	//	{
	//		return root->weight*h;
	//	}
	//	else
	//	{
	//		return WPL(root->lp, h + 1) + WPL(root->rp, h + 1);
	//	}
	//}
	//test 20
	void out_in()
	{
		out_inorder(root,1);
	}
	void out_inorder(node* root,int deep)
	{
		if(!root)
			return;
		if(!root->lp&&!root->rp)//叶节点是数值直接打印
			cout<<root->data;
		else
		{
			if (deep > 1)//不要最外的括号
				cout << '(';
			out_inorder(root->lp, deep + 1);

			cout << root->data;
			out_inorder(root->rp, deep + 1);
			if (deep > 1)
				cout << ')';
		}
	}
	//另，使用非递归算法应该很难
	void out_in_nonre()
	{
		node *stack[100],*cur;
		int top=-1;
		cur=root;
		while (cur || top != -1)
		{
			if (cur)
			{
				stack[++top]=cur;
				cur=cur->lp;
			}
			else
			{
				cur=stack[top];
				top--;
				cout<<cur->data;
				if (cur->rp)
					cur=cur->rp;
				else
					cur=NULL;
			}
		}
	}
	//08
	void path(node *r,int p)
	{
		node *stack[100],*cur=r,*last=NULL;
		int top=0;
		while (cur||top != 0)
		{
			if (cur)
			{
				stack[top++]=cur;
				cur=cur->lp;
			}
			else
			{
				cur=stack[top-1];
				if (cur->rp&&cur->rp != last)
				{
					cur=cur->rp;
				}
				else
				{
					if (cur->data == p)
					{
						for(int i=0;i<top;i++)
							cout<<stack[i]->data<<' ';
						break;
					}
					else
					{
						last=cur;
						top--;
						cur=NULL;
					}
				}
			}
		}
	}
	//09
	void max_path(node *r)
	{
		node *stack[100],*cur=r,*last=NULL,*path[100];
		int top=0,maxlen=0;
		while (cur || top != 0)
		{
			if (cur)
			{
				stack[top++]=cur;
				cur=cur->lp;
			}
			else
			{
				cur=stack[top-1];
				if (cur->rp&&cur->rp != last)
					cur=cur->rp;
				else
				{
					if (top > maxlen)
					{
						maxlen=top;
						for(int i=0;i<top;i++)
							path[i]=stack[i];
					}
					top--;
					last=cur;
					cur=NULL;
				}
			}
		}
		for(int i=0;i<maxlen;i++)
			cout<<path[i]->data
<<' ';
	}
	//12
	node *link_leaves()
	{
		node *stack[100],*cur=root,*queue[100];
		int top=0,cnt=0;

		while (cur || top != 0)
		{
			if (cur)
			{
				if(cur->lp==NULL&&cur->rp==NULL)
					queue[cnt++]=cur;
				stack[top++]=cur;
				cur=cur->lp;
			}
			else
			{
				cur=stack[top-1];
				if (cur->rp)
					cur=cur->rp;
				else
					cur=NULL;
				top--;
			}
		}
		cur=queue[0];
		for(int i=0;i<cnt-1;i++)
			queue[i]->rp=queue[i+1];
		return cur;
	}
};
class tree
{
	struct node_t
	{
		int data;
		node_t *sibling,*child;
	}*root;
protected:
	int height_re(node_t* cur)
	{
		if(!cur)
			return 0;
		if(!cur->child)
			return 1;
		cur=cur->child;
		int height=0;
		while (cur)
		{
			int tmp_h=height_re(cur);
			if (tmp_h > height)
			{
				height=tmp_h;
			}
			cur=cur->sibling;
		}
		return height+1;
	}
public:
	//page188 test05
	int height()
	{
		return height_re(root);
	}
	void test()
	{
		root=new node_t();
		root->child=new node_t();
		root->child->child= new node_t();
		root->child->sibling= new node_t();
		root->child->sibling->child=new node_t();
		root->child->sibling->child->child=new node_t();
		root->child->sibling->child->sibling=new node_t();
	}
};