#include"signal.h"
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
double Error=0;
signal::~signal()
{
	node* curr=head;
	node* next=head->next;
	while (curr != NULL)
	{
		delete curr;
		curr=next;
		if(next!=NULL)
			next=next->next;
	}
}
signal::signal(double* a, int ofs,int len)
{
	head=new node(0,NULL);
	if (ofs < 1)
	{
		ofs=2-ofs;
		cout<<"offset can't be less than 1."<<endl;
		cout<<"set offset to "<<ofs<<endl;
	}
	else if (ofs > len)
	{
		ofs-=len;
		cout << "offset can't be greater than length." << endl;
		cout << "set offset to " << ofs << endl;
	}
	offset=ofs;
	node*curr=head;
	double* p=a;
	int cnt=0;
	head->data=len;
	while (cnt!=len)
	{
		cnt++;
		node* t=new node(*p,NULL);
		curr->next=t;
		curr=curr->next;
		p++;
	}
}
signal::signal(const signal& a)
{
	head = new node(0, NULL);
	offset=a.offset;
	head->data=a.head->data;

	node* curr=head;
	node* pa=a.head;
	while (pa->next != NULL)
	{
		pa=pa->next;
		node* t=new node(*pa);
		curr->next=t;
		curr=curr->next;
	}
}
void signal::limited_in()
{
	cout << "please input start and end index:" << endl;
	int start, end;
	cin >> start>>end;
	if (start > end)
		return;
	if (head->next != NULL)
		return;
	node*curr = head;
	for (int i = 0; i < end - start + 1; i++)
	{
		double x;
		cin >> x;
		node*t = new node(x);
		curr->next = t;
		curr = curr->next;
	}
	head->data = end - start + 1;
	offset = 1 - start;
}
void signal::clear()
{
	node* curr = head;
	node* next = head->next;
	while (curr != NULL)
	{
		delete curr;
		curr = next;
		if (next != NULL)
			next = next->next;
	}
	head=new node(0,NULL);

}
void signal::set_offset(int n)
{
	offset=n;
}

double signal::get(int index)
{
	int n=index+offset;
	if (n<1 || n>head->data)
	{
		return 0;
	}
	node* curr=head;
	for(int i=0;i<n;i++)
		curr=curr->next;
	return curr->data;
}
double signal::sum()
{
	node* curr=head;
	double res=0;
	while (curr->next != NULL)
	{
		curr=curr->next;
		res+=curr->data;
	}
	return res;
}
void signal::print()
{
	node* curr=head;
	cout<<"data: ";
	while (curr->next != NULL)
	{
		curr=curr->next;
		cout.flags(ios::left);
		cout<<setw(5)<<curr->data;
	}
	cout<<endl;
	cout<<"index:";
	for (int i = 0; i < head->data; i++)
	{
		cout.flags(ios::left);
		cout << setw(5) << i+1-offset;
	}
}
void signal::write(int index,double data)
{
	int n=index+offset;
	if (n < 1)//整个信号插在前面，补零
	{
		int zeros=-(n-1);
		add0f(zeros);
		node* t=new node(data);
		t->next=head->next;
		head->next=t;
		head->data++;
		offset++;
		return;
	}
	node* curr=head;
	if (n > head->data+1)//在整个信号最后面，补零
	{
		int zeros=int(n-head->data)-1;
		add0r(zeros);
		node* t=new node(data);
		t->next=curr->next;
		curr->next=t;
		head->data++;
		return;
	}
	if(index<=0)
		offset++;
	for(int i=0;i<n-1;i++)
		curr=curr->next;
	node* t=new node(data);
	t->next=curr->next;
	curr->next=t;
	head->data++;
	return;
}
ostream& operator<<(ostream& out, signal a)
{
	out<<"****************signal data********************"<<endl;
	node* curr = a.head;
	out << "data: ";
	while (curr->next != NULL)
	{
		curr = curr->next;
		out.flags(ios::left);
		out << setw(5) << curr->data;
	}
	out << endl;
	out << "index:";
	for (int i = 0; i < a.head->data; i++)
	{
		out.flags(ios::left);
		out << setw(5) << i + 1 - a.offset;
	}
	out<<endl;
	return out;
}
int signal::get_index(int num)
{
	return num-offset;
}

