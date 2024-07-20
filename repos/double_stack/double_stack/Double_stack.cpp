#include"Doubel_stack.h"

Double_stack::Double_stack()
{
	topa=-1;
	topb=maxsize;
}

bool Double_stack:: pop_a()
{
	if(topa==-1)
		return false;
	topa--;
	return true;
}

bool Double_stack::pop_b()
{
	if(topb==maxsize)
		return false;
	topb++;
	return true;
}

int Double_stack::top_a()
{
	if(topa==-1)
		return -1;
	return data[topa];
}

int Double_stack::top_b()
{
	if(topb==maxsize)
		return -1;
	return data[topb];
}

bool Double_stack::push_a(int item)
{
	if(topa==topb-1)
		return false;
	data[++topa]=item;
	return true;
}

bool Double_stack::push_b(int item)
{
	if (topa == topb - 1)
		return false;
	data[--topb] = item;
	return true;
}

bool Double_stack::empty_a()
{
	return topa==-1;
}

bool Double_stack::empty_b()
{
	return topb == maxsize;
}