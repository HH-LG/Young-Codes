#pragma once
const int maxsize=20;
class Double_stack
{
	int topa;
	int topb;
	int data[maxsize];
public:
	Double_stack();
	bool pop_a();
	bool pop_b();
	int top_a();
	int top_b();
	bool push_a(int);
	bool push_b(int);
	bool empty_a();
	bool empty_b();
};