void allign(signal& a, signal& b)
{
	int azeros = b.offset - a.offset;
	if (azeros > 0)//补前零
		a.add0f(azeros);
	else
		b.add0f(-azeros);

	azeros = int(b.head->data - a.head->data);
	if (azeros > 0)//补后零
		a.add0r(azeros);
	else
		b.add0r(-azeros);
}
double& signal::operator[](int index)
{
	Error=0;
	int n = index + offset;

	if(n<1||n>head->data)
		return Error;
	node* curr = head;
	for (int i = 0; i < n; i++)
		curr = curr->next;
	return curr->data;
}
signal signal::operator=(signal a)
{
	head = new node(0, NULL);
	offset = a.offset;
	head->data = a.head->data;

	node* curr = head;
	node* pa = a.head;
	while (pa->next != NULL)
	{
		pa = pa->next;
		node* t = new node(*pa);
		curr->next = t;
		curr = curr->next;
	}
	return *this;
}
signal operator+(signal a, signal b)
{
	allign(a,b);

	node* pa = a.head;
	node* pb = b.head;

	while (pa->next != NULL)
	{
		pa = pa->next;
		pb = pb->next;
		pa->data += pb->data;
	}

	return a;
}
signal operator-(signal a, signal b)
{
	allign(a,b);

	node* pa = a.head;
	node* pb = b.head;

	while (pa->next != NULL)
	{
		pa = pa->next;
		pb = pb->next;
		pa->data -= pb->data;
	}
	return a;
}
signal operator-(signal a)
{
	node* pa=a.head;
	while (pa->next != NULL)
	{
		pa=pa->next;
		pa->data=-pa->data;
	}
	return a;
}
signal operator*(double a, signal b)
{
	node* pa = b.head;
	while (pa->next != NULL)
	{
		pa = pa->next;
		pa->data = a*pa->data;
	}
	return b;
}
signal operator*(signal a, signal b)
{
	allign(a,b);

	node* pa = a.head;
	node* pb = b.head;

	while (pa->next != NULL)
	{
		pa = pa->next;
		pb = pb->next;
		pa->data *= pb->data;
	}
	return a;
}
signal linear_conv(signal a, signal b)
{
	signal res;
	node* curr = b.head;
	int delay = 1 - b.offset;

	while (curr->next != NULL)
	{
		curr = curr->next;
		signal t = a;
		t.delay(delay);
		res = res + curr->data*t;

		delay++;
	}
	//N.1,index=1-a.offset+1-b.offset
	//N.-1,index=a.head.data-a.offset+b.head.data-b.offset
	curr = res.head;
	int cnt = 1;
	while (curr->next != NULL)
	{
		if (cnt - res.offset < 1 - a.offset + 1 - b.offset
			|| cnt - res.offset>a.head->data - a.offset + b.head->data - b.offset)//下标越界，则删除节点
		{
			//将curr的下一个结点移除
			if (cnt < res.offset)
				res.offset--;
			res.head->data--;
			node* t = curr->next;
			curr->next = curr->next->next;
			delete t;
		}
		else
		{
			curr = curr->next;
			cnt++;
		}
	}
	return res;
}
signal circle_conv(signal a, signal b, int k)
{
	b.reverse();
	a.offset = 1;
	b.offset = 1;
	signal c;
	node* pc = c.head;

	double sum;
	for (int i = 0; i < k; i++)
	{
		sum = 0;
		int bidx = b.head->data - 1;
		int blen = b.head->data;
		int aidx = i;
		for (int j = 0; j < b.head->data; j++)
		{
			sum += a[(aidx++) % k] * b[(bidx++) % blen];
		}
		node* t = new node();
		t->data = sum;
		pc->next = t;
		pc = pc->next;
	}
	c.head->data = k;
	c.offset = 1;
	return c;
}
signal corr(signal a, signal b)
{
	b.reverse();
	return linear_conv(a,b);
}
double coef(signal a, signal b)
{
	double suma=0;
	double sumb=0;
	double absa=0;
	double absb=0;
	node* pa=a.head;
	node* pb=b.head;
	while (pa->next != NULL)
	{
		pa=pa->next;
		suma+=pa->data;
	}
	while (pb->next != NULL)
	{
		pb = pb->next;
		sumb += pb->data;
	}
	pa=a.head;
	pb=b.head;
	while (pa->next != NULL)
	{
		pa = pa->next;
		pa->data-=suma/a.head->data;
	}
	while (pb->next != NULL)
	{
		pb = pb->next;
		pb->data -= sumb/b.head->data;
	}
	pa = a.head;
	pb = b.head;
	while (pa->next != NULL)
	{
		pa = pa->next;
		absa+=pa->data*pa->data;
	}
	while (pb->next != NULL)
	{
		pb = pb->next;
		absb += pb->data*pb->data;
	}
	absa=sqrt(absa);
	absb=sqrt(absb);
	pa = a.head;
	pb = b.head;
	while (pa->next != NULL)
	{
		pa = pa->next;
		pa->data /= absa;
	}
	while (pb->next != NULL)
	{
		pb = pb->next;
		pb->data /=absb;
	}
	signal c=a*b;
	node* pc=a.head;
	double res=0;
	while (pc->next != NULL)
	{
		pc=pc->next;
		res+=pc->data;
	}
	return res;
}

