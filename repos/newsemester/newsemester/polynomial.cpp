#include<iostream>
#include<fstream>

using namespace std;

struct mono
{
	double para;
	int power;
	mono* next;
	mono(double para=0,int power=0,mono* next=NULL):para(para),power(power),next(next){}
	void input(){cin>>para>>power;}
	friend ostream& operator<<(ostream& out,mono& a);
	friend istream& operator>>(istream& in, mono& a);
};
ostream& operator<<(ostream& out, mono& a)
{
	if(a.para==0)
		return out;
	if(a.para!=1)
		out << a.para; 
	else if(a.power==0)
		out<<1;
	if (a.power != 0)
		out << "x^" << a.power;
	return out; 
}
istream& operator>>(istream& in, mono& a)
{
	char c;
	double x;
	in>>c>>a.para>>c;
	if (c == '/')
	{
		in>>x;
		a.para/=x;
		in>>c;
	}
	in>>a.power>>c;
	return in;
}
//次数从大到小，为了方便
class list
{
	mono* head;
	mono* tail;//注意移动tail,head->power表示最大次数加1
public:
	list();
	list(const list&);
	void adte(mono);
	void insert(mono);
	void remove();
	void print();
	friend list operator+(list,list);
	friend list operator-(list,list);
	friend list operator*(list,list);
	friend list operator*(mono,list);
	friend list operator/(list&, list);
	friend ostream& operator<<(ostream&, list);
	friend void diff(list&);
};
list::list()
{
	tail=head=new mono(0,-1);
}
list::list(const list& a)
{
	tail = head=new mono(0,-1);

	mono* curr=head;
	mono* pa=a.head;

	while (pa->next != NULL)
	{
		pa=pa->next;
		mono* t=new mono(pa->para,pa->power);
		curr->next=t;
		curr=curr->next;
	}

	head->power=a.head->power;
	tail=curr;
}
//注意次数一定小于tail->power
void list::adte(mono a)
{
	if(a.para==0)
		return;
	if(a.power>head->power)
		head->power=a.power+1;
	mono* t = new mono(a.para, a.power);
	tail->next=t;
	tail=t;

	remove();
}
//相同的要融合，次数由大到小，系数为零要删除
void list::insert(mono a)
{
	if(a.para==0)
		return;
	//让head->power>a->power
	if(head->power<a.power+1)
		head->power=a.power+1;//次数要大1

	mono* t=new mono(a.para,a.power);
	if (head->next == NULL)
	{
		head->next=t;
		head->power=t->power+1;
		tail=t;
		return;
	}
	mono* curr=head;
	while (curr->next != NULL&& !(curr->power > t->power&&curr->next->power <= t->power))
		curr=curr->next;
	if (curr->next!=NULL&&curr->next->power == t->power)//需要系数相加
	{
		curr->next->para+=t->para;
		if (tail->next != NULL)//移动尾部
			tail = tail->next;
	}
	else
	{
		t->next=curr->next;
		curr->next=t;
		if (tail->next != NULL)//移动尾部
			tail=tail->next;
	}
	remove();
}
//删去所有零
void list::remove()
{
	mono* curr=head;

	while (curr->next != NULL)
	{
		if (curr->next->para == 0)
		{
			mono* t=curr->next;
			curr->next=curr->next->next;
			delete(t);
			if(curr->next==NULL)
				break;
		}
		curr=curr->next;
	}
	
	tail=curr;
	if(head->next==NULL)
		head->power=-1;
	else
		head->power=head->next->power+1;
}
void list::print()
{
	if (head->next == NULL)
	{
		cout<<"NULL list"<<endl;
		return;
	}
	mono* curr=head;
	while (curr->next != NULL)
	{
		curr=curr->next;
		cout<<*curr;
		if(curr->next!=NULL)
			if(curr->next->para>0)
				cout<<'+';
	}
}
list operator+(list a, list b)
{
	list c(a);
	
	mono* pb=b.head;
	while (pb->next != NULL)
	{
		pb=pb->next;
		mono t(pb->para,pb->power);
		c.insert(t);
	}
	return c;
}
list operator-(list a, list b)
{
	list c(a);

	mono* pb = b.head;
	while (pb->next != NULL)
	{
		pb = pb->next;
		mono t(-pb->para, pb->power);
		c.insert(t);
	}
	return c;
}
list operator*(mono a, list b)
{
	if (a.para == 0)
	{
		list c;
		return c;
	}
	list c(b);
	mono* p=c.head;
	while (p->next != NULL)
	{
		p=p->next;
		p->para*=a.para;
		p->power+=a.power;
	}
	return c;
}
list operator*(list a, list b)
{
	list c;
	mono* pb=b.head;
	while (pb->next != NULL)
	{
		pb=pb->next;
		mono m(pb->para,pb->power);
		c=c+m*a;
	}
	return c;
}
ostream& operator<<(ostream& out, list a)
{
	if (a.head->next == NULL)
	{
		out << 0;
		return out;
	}
	mono* curr = a.head;
	while (curr->next != NULL)
	{
		curr = curr->next;
		out << *curr;
		if (curr->next != NULL)
			if (curr->next->para > 0)
				out << '+';
	}
	return out;
}
void diff(list& a)
{
	mono* p=a.head;
	while (p->next != NULL)
	{
		p=p->next;
		p->para*=p->power;
		p->power--;
	}
	if(a.head->next!=NULL)
		a.head->power=a.head->next->power+1;
	else
		a.head->power=-1;
	a.remove();
}
list operator/(list& a, list b)
{
	list c;
	mono* pa=a.head;
	mono* pb=b.head->next;
	while (pa->next != NULL&&pb!=NULL)
	{
		pa=pa->next;
		if (pa->power >= pb->power)
		{
			mono m(pa->para/pb->para,pa->power-pb->power);
			c.adte(m);
			a=a-m*b;
		}
		else
		{
			return c;
		}
		pa=a.head;
	}
	return c;
}
int main()
{
	ifstream ifs("inputfile.txt");
	ofstream ofs("outfile.txt");
	int offset=-1;
	while(!ifs.eof())
	{
		if (offset != -1)
		{
			ofs<<endl;
			ifs.seekg(offset);
		}
		mono node;
		ifs >> node;
		list l1, l2, l3;
		while(! (node.para == 0 && node.power == 0))
		{
			l1.insert(node);
			ifs >> node;
		}
		char c;
		ifs.get(c);
		offset = ifs.tellg();
		ifs.get(c);
		char str[20];
		if (c != '(')
		{
			ifs.seekg(offset);
			ifs.getline(str, 20);
			diff(l1);
			ofs<<l1;
		}
		else
		{
			ifs.seekg(offset);
			ifs >> node;
			while (!(node.para == 0 && node.power == 0))
			{
				l2.insert(node);
				ifs >> node;
			}
			ifs.get(c);
			ifs.getline(str, 20);
			switch (str[0])
			{
			case 'A':
				l3 = l1 + l2;
				ofs<<l3;
				break;
			case 'S':
				l3 = l1 - l2;
				ofs<<l3;
				break;
			case 'D':
				l3 = l1 / l2;
				ofs<<"商："<<l3<<endl;
				ofs<<"余数:"<<l1;
				break;
			case 'M':
				l3 = l1 * l2;
				ofs<<l3;
				break;
			}
		}
		offset=ifs.tellg();
		ifs.get(c);
	}
}