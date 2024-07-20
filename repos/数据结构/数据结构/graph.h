#pragma once
#include<iostream>
using namespace std;

const int maxsize=100;
struct arcnode
{
	int adjvex;
	arcnode* nextarc;
};
struct adjnode
{
	int data;
	arcnode *firstarc;
};
class Graph
{
	adjnode *vertex[maxsize];
	bool mark[maxsize];
public:
	int FirstNeighbor(int v)
	{
		if(vertex[v]->firstarc)
			return vertex[v]->firstarc->adjvex;
		return -1;
	}
	int FindNextNeighbor(int v, int x)
	{
		arcnode *cur=vertex[v]->firstarc;
		while (cur)
		{
			if (cur->adjvex == x)
				return cur->nextarc->adjvex;
			cur=cur->nextarc;
		}
		return -1;
	}
	bool is_tree()
	{
		int i;
		for(i=0;i<maxsize;i++)
			mark[i]=false;
		if(DFS(0))
			return false;
		for(i=0;i<maxsize;i++)
			if(!mark[i])
				return false;
		return true;
	}
	bool DFS(int v)
	{
		int i;
		static bool loop=false;
		mark[v]=true;
		for (i = FirstNeighbor(v); i >= 0; i = FindNextNeighbor(v, i))
		{
			if(!mark[i])
				DFS(i);
			else
				loop=true;//ÓÐ»ØÂ·
		}
		return loop;
	}
	void DFS_nonre(int v)
	{
		for(int i=0;i<maxsize;i++)
			mark[i]=false;
		int stack[maxsize],top=-1;
		mark[v]=true;
		stack[++top]=v;
		while (top!=-1)
		{
			v=stack[top--];
			cout << vertex[v]->data;
			for(int i=FirstNeighbor(v);i!=-1;i=FindNextNeighbor(v,i))
			{ 
				if (!mark[i])
				{
					mark[i]=true;
					stack[++top]=i;
				}
			}
			
		}
	}
};