void signal::add0f(int n)
{
	if(n<=0)
		return;
	for (int i = 0; i < n; i++)
	{
		node* t = new node(0);
		t->next=head->next;
		head->next=t;
	}
	offset+=n;
	head->data+=n;
}
void signal::add0r(int n)
{
	if(n<=0)
		return;
	node* curr=head;
	while (curr->next != NULL)
		curr=curr->next;
	for (int i = 0; i < n; i++)
	{
		node* t = new node(0);
		curr->next = t;
		curr=curr->next;
	}
	head->data+=n;
}
void signal::delay(int t)
{
	if (t > 0)
	{
		add0f(t);
	}
	else
	{
		add0r(-t);
	}
	offset-=t;
}
void signal::promt(int t)
{
	if (t > 0)
	{
		add0r(t);
	}
	else
	{
		add0f(-t);
	}
	offset += t;
}
void signal::reverse()
{
	if(head->next==NULL)
		return;
	if(head->next->next==NULL)
		return;
	node* pf=head->next;
	node* ps=head->next->next;
	pf->next=NULL;
	while (ps->next != NULL)
	{
		node* t=ps->next;
		ps->next=pf;
		pf=ps;
		ps=t;
	}
	ps->next=pf;
	head->next=ps;

	offset=int(head->data+1-offset);
}
void signal::upsample(int t)
{
	if(t<=0)
		return;
	node* curr=head;
	curr=curr->next;
	offset+=(offset-1)*(t-1);
	head->data+=(head->data-1)*(t-1);
	while (curr != NULL)
	{
		if (curr->next != NULL)
		{
			for (int i = 0; i < t - 1; i++)
			{
				node* t=new node(0);
				t->next=curr->next;
				curr->next=t;
				curr=curr->next;
			}
		}
		curr=curr->next;
	}
}
void signal::downsample(int t)
{
	int index=get_index(1);
	node* curr=head;
	while (curr!=NULL&&curr->next != NULL)
	{
		if (index%t != 0)
		{
			node*t=curr->next;
			curr->next=curr->next->next;//这里指向了下一位，index也要变
			delete t;
			head->data--;
			if(index<0)
				offset--;
			index++;
		}
		else
		{
			index++;
			curr=curr->next;
		}
	}
}
signal signal::diff()
{
	signal c;
	c.offset=offset;
	c.head->data=head->data;
	node*curr=head;
	node*pc=c.head;
	while (curr->next != NULL)
	{
		node* t=new node(0);
		if (curr->next->next != NULL)
		{
			t->data=curr->next->next->data;
		}
		t->data-=curr->next->data;
		pc->next=t;
		pc=pc->next;
		curr=curr->next;
	}
	return c;
}
signal signal::accum()
{
	signal c;
	c.offset = offset;
	c.head->data = head->data;
	node*curr = head;
	node*pc = c.head;
	double sum=0;
	while (curr->next != NULL)
	{
		sum+=curr->next->data;
		node*t=new node(sum);
		pc->next=t;
		pc=pc->next;
		curr=curr->next;
	}
	return c;
}

void signal::infinite_in()
{
	node* curr = head;
	if (curr->next != NULL)
	{
		cout << "signal has been initialized!" << endl;
		return;
	}

	cout << "please input doubles to initialize signal." << endl;
	cout << "input q to stop." << endl;
	double x;
	head->data = 0;
	while (cin >> x)
	{
		head->data++;
		node* t = new node(x);
		curr->next = t;
		curr = curr->next;
	}
	cin.clear();
	cin.ignore();
	offset = 1;
}

