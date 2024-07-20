#pragma once
#include<iostream>
using namespace std;
struct node
{
	double data;
	node* next;
	node(double d=0,node* n=NULL):data(d),next(n){}
};
class signal
{
protected:
	node* head;
	int offset;//相对于head的偏移量
	void write(int index,double data);
	int get_index(int num);
	double sum();
public:
	~signal();
	signal() {head=new node(0,NULL);offset=0;}
	signal(double* a,int ofs,int len);//数组实现输入信号
	signal(const signal& a);
	void limited_in();//该序列长度有限（长度自定，例如n=-3:8）
	void clear();
	void set_offset(int n);

	double get(int index);
	void print();
	friend ostream& operator<<(ostream& out,signal a);

	double& operator[](int index);//能够读取、写入该序列任意位置，例如 x[n], n=-3:8, 令 x[3]=5; x[4]=x[4]-2等等
	signal operator=(signal a);
	friend signal operator+(signal a,signal b);
	friend signal operator-(signal a,signal b);
	friend signal operator-(signal a);
	friend signal operator*(double a,signal b);
	friend signal operator*(signal a,signal b);
	friend signal linear_conv(signal a ,signal b);
	friend signal circle_conv(signal a,signal b,int k);
	friend void allign(signal& a,signal& b);
	friend signal corr(signal a,signal b);
	friend double coef(signal a,signal b);

	void add0f(int n);
	void add0r(int n);
	void delay(int t);
	void promt(int t);
	void reverse();
	void upsample(int t);
	void downsample(int t);
	signal diff();
	signal accum();

	//infinite signal
	void infinite_in();//序列长度无限的输入

	friend void inf_add0f(signal& a,int n);
	friend void inf_add0r(signal& a,int n);
	friend void inf_delay(signal& a,int t);
	friend void inf_promt(signal& a, int t);
	friend void inf_reverse(signal& a);
	friend void inf_upsample(signal& a,int T);
	friend void inf_downsample(signal& a, int T);
	friend signal inf_diff(signal& a);
	friend signal inf_accum(signal& a);

	friend signal inf_add(signal& a, signal& b);
	friend signal inf_mul(signal& a, signal& b);
	friend signal inf_linear_conv(signal& a, signal& b);
};
