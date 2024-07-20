#include"list.h"
#include"stack_queue.h"
#include"tree.h"
#include"sort.h"
#include"summary.h"
#include<random>
#include<time.h>
#include<iostream>
using namespace std;
int main()
{
	int pre[] = { 1,2,4,6,7,3,5,3 };
	int in[] ={6,4,3,7,2,5,1,3};
	thread_tree t;
	t.init_tree_with_sequence(pre,in,0,7,0,7);
	t.level_order();
	cout<<endl;
	node* a=t.link_leaves();
	while (a)
	{
		cout<<a->data;
		a=a->rp;
	}
	//srand(time(NULL));
	//int a[10];
	//for (int i = 0; i < 10; i++)
	//{
	//	a[i]=rand()%20;
	//	cout<<a[i]<<' ';
	//}
	//merge_sort(a,0,9);
	//cout<<endl;
	//for (int i = 0; i < 10; i++)
	//	cout << a[i] << ' ';
	//int a[5]={1,2,3,4,5},b[5]={6,7,8,9,10};
	//cout<<find_median(a,b,0,4,0,4);
	return 0;
}