void inf_add0f(signal& a, int n)
{
	node* curr = a.head;
	if (curr->next != NULL)
	{
		cout << "signal has been initialized!" << endl;
		return;
	}

	cout << "please input doubles to initialize signal." << endl;
	cout << "input q to stop." << endl;
	double x;
	a.head->data = 0;
	for (int i = 0; i < n; i++)//加零

	{
		a.head->data++;
		node* t = new node(0);
		curr->next = t;
		curr = curr->next;
	}
	while (cin >> x)
	{
		a.head->data++;
		node* t = new node(x);
		curr->next = t;
		curr = curr->next;
	}
	cin.clear();
	cin.ignore();
	a.offset = 1;
}
void inf_add0r(signal& a, int n)
{

	node* curr = a.head;
	if (curr->next != NULL)
	{
		cout << "signal has been initialized!" << endl;
		return;
	}

	cout << "please input doubles to initialize signal." << endl;
	cout << "input q to stop." << endl;
	double x;
	a.head->data = 0;
	while (cin >> x)
	{
		a.head->data++;
		node* t = new node(x);
		curr->next = t;
		curr = curr->next;
	}
	for (int i = 0; i < n; i++)//加零

	{
		a.head->data++;
		node* t = new node(0);
		curr->next = t;
		curr = curr->next;
	}
	cin.clear();
	cin.ignore();
	a.offset = 1;
}
void inf_delay(signal& a, int t)
{
	node* curr = a.head;
	if (curr->next != NULL)
	{
		cout << "signal has been initialized!" << endl;
		return;
	}

	cout << "please input doubles to initialize signal." << endl;
	cout << "input q to stop." << endl;
	double x;
	a.head->data = 0;
	while (cin >> x)
	{
		a.head->data++;
		node* t = new node(x);
		curr->next = t;
		curr = curr->next;
	}
	cin.clear();
	cin.ignore();
	a.offset = 1-t;//延时
}
void inf_promt(signal& a, int t)
{
	node* curr = a.head;
	if (curr->next != NULL)
	{
		cout << "signal has been initialized!" << endl;
		return;
	}

	cout << "please input doubles to initialize signal." << endl;
	cout << "input q to stop." << endl;
	double x;
	a.head->data = 0;
	while (cin >> x)
	{
		a.head->data++;
		node* t = new node(x);
		curr->next = t;
		curr = curr->next;
	}
	cin.clear();
	cin.ignore();
	a.offset = 1 + t;//提前
}
void inf_reverse(signal& a)
{
	node* curr = a.head;
	if (curr->next != NULL)
	{
		cout << "signal has been initialized!" << endl;
		return;
	}

	cout << "please input doubles to initialize signal." << endl;
	cout << "input q to stop." << endl;
	double x;
	a.head->data = 0;
	while (cin >> x)
	{
		a.head->data++;
		node* t = new node(x);
		t->next=curr->next; 
		curr->next = t;
	}
	cin.clear();
	cin.ignore();
	a.offset = 1 ;
}
void inf_upsample(signal& a, int T)
{
	if(T<1)
		return;
	node* curr = a.head;
	if (curr->next != NULL)
	{
		cout << "signal has been initialized!" << endl;
		return;
	}

	cout << "please input doubles to initialize signal." << endl;
	cout << "input q to stop." << endl;
	double x;
	a.head->data = 0;
	while (cin >> x)
	{
		a.head->data++;
		node* t = new node(x);
		curr->next = t;
		curr = curr->next;
		for (int i = 0; i < T - 1; i++)
		{
			a.head->data++;
			node* t = new node(0);
			curr->next = t;

			curr = curr->next;
		}
	}
	cin.clear();
	cin.ignore();
	a.offset = 1 ;
}
void inf_downsample(signal& a, int T)
{
	if (T < 1)
		return;
	node* curr = a.head;
	if (curr->next != NULL)
	{
		cout << "signal has been initialized!" << endl;
		return;
	}

	cout << "please input doubles to initialize signal." << endl;
	cout << "input q to stop." << endl;
	double x;
	a.head->data = 0;
	int cnt=0;
	while (cin >> x)
	{
		if (cnt%T != 0)
		{
			cnt++;
			continue;
		}
		a.head->data++;
		node* t = new node(x);
		curr->next = t;
		curr = curr->next;
		cnt++;
	}
	cin.clear();
	cin.ignore();
	a.offset = 1;
}
signal inf_diff(signal& a)
{
	signal b;
	node* curr = b.head;
	node* pa=a.head;
	if (curr->next != NULL)
	{
		cout << "signal has been initialized!" << endl;
		return b;
	}

	cout << "please input doubles to initialize signal." << endl;
	cout << "input q to stop." << endl;
	double x;
	double y;
	bool fi=true;
	b.head->data = 0;
	while (cin >> y)
	{
		if (!fi)
		{
			b.head->data++;
			node* t = new node(y-x);
			curr->next = t;
			curr = curr->next;
		}
		fi=false;
		a.head->data++;
		node* tmp = new node(y);
		pa->next = tmp;
		pa = pa->next;
		x=y;
	}
	b.head->data++;
	node*t=new node(-x);
	curr->next=t;
	cin.clear();
	cin.ignore();
	b.offset = 1 ;
	a.offset=1;
	return b;
}
signal inf_accum(signal& a)
{
	signal b;
	node* curr = a.head;
	node* pb=b.head;
	if (curr->next != NULL)
	{
		cout << "signal has been initialized!" << endl;
		return b;
	}
	cout << "please input doubles to initialize signal." << endl;
	cout << "input q to stop." << endl;
	double x;
	a.head->data = 0;
	double sum=0;
	while (cin >> x)
	{
		a.head->data++;
		node* t = new node(x);
		curr->next = t;
		curr = curr->next;
		
		sum+=x;
		b.head->data++;
		node* tmp = new node(sum);
		pb->next = tmp;
		pb = pb->next;
	}
	cin.clear();
	cin.ignore();
	a.offset = 1;//延时
	b.offset = 1;
	return b;
}

