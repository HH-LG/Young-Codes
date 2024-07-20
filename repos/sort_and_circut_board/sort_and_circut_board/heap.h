#pragma once
#include<iostream>
using namespace std;
const int maxsize = 10000;

class binary_heap
{
	double* ary;
	int cnt;
	int* cmp_cnt;
	int* swap_cnt;
public:
	binary_heap() { cnt = 0; ary = new double[maxsize]; }
	binary_heap(double* a, int n,int* c_cnt= NULL,int* s_cnt=NULL);
	void insert(double entry);
	void remove();
	void shift_down(int idx);
	void shift_up(int idx);
	bool empty();
	void show();
};