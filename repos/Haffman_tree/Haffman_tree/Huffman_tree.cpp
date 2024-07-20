#include"Huffman_tree.h"
code table[100];
int cnt=0;
void Tlist::insert(Tree_node a)
{
	TLnode* t=new TLnode(a);
	TLnode* curr=head;
	while (curr->next != NULL)
	{
		if (curr->data.freq <= t->data.freq && t->data.freq <= curr->next->data.freq)
		{
			break;
		}
		curr=curr->next;
	}
	t->next=curr->next;
	curr->next=t;
}

void Tlist::remove_f()
{
	if(head->next==NULL)
		return;
	TLnode* t=head->next;
	head->next=head->next->next;
	delete(t);
}

bool Tlist::single()
{
	if(head->next!=NULL&&head->next->next==NULL)
		return true;
	else
		return false;
}


void Tlist::Huffman()
{
	while (!single()&&head->next!=NULL)
	{
		Tree_node t(0,'#');
		int f1=head->next->data.freq;
		int f2=head->next->next->data.freq;
		t.freq=f1+f2;

		t.left=new Tree_node(head->next->data);
		t.right=new Tree_node(head->next->next->data);
		remove_f();
		remove_f();
		insert(t);
	}
}

void visit_leaves_getcode(Tree_node*root, char*codestr, int code_len)
{
	if (root != NULL)
	{
		int i=0;
		char l[20];
		char r[20];
		char*strl=l;
		char*strr=r;
		for ( i= 0; i < code_len; i++)
		{
			strl[i]=codestr[i];
			strr[i] = codestr[i];
		}
		strl[i]='0';
		strr[i]='1';
		visit_leaves_getcode(root->left,strl,code_len+1);
		visit_leaves_getcode(root->right,strr,code_len+1);
		if (root->left == NULL && root->right == NULL)
		{
			if (root->ch == 'A')
			{
				root->ch='A';
			}
			int i;
			table[cnt].ch=root->ch;
			for (i = 0; i < code_len; i++)
			{
				table[cnt].cod[i]=codestr[i];
			}
			table[cnt].freq=root->freq;
			table[cnt].cod[i]='\0';
			cnt++;
		}
	}
}

void Tlist::getcode()
{
	Huffman();
	Tree_node*root=&head->next->data;
	char str[11]="0";
	int len=0;
	visit_leaves_getcode(root,str,0);
}

istream& operator>>(istream& in, Tree_node& a)
{
	in>>a.ch>>a.freq;
	return in;
}

ostream& operator<<(ostream& out, Tree_node& a)
{
	out<<a.ch<<' '<<"freq:"<<a.freq;
	return out;
}

ostream& operator<<(ostream& out, code& a)
{
	if(a.ch==' ')
		out<<'\''<<' '<<'\'';
	else if(a.ch=='\n')
		out<<"\\n";
	else
		out<<a.ch;
	out<<'\t'<<"code:"<<a.cod<<'\t'<<"freq:"<<a.freq;
	return out;
}