signal inf_add(signal& a, signal& b)
{
	signal c;
	node* pa = a.head;
	node* pb = b.head;
	node* pc = c.head;
	if (pa->next != NULL || pb->next!=NULL)
	{
		cout << "signals has been initialized!" << endl;
		return c;
	}
	cout << "please input doubles to initialize signals." << endl;
	cout << "input q to stop." << endl;
	cout<<"1st signal, 2nd signal"<<endl;
	bool a_stop=false;
	bool b_stop=false;
	double x;
	double y;
	a.head->data = 0;
	while (!a_stop && !b_stop)
	{
		if (cin >> x)
		{
			a.head->data++;
			node* t = new node(x);
			pa->next = t;
			pa = pa->next;
		}
		else
		{
			x=0;
			cin.clear();
			cin.ignore();
			a_stop=true;
		}
		if (cin >> y)
		{
			b.head->data++;
			node* t = new node(y);
			pb->next = t;
			pb = pb->next;
		}
		else
		{
			y=0;
			cin.clear();
			cin.ignore();
			b_stop = true;
		}
		c.head->data++;
		node* t = new node(x+y);
		pc->next = t;
		pc = pc->next;
	}
	while (!a_stop)
	{
		if (cin >> x)
		{
			a.head->data++;
			node* t = new node(x);
			pa->next = t;
			pa = pa->next;
		}
		else
		{
			cin.clear();
			cin.ignore();
			a_stop = true;
			break;
		}
		c.head->data++;
		node* t = new node(x);
		pc->next = t;
		pc = pc->next;
	}
	while (!b_stop)
	{
		
		if (cin >> y)
		{
			b.head->data++;
			node* t = new node(y);
			pb->next = t;
			pb = pb->next;
		}
		else
		{
			cin.clear();
			cin.ignore();
			b_stop = true;
			break;
		}
		c.head->data++;
		node* t = new node(y);
		pc->next = t;
		pc = pc->next;
	}
	a.offset = 1 ;
	b.offset = 1 ;
	c.offset = 1 ;
	return c;
}
signal inf_mul(signal& a, signal& b)
{
	signal c;
	node* pa = a.head;
	node* pb = b.head;
	node* pc = c.head;
	if (pa->next != NULL || pb->next != NULL)
	{
		cout << "signals has been initialized!" << endl;
		return c;
	}
	cout << "please input doubles to initialize signals." << endl;
	cout << "input q to stop." << endl;
	cout << "1st signal, 2nd signal" << endl;
	bool a_stop = false;
	bool b_stop = false;
	double x;
	double y;
	a.head->data = 0;
	while (!a_stop && !b_stop)
	{
		if (cin >> x)
		{
			a.head->data++;
			node* t = new node(x);
			pa->next = t;
			pa = pa->next;
		}
		else
		{
			x = 0;
			cin.clear();
			cin.ignore();
			a_stop = true;
		}
		if (cin >> y)
		{
			b.head->data++;
			node* t = new node(y);
			pb->next = t;
			pb = pb->next;
		}
		else
		{
			y = 0;
			cin.clear();
			cin.ignore();
			b_stop = true;
		}
		c.head->data++;
		node* t = new node(x * y);
		pc->next = t;
		pc = pc->next;
	}
	while (!a_stop)
	{
		if (cin >> x)
		{
			a.head->data++;
			node* t = new node(x);
			pa->next = t;
			pa = pa->next;
		}
		else
		{
			cin.clear();
			cin.ignore();
			a_stop = true;
			break;
		}
		c.head->data++;
		node* t = new node(0);
		pc->next = t;
		pc = pc->next;
	}
	while (!b_stop)
	{

		if (cin >> y)
		{
			b.head->data++;
			node* t = new node(y);
			pb->next = t;
			pb = pb->next;
		}
		else
		{
			cin.clear();
			cin.ignore();
			b_stop = true;
			break;
		}
		c.head->data++;
		node* t = new node(0);
		pc->next = t;
		pc = pc->next;
	}
	a.offset = 1;
	b.offset = 1;
	c.offset = 1;
	return c;
}
signal inf_linear_conv(signal& a, signal& b)
{
	signal c;
	signal d;
	node* pa = a.head;
	node* pb = b.head;
	node* pc = c.head;
	node* pd = d.head;
	c.offset = 1;
	d.offset = 1;
	signal res;
	node* pr=res.head;
	if (pa->next != NULL || pb->next != NULL)
	{
		cout << "signals has been initialized!" << endl;
		return c;
	}
	cout << "please input doubles to initialize signals." << endl;
	cout << "input q to stop." << endl;
	cout << "1st signal, 2nd signal" << endl;
	bool a_stop = false;
	bool b_stop = false;
	double x;
	double y;
	a.head->data = 0;
	while (!a_stop && !b_stop)
	{
		if (cin >> x)
		{
			a.head->data++;
			node* t = new node(x);
			pa->next = t;
			pa = pa->next;

			d.head->data++;
			node* tmp = new node(x);
			pd->next = tmp;
			pd = pd->next;
		}
		else
		{
			x = 0;
			cin.clear();
			cin.ignore();
			a_stop = true;
		}
		if (cin >> y)
		{
			b.head->data++;
			node* t = new node(y);
			pb->next = t;
			pb = pb->next;

			c.head->data++;
			node* tmp = new node(y);
			tmp->next = pc->next;
			pc->next = tmp;
		}
		else
		{
			y = 0;
			cin.clear();
			cin.ignore();
			b_stop = true;
		}
		if (!b_stop)
		{
			signal s=c*d;
			res.head->data++;
			node* t = new node(s.sum());
			pr->next = t;
			pr = pr->next;
		}
		else if(!a_stop)
		{
			d.head->data--;
			d.head->next=d.head->next->next;
			signal s = c * d;

			res.head->data++;
			node* t = new node(s.sum());
			pr->next = t;
			pr = pr->next;
		}
	}
	while (!a_stop)
	{
		if (cin >> x)
		{
			a.head->data++;
			node* t = new node(x);
			pa->next = t;
			pa = pa->next;


			node* tmp = new node(x);
			pd->next = tmp;
			pd = pd->next;
			d.head->next=d.head->next->next;
		}
		else
		{
			cin.clear();
			cin.ignore();
			a_stop = true;
			break;
		}
		if (!a_stop)
		{
			signal s = c * d;

			res.head->data++;
			node* t = new node(s.sum());
			pr->next = t;
			pr = pr->next;
		}
	}
	while (!b_stop)
	{
		if (cin >> y)
		{
			b.head->data++;
			node* t = new node(y);
			pb->next = t;
			pb = pb->next;

			c.head->data++;
			node* tmp = new node(y);
			tmp->next = pc->next;
			pc->next = tmp;
		}
		else
		{
			cin.clear();
			cin.ignore();
			b_stop = true;
			break;
		}
		if (!b_stop)
		{
			signal s = c * d;

			res.head->data++;
			node* t = new node(s.sum());
			pr->next = t;
			pr = pr->next;
		}
	}
	pd=d.head;
	if (a_stop&&b_stop)
	{
		while(pd->next!=NULL&&pd->next->next!=NULL)
		{
			d.head->data--;
			pd->next=pd->next->next;
			signal s = c * d;

			res.head->data++;

			node* t = new node(s.sum());
			pr->next = t;
			pr = pr->next;
		}
	}
	a.offset = 1;
	b.offset = 1;
	res.offset = 1;
	return res;
}